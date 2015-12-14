/* 
 * File:   Print.h
 * Author: ivo
 *
 * Created on 11 de Dezembro de 2015, 18:14
 */

#ifndef PRINT_H
#define	PRINT_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include "DataTypes.h"
#include "Cast.h"

    void print(const DataType type, const void * val);


#ifdef	__cplusplus
}
#endif

#endif	/* PRINT_H */

