#include "Memory.h"

/*Function not implemented*/

/**
 * 
 * @param list
 * @param structTypeSize
 * @param elementNumber
 * @param storage
 */
void * elementMemoryAdress(void * list, const unsigned int structTypeSize, const unsigned int elementNumber) {
    return list + (structTypeSize * elementNumber);
}

