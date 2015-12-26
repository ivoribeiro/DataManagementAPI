

#include "AlertaModel.h"

void AlertaModel(Model *alertaModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamAlerta, Alerta*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(alertaModel->name, "Alerta", 10);
    alertaModel->fieldsNumber = fieldsNumber;
    alertaModel->StructTypeSize = tamAlerta;
    strncpy(alertaModel->fileName, "alerta.txt", 13);
    alertaModel->primaryKeyField = ID_ALERTA;
    alertaModel->data = data;
    alertaModel->auxStruct = fields;
    alertaModel->elements = contador;
    alertaModel->aliasField = DESCRICAO_ALERTA;

}