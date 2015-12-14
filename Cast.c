
/* Cast functions */



#include "Cast.h"


//TODO Implement cast functions to all data types

/**
 * 
 * @param s - Memory adress of variable to make cast to string
 * @return 
 */
char *castString(const void *s) {
    char *val = (char *) s;
    return val;
}

/**
 * 
 * @param s - Memory adress of variable to make cast to char
 * @return 
 */
char castChar(const void *c) {
    return *(char *) c;
}

/**
 * 
 * @param i - Memory adress of variable to make cast to int
 * @return 
 */
int castInt(const void *i) {
    return *(int*) i;
}

/**
 * 
 * @param sh - Memory adress of variable to make cast to short
 * @return 
 */
short castShort(const void *sh) {
    return *(short*) sh;
}

/**
 * 
 * @param ui - Memory adress of variable to make cast to unsigned int
 * @return 
 */
unsigned int castUnsignedInt(const void *ui) {
    return *(unsigned int*) ui;
}

/**
 * 
 * @param f - Memory adress of variable to make cast to float
 * @return 
 */
float castFloat(const void *f) {
    return *(float*) f;
}

/* End of Cast functions */