/* 
 * File:   ViagemModel.h
 * Author: ivo
 *
 * Created on 23 de Dezembro de 2015, 15:41
 */

#ifndef VIAGEMMODEL_H
#define	VIAGEMMODEL_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <string.h>
#include "Date.h"
#include "DataTypes.h" 
#include "AbstractDataTypes.h"

    typedef struct {
        unsigned short id_viagem;
        unsigned short id_local_inicio;
        unsigned short id_local_destino;
        unsigned short lugares_disponiveis;
        float duracao_estimada;
        float custo_viajante;
        unsigned short id_conforto;
        unsigned short id_estado;
        Date data_saida;
    } Viagem;

    enum CamposViagem {
        ID_VIAGEM,
        ID_LOCAL_INICIO,
        ID_LOCAL_DESTINO,
        LUGARES_DISPONIVEIS,
        DURACAO_ESTIMADA,
        CUSTO_VIAJANTE,
        ID_CONFORTO_VIAGEM,
        ID_ESTAD0_VIAGEM,
        DATA_SAIDA
    };



#ifdef	__cplusplus
}
#endif

#endif	/* VIAGEMMODEL_H */

