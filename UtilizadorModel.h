/* 
 * File:   UtilzadorModel.h
 * Author: ivo
 *
 * Created on 23 de Dezembro de 2015, 2:12
 */

#ifndef UTILZADORMODEL_H
#define	UTILZADORMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <string.h>
#include "DataTypes.h" 
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_utilizador;
        unsigned short id_tipo_utilizador;
        char NOME[MEDIUM_STRING];
        char username[SHORT_STRING];
        char password[SHORT_STRING];
    } Utilizador;

    enum CamposUtilizador {
        ID_UTILIZADOR,
        ID_TIPO_UTILIZADOR_UTILIZADOR,
        NOME,
        USERNAME,
        PASSWORD
    };


#ifdef	__cplusplus
}
#endif

#endif	/* UTILZADORMODEL_H */

