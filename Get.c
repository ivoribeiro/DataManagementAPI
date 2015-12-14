#include "Get.h"

/* Get functions */

//TODO real necessary functions?

/**
 * 
 * @param i - Memory adress of variable to make cast to int 
 * @param storage
 */
void getInt(void *i, void *storage) {
    int *val = (int *) i;
    int *s = (int*) storage;
    *s = *val;

};

/**
 * 
 * @param i - Memory adress of variable to make cast to int 
 * @param storage
 */
void getShort(void *sh, void *storage) {
    short *val = (short *) sh;
    short *s = (short*) storage;
    *s = *val;

};

/**
 * 
 * @param s
 * @param storage
 */
void getString(void *s, void *storage) {
    char *val = (char *) s;
    char *st = (char*) storage;
    *st = *val;
};

/**
 * 
 * @param f
 * @param storage
 */
void getFloat(void *f, void *storage) {
    float *val = (float *) f;
    float *s = (float*) storage;
    *s = *val;
};

/**
 * 
 * @param type type
 * @param reg
 * @param storage
 */
void get(DataType type, void *reg, void *storage) {
    if (type == STRING) {
        getString(reg, storage);
    } else if (type == INT) {
        getInt(reg, storage);
    } else if (type == SHORT) {
        getShort(reg, storage);
    } else if (type == FLOAT) {
        getFloat(reg, storage);
    }
}

/**
 * This method returns to a given pointer the value of a chosen atribute structure element;
 * @param *structElement-Pointer to the element structure;
 * @param *aux-Pointer to the aux structure;
 * @param atributeNumber-Atribute number inside of the structure;
 * @param *storage-Pointer to the variable where de atribute value is going to;
 * 
 */
void getAtributeValue(void * element, FieldAux *aux, const unsigned int atributeNumber, void * storage) {

    unsigned i;
    for (i = 0; i < atributeNumber; ++i) {
        element = element + aux[i].sizeBytes;
    }
    DataType type = aux[i].type;
    if (type == STRUCT) {
    }
    get(type, element, storage);

};

/* END of Get functions */
