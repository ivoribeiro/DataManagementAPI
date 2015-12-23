#include "Read.h"

/*Read Functions*/

/**
 * 
 * @param field
 * @param maxSize
 */
void readString(void * field, const unsigned int maxSize) {
    char* pChar;
    pChar = (char*) field;
    pChar = field;
    scanf("%s", pChar);
    while (getchar() != '\n');
};

/**
 * 
 * @param field
 */
void readInt(void * field) {
    scanf("%d", (int*) field);
    while (getchar() != '\n');
};

/**
 * 
 * @param field
 */
void readShort(void * field) {
    scanf("%hd", (short*) field);
    while (getchar() != '\n');
};

/**
 * 
 * @param field
 */
void readFloat(void * field) {
    scanf("%f", (float*) field);
    while (getchar() != '\n');
};

/**
 * 
 * @param field
 */
void readChar(void * field) {
    scanf("%c", (char*) field);
    while (getchar() != '\n');
}

/**
 * 
 * @param type
 * @param field
 * @param maxSize
 */
void read(DataType type, void * field, const unsigned int maxSize) {
    if (type == STRING) {
        readString(field, maxSize);
    } else if (type == INT) {
        readInt(field);
    } else if (type == SHORT) {
        readShort(field);
    } else if (type == FLOAT) {
        readFloat(field);
    }
}

