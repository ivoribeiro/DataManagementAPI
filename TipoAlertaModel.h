/* 
 * File:   TipoAlertaModel.h
 * Author: ivo
 *
 * Created on 26 de Dezembro de 2015, 12:36
 */

#ifndef TIPOALERTAMODEL_H
#define	TIPOALERTAMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_tipo_alerta;
        char descricao[SHORT_STRING];
    } Role;

    typedef enum {
        ID_TIPO_ALERTA,
        DESCRICAO_TIPO_ALERTA
    } CamposRole;




#ifdef	__cplusplus
}
#endif

#endif	/* TIPOALERTAMODEL_H */

