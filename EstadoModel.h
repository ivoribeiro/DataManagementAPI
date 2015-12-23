/* 
 * File:   EstadoModel.h
 * Author: ivo
 *
 * Created on 23 de Dezembro de 2015, 18:59
 */

#ifndef ESTADOMODEL_H
#define	ESTADOMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_estado;
        char descricao[SHORT_STRING];
    } Estado;

    typedef enum {
        ID_ESTADO,
        DESCRICAO_ESTADO
    } CamposEstado;





#ifdef	__cplusplus
}
#endif

#endif	/* ESTADOMODEL_H */

