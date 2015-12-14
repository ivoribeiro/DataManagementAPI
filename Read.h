/* 
 * File:   Read.h
 * Author: ivo
 *
 * Created on 12 de Dezembro de 2015, 0:17
 */

#ifndef READ_H
#define	READ_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "DataTypes.h"
    void read(DataType type, void * field, const unsigned int maxSize);



#ifdef	__cplusplus
}
#endif

#endif	/* READ_H */

