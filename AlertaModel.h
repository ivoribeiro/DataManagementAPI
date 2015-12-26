/* 
 * File:   AlertaModel.h
 * Author: ivo
 *
 * Created on 26 de Dezembro de 2015, 14:55
 */

#ifndef ALERTAMODEL_H
#define	ALERTAMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif


#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_alerta;
        unsigned short id_tipo_alerta;
        char * descricao[SHORT_STRING];
        Date date;
    } Alerta;

    typedef enum {
        ID_ALERTA,
        ID_TIPO_ALERTA_ALERTA,
        DESCRICAO_ALERTA,
        DATE_ALERT
    } CamposConforto;



#ifdef	__cplusplus
}
#endif

#endif	/* ALERTAMODEL_H */

