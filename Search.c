#include "Search.h"

/*Search Functions*/

/**
 * 
 * @param field - field number of  the auxStruct 
 * @param searchValue - memory adress of the search value
 * @param list - Class data
 * @param aux - Memory adress of the auxiliary struct 
 * @param elementsNumber - number of data elements (number of registries)
 * @param structTypeSize - Size of the Class data type 
 * @param searchValueType - Type of the search value 
 * @param resultCounter - Memory adress of a unsigned int variable ,contains the number of registries found  ( query rows number )  
 * @return a pointer to an array with the keys founded , if 0 founded , return -1 in all array positions 
 */
int * search(const unsigned int field, void *searchValue, void * list, FieldAux *aux, const unsigned int elementsNumber, const unsigned int structTypeSize, DataType searchValueType, unsigned int *resultCounter, char *signal) {

    unsigned int i = 0, j = 0;
    *resultCounter = 0;
    void *reg;
    int atributeValue = NULL;

    static int resultKeys[50];
    for (i = 0; i < elementsNumber; i++) {
        reg = list + (structTypeSize * i);
        //TODO implementar a função elementMemoryAdress
        getAtributeValue(reg, aux, field, &atributeValue);
        DataType type = aux[field].type;
        unsigned int result = compare(type, &atributeValue, searchValueType, searchValue, signal);
        if (result == true) {
            resultKeys[*resultCounter] = i;
            (*resultCounter)++;
        }
    }
    for (j = *resultCounter; j < 50; j++) {
        resultKeys[j] = NO_VALUE;
    }
    if (*resultCounter == 0) puts("No value found in search");
    return resultKeys;
};

//TODO search function to only one result

/**
 * Returns de first result founded
 * @param class
 * @param field
 * @param searchValue
 * @param searchValueType
 * @param resultCounter
 * @param signal
 * @return 
 */
int searchSingle(Model *class, const unsigned int field, void *searchValue, DataType searchValueType, unsigned int *resultCounter, char *signal) {
    int * search_result;
    search_result = search(field, searchValue, class->data, class->auxStruct, *(class->elements), class->StructTypeSize, searchValueType, resultCounter, signal);
    if (resultCounter != 0) {
        return (*(search_result + 0));
    } else {
        puts("Search Single: search value not found");
        return NO_VALUE;
    }
};


/*End of Search Functions*/
