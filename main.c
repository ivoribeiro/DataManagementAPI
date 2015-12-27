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
//---------Local---------------
#include "LocalModel.h"
#include "LocalController.h"
//---------Conforto---------------
#include "ConfortoModel.h"
#include "ConfortoController.h"
//---------Estado---------------
#include "EstadoModel.h"
#include "EstadoController.h"
//---------Viagem---------------
#include "ViagemModel.h"
#include "ViagemController.h"
//---------Tipo Alerta------------
#include "TipoAlertaModel.h"
#include "TipoAlertaController.h"
//--------Alerta------------
#include "AlertaModel.h"
#include "AlertaController.h"
//---------Role---------------
#include "RoleModel.h"
#include "RoleController.h"

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
    // getAllTipoUtilizador(&tipoUtilizadorModel);
    //putTipoUtilizador(&tipoUtilizadorModel, 2);
    //getShowTipoUtilizador(&tipoUtilizadorModel, 1);
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
    //putUtilizador(&utilizadorModel, 1);
    //getShowUtilizador(&utilizadorModel, 1);
    //deleteUtilizador(&utilizadorModel,1);


    //---------------------------------------------------------------------------------------------------------//

    Model localModel;

    const unsigned int MAX_LOCAIS = 30;
    unsigned short contadorLocais = 0;


    //Campos TipoUtilizador

    FieldAux localFields[] = {
        {.fieldName = "id_local", .alias = "Numero Local", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "nome", .alias = "Nome", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };

    //Data
    Local localData[MAX_LOCAIS];

    //Numero de campos que o local tem
    const unsigned int localfieldsNumber = (sizeof (localFields) / sizeof (localFields[0]));
    //Tamanho da estrutura
    const unsigned int tamLocal = sizeof (Local);

    LocalModel(&localModel, localFields, localfieldsNumber, tamLocal, localData, &contadorLocais);

    readFile(&localModel, MAX_LOCAIS);

    //postLocal(&localModel);
    //getAllLocal(&localModel);
    //putLocal(&localModel, 1);
    //getShowLocal(&localModel, 1);
    //deleteLocal(&localModel,2);

    //---------------------------------------------------------------------------------------------------------//

    Model confortoModel;

    const unsigned int MAX_CONFORTOS = 30;
    unsigned short contadorConforto = 0;


    //Campos TipoUtilizador

    FieldAux confortoFields[] = {
        {.fieldName = "id_conforto", .alias = "Numero Conforto", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Descrição", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };

    //Data
    Conforto confortoData[MAX_CONFORTOS];

    //Numero de campos que o conforto tem
    const unsigned int confortofieldsNumber = (sizeof (confortoFields) / sizeof (confortoFields[0]));
    //Tamanho da estrutura
    const unsigned int tamConforto = sizeof (Conforto);

    ConfortoModel(&confortoModel, confortoFields, confortofieldsNumber, tamConforto, confortoData, &contadorConforto);

    readFile(&confortoModel, MAX_CONFORTOS);

    //postConforto(&confortoModel); 
    //getAllConforto(&confortoModel);
    //putConforto(&confortoModel, 3);
    //getShowConforto(&confortoModel, 3);
    //deleteConforto(&confortoModel,3);

    //---------------------------------------------------------------------------------------------------------//

    Model estadoModel;

    const unsigned int MAX_ESTADO = 30;
    unsigned short contadorEstado = 0;


    //Campos Estado

    FieldAux estadoFields[] = {
        {.fieldName = "id_estado", .alias = "Numero Estado", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Descrição", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };

    //Data
    Estado estadoData[MAX_ESTADO];

    //Numero de campos que o estado tem
    const unsigned int estadofieldsNumber = (sizeof (estadoFields) / sizeof (estadoFields[0]));
    //Tamanho da estrutura
    const unsigned int tamEstado = sizeof (Estado);

    EstadoModel(&estadoModel, estadoFields, estadofieldsNumber, tamEstado, estadoData, &contadorEstado);

    readFile(&estadoModel, MAX_ESTADO);

    //postEstado(&estadoModel);
    //getAllEstado(&estadoModel);
    //putEstado(&estadoModel,3);
    //getShowEstado(&estadoModel, 3);
    //deleteEstado(&estadoModel,3);
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
            .fieldName = "duracao_estimada", .alias = "Duração Estimada", . sizeBytes = FLOAT_SIZE, .type = FLOAT,
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
    Model tipoAlertaModel;

    const unsigned int MAX_TIPO_ALERTA = 30;
    unsigned short contadorTipoAlerta = 0;


    //Campos TipoAlerta

    FieldAux tipoAlertaFields[] = {
        {.fieldName = "id_tipo_alerta", .alias = "Numero Tipo Alerta", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Tipo de Alerta", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };

    //Data
    TipoAlerta tipoAlertaData[MAX_TIPO_ALERTA];

    //Numero de campos que o tipoAlerta tem
    const unsigned int tipoAlertafieldsNumber = (sizeof (tipoAlertaFields) / sizeof (tipoAlertaFields[0]));
    //Tamanho da estrutura
    const unsigned int tamTipoAlerta = sizeof (TipoAlerta);

    TipoAlertaModel(&tipoAlertaModel, tipoAlertaFields, tipoAlertafieldsNumber, tamTipoAlerta, tipoAlertaData, &contadorTipoAlerta);

    readFile(&tipoAlertaModel, MAX_TIPO_ALERTA);

    //postTipoAlerta(&tipoAlertaModel);
    //getAllTipoAlerta(&tipoAlertaModel);
    //putTipoAlerta(&tipoAlertaModel,3);
    //getShowTipoAlerta(&tipoAlertaModel, 3);
    //deleteTipoAlerta(&tipoAlertaModel,3);
    //---------------------------------------------------------------------------------------------------------//
    Model alertaModel;

    const unsigned int MAX_ALERTA = 30;
    unsigned short contadorAlerta = 0;


    //Campos Alerta

    FieldAux alertaFields[] = {
        {.fieldName = "id_tipo_alerta", .alias = "Numero Tipo Alerta", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Tipo de Alerta", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true},
        {
            .fieldName = "id_tipo_alerta", .alias = "Numero Tipo Alerta", .sizeBytes = SHORT_SIZE, .type = SHORT,
            .required = true, .unique = false, .foreignKey = true, .parentPrimaryKey = ID_TIPO_ALERTA_ALERTA, .parentClass = &tipoAlertaModel
        },
    };

    //Data
    Alerta alertaData[MAX_ALERTA];

    //Numero de campos que o alerta tem
    const unsigned int alertafieldsNumber = (sizeof (alertaFields) / sizeof (alertaFields[0]));
    //Tamanho da estrutura
    const unsigned int tamAlerta = sizeof (Alerta);

    AlertaModel(&alertaModel, alertaFields, alertafieldsNumber, tamAlerta, alertaData, &contadorAlerta);

    readFile(&alertaModel, MAX_ALERTA);

    //postAlerta(&alertaModel);
    //getAllAlerta(&alertaModel);
    //putAlerta(&alertaModel,3);
    //getShowAlerta(&alertaModel, 3);
    //deleteAlerta(&alertaModel,3);
    //---------------------------------------------------------------------------------------------------------//
    Model roleModel;

    const unsigned int MAX_ROLE = 30;
    unsigned short contadorRole = 0;


    //Campos Role

    FieldAux roleFields[] = {
        {.fieldName = "id_role", .alias = "Numero Role", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Role", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };

    //Data
    Role roleData[MAX_ROLE];

    //Numero de campos que o role tem
    const unsigned int rolefieldsNumber = (sizeof (roleFields) / sizeof (roleFields[0]));
    //Tamanho da estrutura
    const unsigned int tamRole = sizeof (Role);

    RoleModel(&roleModel, roleFields, rolefieldsNumber, tamRole, roleData, &contadorRole);

    readFile(&roleModel, MAX_ROLE);

    //postRole(&roleModel);
    //getAllRole(&roleModel);
    //putRole(&roleModel,0 );
    //getShowRole(&roleModel, 3);
    //deleteRole(&roleModel,3);
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



