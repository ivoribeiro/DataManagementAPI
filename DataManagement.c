#include "DataManagement.h"


/*DataManagement API implementation */

//TODO Separate functions in diferent implementations
//TODO Convert functions to use Class




//TODO setField

void setField(DataType fieldType, void * field, void *value) {
    if (fieldType == SHORT) {
        * (short*) field = castShort(value);
    }
    if (fieldType == INT) {
        * (int*) field = castInt(value);
    }
}

/**
 * This method checks if already exists a given value in a Class data (table) atribute (field) 
 * @param field
 * @param searchValue
 * @param list
 * @param aux
 * @param elementsNumber
 * @param structTypeSize
 * @param searchValueType
 * @return 
 */
bool checkUniqueField(const unsigned int field, void *searchValue, void * list, FieldAux *aux, const unsigned int elementsNumber, const unsigned int structTypeSize, DataType searchValueType) {
    if (aux[field].unique) {
        unsigned int resultCounter;
        char signal[2 + 1];
        strcpy(signal, "==");
        search(field, searchValue, list, aux, elementsNumber, structTypeSize, searchValueType, &resultCounter, signal);
        if (resultCounter == 0) return false;
        else return true;

    } else {
        puts("Field isn't unique");
    }
}

/**
 * 
 * @param structTypeSize
 * @param list
 * @param contador
 * @param aux
 * @param fieldsNumber
 */
void create(Model * model) {
    fullRead(model, CREATE, (*model->elements));
    (*model->elements)++;

}

void update(Model * model, const unsigned short index) {
    fullRead(model, UPDATE, index);
}

void delete(Model *model, const unsigned short index) {
    unsigned short i;
    for (i = index; i < (*model->elements) - 1; i++) {
        memcpy(elementMemoryAdress(model->data, model->StructTypeSize, i), elementMemoryAdress(model->data, model->StructTypeSize, i + 1), model->StructTypeSize);
    }
    (*model->elements)--;
};





