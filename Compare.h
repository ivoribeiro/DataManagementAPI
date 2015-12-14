/* 
 * File:   Compare.h
 * Author: ivo
 *
 * Created on 11 de Dezembro de 2015, 23:01
 */

#ifndef COMPARE_H
#define	COMPARE_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <string.h>
#include "DataTypes.h"
#include "Cast.h"

    bool compare(DataType varType, void* varValue, DataType toCompareType, void * toCompareValue, char *signal);




#ifdef	__cplusplus
}
#endif

#endif	/* COMPARE_H */

