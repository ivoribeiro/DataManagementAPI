/* 
 * File:   ConfortoModel.h
 * Author: ivo
 *
 * Created on 23 de Dezembro de 2015, 17:26
 */

#ifndef CONFORTOMODEL_H
#define	CONFORTOMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_conforto;
        char descricao[SHORT_STRING];
    } Conforto;

    typedef enum {
        ID_CONFORTO,
        DESCRICAO_CONFORTO
    } CamposConforto;




#ifdef	__cplusplus
}
#endif

#endif	/* CONFORTOMODEL_H */

