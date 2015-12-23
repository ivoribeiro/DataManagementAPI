/* 
 * File:   LocalModel.h
 * Author: ivo
 *
 * Created on 23 de Dezembro de 2015, 17:07
 */

#ifndef LOCALMODEL_H
#define	LOCALMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_local;
        char nome[SHORT_STRING];
    } Local;

    typedef enum {
        ID_LOCAL,
        NOME_LOCAL
    } CamposLocal;




#ifdef	__cplusplus
}
#endif

#endif	/* LOCALMODEL_H */

