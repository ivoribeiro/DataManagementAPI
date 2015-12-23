/* 
 * File:   tipo_utilizador.h
 * Author: ivo
 *
 * Created on January 27, 2015, 4:02 PM
 */

#ifndef TIPO_UTILIZADOR_H
#define	TIPO_UTILIZADOR_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_tipo_utilizador;
        char descricao[SHORT_STRING];
    } TipoUtilizador;

    typedef enum {
        ID_TIPO_UTILIZADOR,
        DESCRICAO_TIPO_UTILIZADOR
    } CamposTipoUtilizador;



#ifdef	__cplusplus
}
#endif

#endif	/* TIPO_UTILIZADOR_H */

