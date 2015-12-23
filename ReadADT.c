#include "ReadADT.h"

bool foreignKeyRead(FieldAux *aux, const unsigned short field) {

    printString(aux[field].parentClass->name);
    puts("1-List / 2-New");
    unsigned int op;
    readInt(&op);
    if (op == 1) {
        puts("");
        puts("__________________________________________________________________________");
        puts("__________________________________________________________________________");
        fullList(aux[field].parentClass);
        puts("__________________________________________________________________________");
        puts("__________________________________________________________________________");
        puts("");
    } else if (op == 2) {
        create(aux[field].parentClass);
        char nomeFicheiro[MEDIUM_STRING];
        strcpy(nomeFicheiro, aux[field].parentClass->fileName);
        writeFile(nomeFicheiro, aux[field].parentClass->name);
    }
    return op;
}

/**
 * This method read a registy of a given Class data
 * @param rtype request type ( not implemented )
 * @param reg the Class data registry
 * @param aux Memory adress of some Class auxiliary struct
 * @param field field number of the Class Aux struct  
 */

void readRegistry(Model *class, RequestType rtype, void * reg, unsigned int field) {
    unsigned i, j;
    unsigned short op = 0;
    FieldAux * aux = class->auxStruct;
    for (i = 0; i < field; ++i) {
        reg = reg + aux[i].sizeBytes;
    }
    DataType type = aux[i].type;

    //IF the request type is CREATE and the field is auto incremental will not request user data and set automat number (last reg number + step)
    if (rtype == CREATE && aux[i].autoIncrement == true) {
        unsigned short step, storage;
        //if there is registries in data , this will get the id of the last registry
        //if (*(class->elements) != 0)getAtributeValue(elementMemoryAdress(class->data, class->StructTypeSize, *(class->elements)), aux, field, &storage);
        //step = (storage + aux[i].step);
        step = (*(class->elements) + aux[i].step);
        setField(type, reg, &step);
    } else {
        if (aux[i].type != STRUCT) {
            if (aux[i].foreignKey == true) {
                op = foreignKeyRead(aux, i);
            }
            //SE não for chave estrangeira ou se for chave estrangeira e ter sido escolhida opção de listagem 
            if (op == 0 || op == 1) {
                if (aux[i].required == true) {
                    do {
                        printString(aux[i].alias);
                        read(type, reg, aux[i].maxSize);
                        puts("");
                    } while (reg == NULL);

                } else {

                    if (aux[i].date == true) {
                        puts("Inserir Automaticamente Data");
                    } else {
                        printString(aux[i].alias);
                        read(type, reg, aux[i].maxSize);
                        puts("");
                    }
                }
            } else if (op == 2) {
                unsigned short lastReg = *(aux[field].parentClass->elements);
                setField(type, reg, &lastReg);
            }
        }// se for extrutura
        else {
            Model *subStructClass;
            subStructClass = aux[i].substructClass;
            FieldAux *substructAux;
            substructAux = subStructClass->auxStruct;
            printString(aux[i].alias);
            for (j = 0; j < subStructClass->fieldsNumber; ++j) {
                reg = reg + substructAux[j].sizeBytes;
                printString(substructAux[j].alias);
                read(substructAux[j].type, reg, substructAux[j].maxSize);
                puts("");
            }



        }


    }
}

/**
 This method does a parsed (chosed elements(keys) + chosed atributes(fields)) read of a given Class data
 * @param rtype
 * @param structTypeSize - Size of the struct type
 * @param list - Memory adress of some Class data struct
 * @param aux - Memory adress of some Class auxiliary struct
 * @param elements - Memory adress of an array of int keys
 * @param elementsNumber  - Number of elements in the array gived 
 * @param fields - Memory adress of array of int fields 
 * @param fieldsNumber - Number of fields int the array gived 
 * 
 * 
 */
void parsedRead(Model *class, RequestType rtype, int *elements, unsigned elementsNumber, int *fields, unsigned fieldsNumber) {

    unsigned int i = 0, j = 0;
    for (i = 0; i < elementsNumber; i++) {
        for (j = 0; j < fieldsNumber; j++) {
            readRegistry(class, rtype,class->data + (class->StructTypeSize * elements[i]), fields[j]);
        }
        puts("---------------------------------------------");
    }

}

void singleParsedRead(Model *class, RequestType rtype, const unsigned int element, int *fields, unsigned fieldsNumber) {
    int elements[] = {element};
    parsedRead(class, rtype, elements, 1, fields, fieldsNumber);
}

/**
 * 
 * @param rType
 * @param structTypeSize
 * @param list
 * @param element
 * @param aux
 * @param fieldsNumber
 */
void fullRead(Model * class, RequestType rType, const unsigned short element) {
    unsigned int j = 0;
    for (j = 0; j < class->fieldsNumber; j++) {
        readRegistry(class, rType, class->data + (class->StructTypeSize * element), j);
    }
}

/*End of read Functions*/