/* 
 * File:   UtilizadorViagem.h
 * Author: ivo
 *
 * Created on 26 de Dezembro de 2015, 19:39
 */

#ifndef UTILIZADORVIAGEM_H
#define	UTILIZADORVIAGEM_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct {
        unsigned short id_utilizador;
        unsigned short id_viagem;
        unsigned short id_role;

    } UtilizadorViagem;

    enum CamposUtilizador {
        ID_UTILIZADOR_UTILIZADOR_VIAGEM,
        ID_VIAGEM_UTILIZADOR_VIAGEM,
        ID_ROLE_UTILIZADOR_VIAGEM,
    };


#ifdef	__cplusplus
}
#endif

#endif	/* UTILIZADORVIAGEM_H */

