#include "List.h"

/*List Functions*/

void singleParsedList(Model *class, const unsigned int key, int *fields, unsigned fieldsNumber) ;

void listSubStruct(FieldAux *mainAux, const unsigned short field, void *reg) {
    unsigned short j;
    Model *subStructClass;
    subStructClass = mainAux[field].substructClass;
    FieldAux *substructAux;
    substructAux = subStructClass->auxStruct;
    for (j = 0; j < subStructClass->fieldsNumber; ++j) {
        reg = reg + substructAux[j].sizeBytes;
        printString(substructAux[j].alias);
        print(substructAux[j].type, reg);
        puts("");
    }
}

/**
 * This method list a field -> value of any Class data 
 * @param reg - Memory adress of some field 
 * @param aux - Memory adress of the auxiliary struct 
 * @param field - Aux field number
 */
void listRegistry(void * reg, FieldAux *aux, unsigned field) {
    unsigned i, j;
    for (i = 0; i < field; ++i) {
        reg = reg + aux[i].sizeBytes;
    }

    DataType type = aux[i].type;
    if (type != STRUCT) {

        if (aux[i].foreignKey == true) {
            unsigned int resultNumber;
            char signal[2 + 1];
            strcpy(signal, "==");
            int result = NO_VALUE;
            result = searchSingle(aux[i].parentClass, aux[i].parentPrimaryKey, reg, aux[i].type, &resultNumber, signal);
            if (result != NO_VALUE) {
                int field[1];
                field[0] = aux[i].parentClass->aliasField;
                singleParsedList(aux[i].parentClass, result, field, 1);
            } else {
                FieldAux *parentAux;
                parentAux = aux[i].parentClass->auxStruct;
                printf("No value found on Parent class %s primary key field %s \n", aux[i].parentClass->name, parentAux[aux[i].parentPrimaryKey].fieldName);
            }
        } else if (aux[i].foreignKey != true) {
            if (reg != NULL) {
                print(type, reg);
            } else puts("No Value");
        }
    }// se for extrutura
    else {

        listSubStruct(aux, i, reg);

    }
    puts("");
}




/**
 * This method does a full (full elements(keys) + full atributes(fields)) list of a given Class data
 * 
 * @param list - Memory adress of some Class data struct
 * @param structTypeSize - Size of the struct type
 * @param listSize - Number of Class data registries
 * @param aux - Memory adress of some Class auxiliary struct
 * @param fieldsNumber - Number of auxiliary struct registries (Number of fields that table contains)
 */
void fullList(Model *class) {
    unsigned int i = 0, j = 0;
    FieldAux *aux = class->auxStruct;
    for (i = 0; i < *(class->elements); i++) {
        puts("---------------------------------------------");
        for (j = 0; j < class->fieldsNumber; j++) {

            if (aux[j].foreignKey != true) {
                printString(aux[j].alias);
            }
            listRegistry(elementMemoryAdress(class->data, class->StructTypeSize, i), aux, j);
        }
        puts("---------------------------------------------");
    }
}

/**
 * This method does a parsed (chosed elements(keys) + chosed atributes(fields)) list of a given Class data
 * @param list - Memory adress of some Class data struct
 * @param structTypeSize - Size of the struct type
 * @param aux - Memory adress of some Class auxiliary struct
 * @param elements - Memory adress of an array of int keys
 * @param elementsNumber  - Number of elements in the array gived 
 * @param fields - Memory adress of array of int fields 
 * @param fieldsNumber - Number of fields int the array gived 
 */
void parsedList(Model *class, int *elements, unsigned elementsNumber, int *fields, unsigned fieldsNumber) {
    unsigned int i = 0, j = 0;
    FieldAux *aux = class->auxStruct;
    for (i = 0; i < elementsNumber; i++) {
        for (j = 0; j < fieldsNumber; j++) {
            if (aux[fields[j]].foreignKey != true) {
                printString(aux[fields[j]].alias);
            }
            listRegistry(elementMemoryAdress(class->data, class->StructTypeSize, elements[i]), aux, fields[j]);
        }
        //puts("---------------------------------------------");
    }
}

/**
 * this method does a parsed list of a registry (one registry + given fields)
 * @param class - Class (Table)
 * @param key - number of Class data registry
 * @param fields - Memory adress of a int array of the chosen Class aux fields
 * @param fieldsNumber - Number of fields chosen
 */
void singleParsedList(Model *class, const unsigned int key, int *fields, unsigned fieldsNumber) {

    int keys[] = {key};
    parsedList(class, keys, 1, fields, fieldsNumber);
}

/**
 * This method does a full list (all the fields) of a Class data registry 
 * @param class - Memory Adress of some Class (table)
 * @param key - Key number of the Class data registry that will be listed 
 */
void singleList(Model *class, const unsigned int key) {

    int keys[] = {key};
    int fields[class->fieldsNumber];
    unsigned int i;
    for (i = 0; i < class->fieldsNumber; i++) {
        fields[i] = i;
    }
    parsedList(class, keys, 1, fields, class->fieldsNumber);
}

/*End of list Functions*/
