

#include "Print.h"

/*Print Functions*/

/**
 * 
 * @param s
 */
void printString(const void *s) {
    printf("%s\n", castString(s));
}

/**
 * 
 * @param s
 */
void printChar(const void *c) {
    printf("%c\n", castChar(c));
}

/**
 * 
 * @param i
 */
void printInt(const void * i) {
    printf("%d\n", castInt(i));
}

/**
 * 
 * @param sh
 */
void printShort(const void * sh) {
    printf("%hd\n", castShort(sh));
}

/**
 * 
 * @param ui
 */
void printUnsignedInt(const void * ui) {
    printf("%u\n", castUnsignedInt(ui));
}

/**
 * 
 * @param f
 */
void printFloat(const void * f) {
    printf("%f\n", castFloat(f));
}

//Public function

/*
 * @brief Imprime qualquer tipo de dados, recebe um tipo de dados e o valor a imprimir como parametros
 * @param type- tipo de dados do valor dado
 * @param *val- endereço de memoria do valor
 * Exemplo:
 * @code
 * int i = 1;
 * print(INT,&i);
 * @endcode
 */
void print(const DataType type, const void * val) {

    switch (type) {
        case STRING:
        {
            printString(val);
        }
            break;
        case CHAR:
        {
            printChar(val);
        }
            break;
        case INT:
        {
            printInt(val);
        }
            break;
        case UNSIGNED_INT:
        {
            printUnsignedInt(val);
        }
            break;
        case SHORT:
        {
            printShort(val);

        }
            break;
        case FLOAT:
        {
            printFloat(val);
        }
    }
}

/*End of Print Functions*/
