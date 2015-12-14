
#include "TipoUtilizadorModel.h"

void TipoUtilizadorModel(Model *tipoUtilizadorModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamTipoTipoUtilizador, TipoUtilizador*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(tipoUtilizadorModel->name, "Tipo Utilizador", 16);
    tipoUtilizadorModel->fieldsNumber = fieldsNumber;
    tipoUtilizadorModel->StructTypeSize = tamTipoTipoUtilizador;
    strncpy(tipoUtilizadorModel->fileName, "tipoUtilizadores.txt", 22);
    tipoUtilizadorModel->primaryKeyField = ID_TIPO_UTILIZADOR;
    tipoUtilizadorModel->data = data;
    tipoUtilizadorModel->auxStruct = fields;
    tipoUtilizadorModel->elements = contador;
    tipoUtilizadorModel->aliasField = DESCRICAO_TIPO_UTILIZADOR;


}