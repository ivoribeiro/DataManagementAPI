/* 
 * File:   Get.h
 * Author: ivo
 *
 * Created on 11 de Dezembro de 2015, 19:42
 */

#ifndef GET_H
#define	GET_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "DataTypes.h"
#include "AbstractDataTypes.h"

    void getAtributeValue(void * element, FieldAux *aux, const unsigned int atributeNumber, void * storage);


#ifdef	__cplusplus
}
#endif

#endif	/* GET_H */

