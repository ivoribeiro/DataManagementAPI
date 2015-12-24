/* 
 * File:   RoleModel.h
 * Author: ivo
 *
 * Created on 24 de Dezembro de 2015, 22:40
 */

#ifndef ROLEMODEL_H
#define	ROLEMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <string.h>
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_role;
        char descricao[SHORT_STRING];
    } Role;

    typedef enum {
        ID_ROLE,
        DESCRICAO_ROLE
    } CamposRole;

#ifdef	__cplusplus
}
#endif

#endif	/* ROLEMODEL_H */

