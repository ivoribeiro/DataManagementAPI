/* 
 * File:   UserAlertModel.h
 * Author: ivo
 *
 * Created on 26 de Dezembro de 2015, 17:57
 */

#ifndef USERALERTMODEL_H
#define	USERALERTMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif

     typedef struct {
        unsigned short id_utilizador;
        unsigned short id_Alerta;
    } UtilizadorAlerta;

    enum CamposUtilizador {
        ID_UTILIZADOR__UTILIZADOR_ALERTA,
        ID_ALERTA_UTILIZADOR_ALERTA,
    };



#ifdef	__cplusplus
}
#endif

#endif	/* USERALERTMODEL_H */

