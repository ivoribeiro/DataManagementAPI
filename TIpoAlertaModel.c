


#include "TipoAlertaModel.h"

void TipoAlertaModel(Model *tipoAlertaModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamTipoAlerta, TipoAlerta*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(tipoAlertaModel->name, "TipoAlerta", 5);
    tipoAlertaModel->fieldsNumber = fieldsNumber;
    tipoAlertaModel->StructTypeSize = tamTipoAlerta;
    strncpy(tipoAlertaModel->fileName, "tipoAlerta.txt", 10);
    tipoAlertaModel->primaryKeyField = ID_TIPO_ALERTA;
    tipoAlertaModel->data = data;
    tipoAlertaModel->auxStruct = fields;
    tipoAlertaModel->elements = contador;
    tipoAlertaModel->aliasField = DESCRICAO_TIPO_ALERTA;

}
