#include "Compare.h"

/*Compare functions*/

/**
 * 
 * @param string_one
 * @param string_two
 * @return 
 */
bool compareStrings(void *string_one, void *string_two) {
    string_one = castString(string_one);
    string_two = castString(string_two);
    if (strcmp(string_one, string_two) == 0) return true;
    else return false;
}

/**
 * 
 * @param type_one
 * @param value_one
 * @param type_two
 * @param value_two
 * @return 
 */
bool generalCompare(DataType type_one, void *value_one, DataType type_two, void *value_two, char *signal) {
    //TODO nao esta a fazer cast
    if (type_one == INT) {
        *(int*) value_one = castInt(value_one);
        //printf("%d", value_one);
    } else if (type_one == FLOAT) {
        *(float*) value_one = castFloat(value_one);
    } else if (type_one == SHORT) {
        *(short*) value_one = castShort(value_one);
    }
    if (type_two == INT) {
        *(int*) value_two = castInt(value_two);
    } else if (type_two == FLOAT) {
        *(float*) value_two = castFloat(value_two);
    } else if (type_two == SHORT) {
        *(short*) value_two = castShort(value_two);
    }

    char cmpSignal[2 + 1];
    strcpy(cmpSignal, "==");
    if (compareStrings(signal, cmpSignal) == true) {
        //TODO nao fazer cast aqui
        if ((*(short*) value_one) == (*(short*) value_two)) return true;
        else return false;
    }
    strcpy(cmpSignal, ">");
    if (compareStrings(signal, cmpSignal) == true) {
        //TODO nao fazer cast aqui
        if (*(int*) value_one > *(int*) value_two) return true;
        else return false;
    }
    strcpy(cmpSignal, "<");
    if (compareStrings(signal, cmpSignal) == true) {
        //TODO nao fazer cast aqui
        if (*(int*) value_one < *(int*) value_two) return true;
        else return false;
    }
    strcpy(cmpSignal, ">=");
    if (compareStrings(signal, cmpSignal) == true) {
        //TODO nao fazer cast aqui
        if (*(int*) value_one >= *(int*) value_two) return true;
        else return false;
    }
    strcpy(cmpSignal, "<=");
    if (compareStrings(signal, cmpSignal) == true) {
        //TODO nao fazer cast aqui
        if (*(int*) value_one <= *(int*) value_two) return true;
        else return false;
    }
    strcpy(cmpSignal, "!=");
    if (compareStrings(signal, cmpSignal) == true) {
        //TODO nao fazer cast aqui
        if (*(int*) value_one != *(int*) value_two) return true;
        else return false;
    }

}

/**
 * 
 * @param varType
 * @param varValue
 * @param toCompareType
 * @param toCompareValue
 * @return 
 */
bool compare(DataType varType, void* varValue, DataType toCompareType, void * toCompareValue, char *signal) {
    unsigned int toReturn = false;
    if (varType == STRING && toCompareType == STRING) {
        toReturn = compareStrings(varValue, toCompareValue);
    }
    if (varType == CHAR && toCompareType == CHAR) {
        if (*(char*) varValue == *(char*) toCompareValue) return true;
        else return false;
    } else {
        if (generalCompare(varType, varValue, toCompareType, toCompareValue, signal) == true) toReturn = true;
        else toReturn = false;
    }
    return toReturn;
}


/*End of Compare Functions*/
