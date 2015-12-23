/* 
 * File:   main.c
 * Author: ivo
 *
 * Created on January 27, 2015, 3:09 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#include "DataManagement.h"
//---------TipoUtilizador------------
#include "TipoUtilizadorModel.h"
#include "TipoUtilizadorController.h"
//---------Utilizador---------------
#include "UtilizadorModel.h"
#include "UtilizadorController.h"
//---------Viagem---------------
#include "ViagemModel.h"
#include "ViagemController.h"

/*
 * 
 */
int main(int argc, char** argv) {

    //---------------------------------------------------------------------------------------------------------//    

    Model tipoUtilizadorModel;

    const unsigned int MAX_TIPO_UTILIZADORES = 5;
    unsigned short contadorTipoUtilizador = 0;


    //Campos TipoUtilizador

    FieldAux tipoUtilizadorFields[] = {
        {.fieldName = "id_tipo_utilizador", .alias = "Numero Tipo Utilizador", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Descricao", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };

    //Data
    TipoUtilizador tipoUtilizadorData[MAX_TIPO_UTILIZADORES];

    //Numero de campos que o tipo de utilizador tem
    const unsigned int tipoUtilizadorfieldsNumber = (sizeof (tipoUtilizadorFields) / sizeof (tipoUtilizadorFields[0]));
    //Tamanho da estrutura
    const unsigned int tamTipoUtilizador = sizeof (TipoUtilizador);

    TipoUtilizadorModel(&tipoUtilizadorModel, tipoUtilizadorFields, tipoUtilizadorfieldsNumber, tamTipoUtilizador, tipoUtilizadorData, &contadorTipoUtilizador);

    readFile(&tipoUtilizadorModel, MAX_TIPO_UTILIZADORES);

    //postTipoUtilizador(&tipoUtilizadorModel); 
    //getAllTipoUtilizador(&tipoUtilizadorModel);
    //putTipoUtilizador(&tipoUtilizadorModel, 2);
    //getShowTipoUtilizador(&tipoUtilizadorModel, 2);
    //deleteTipoUtilizador(&tipoUtilizadorModel,2);

    //---------------------------------------------------------------------------------------------------------//


    Model utilizadorModel;

    const unsigned int MAX_UTILIZADORES = 30;
    unsigned short contadorUtilizador = 0;


    //Campos TipoUtilizador

    FieldAux utilizadorFields[] = {
        {.fieldName = "id_utilizador", .alias = "Numero Utilizador", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "id_tipo_utilizador", .alias = "Id Tipo de Utilizador", .sizeBytes = SHORT_SIZE, .type = SHORT, .required = true, .unique = false, .foreignKey = true, .parentPrimaryKey = ID_TIPO_UTILIZADOR, .parentClass = &tipoUtilizadorModel},
        {.fieldName = "nome", .alias = "Nome", .sizeBytes = MEDIUM_STRING, .type = STRING, .unique = false, .required = true},
        {.fieldName = "username", .alias = "Username", . sizeBytes = SHORT_STRING, .type = STRING, .required = true},
        {.fieldName = "password", .alias = "Password", . sizeBytes = SHORT_STRING, .type = STRING, .required = true}

    };



    //Data
    Utilizador utilizadorData[MAX_UTILIZADORES];

    //Numero de campos que o tipo de utilizador tem
    const unsigned int utilizadorFieldsNumber = (sizeof (utilizadorFields) / sizeof (utilizadorFields[0]));
    //Tamanho da estrutura
    const unsigned int tamUtilizador = sizeof (Utilizador);

    UtilizadorModel(&utilizadorModel, utilizadorFields, utilizadorFieldsNumber, tamUtilizador, utilizadorData, &contadorUtilizador);

    readFile(&utilizadorModel, MAX_UTILIZADORES);

    //postUtilizador(&utilizadorModel); 
    //getAllUtilizador(&utilizadorModel);
    //putUtilizador(&utilizadorModel, 0);
    //getShowUtilizador(&utilizadorModel, 0);
    //deleteUtilizador(&utilizadorModel,0);


    //---------------------------------------------------------------------------------------------------------//

    Model viagemModel;

    const unsigned int MAX_VIAGENS = 30;
    unsigned short contadorViagem = 0;


    //Campos TipoViagem

    FieldAux viagemFields[] = {
        {
            .fieldName = "id_viagem", .alias = "Numero Viagem", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true,
            .required = true, .autoIncrement = true, .step = 1
        },
        {
            .fieldName = "id_local_inicio", .alias = "Id Local Inicio", .sizeBytes = SHORT_SIZE, .type = SHORT,
            .required = true, .unique = false, .foreignKey = true, .parentPrimaryKey = ID_LOCAL, .parentClass = &localModel
        },
        {
            .fieldName = "id_local_final", .alias = "Id Local Final", .sizeBytes = SHORT_SIZE, .type = SHORT,
            .required = true, .unique = false, .foreignKey = true, .parentPrimaryKey = ID_LOCAL, .parentClass = &localModel
        },
        {
            .fieldName = "lugares_disponiveis", .alias = "Lugares Disponiveis", .sizeBytes = SHORT_SIZE, .type = SHORT,
            .unique = false,
            .required = true
        },
        {
            .fieldName = "duracao_estimada", .alias = "Duração Estimada", . sizeBytes =FLOAT_SIZE, .type = FLOAT,
            .required = true
        },
        {
            .fieldName = "custo_viajante", .alias = "Custo Viajante", . sizeBytes = FLOAT_SIZE, .type = FLOAT,
            .required = true
        },
        {
            .fieldName = "id_conforto", .alias = "Id Conforto", .sizeBytes = SHORT_SIZE, .type = SHORT,
            .required = true, .unique = false, .foreignKey = true, .parentPrimaryKey = ID_CONFORTO, .parentClass = &confortoModel
        },
        {
            .fieldName = "id_estado", .alias = "Id Estado", .sizeBytes = SHORT_SIZE, .type = SHORT,
            .required = true, .unique = false, .foreignKey = true, .parentPrimaryKey = ID_ESTADO, .parentClass = &estadoModel
        },
        {
            .fieldName = "data_saida", .alias = "Data Saída", .sizeBytes = DATE_SIZE, .type = DATE,
            .required = true, .unique = false,
        }
    };



    //Data
    Viagem viagemData[MAX_VIAGENS];

    //Numero de campos que o tipo de viagem tem
    const unsigned int viagemFieldsNumber = (sizeof (viagemFields) / sizeof (viagemFields[0]));
    //Tamanho da estrutura
    const unsigned int tamViagem = sizeof (Viagem);

    ViagemModel(&viagemModel, viagemFields, viagemFieldsNumber, tamViagem, viagemData, &contadorViagem);

    readFile(&viagemModel, MAX_VIAGENS);

    //postViagem(&viagemModel); 
    //getAllViagem(&viagemModel);
    //putViagem(&viagemModel, 0);
    //getShowViagem(&viagemModel, 0);
    //deleteViagem(&viagemModel,0);



    //---------------------------------------------------------------------------------------------------------//

    typedef struct {
        Model * tipoUtilizadorModel;
        Model * utilizadorModel;

    } Models;

    Models models;
    models.tipoUtilizadorModel = &tipoUtilizadorModel;
    models.utilizadorModel = &utilizadorModel;




    return (EXIT_SUCCESS);
}



