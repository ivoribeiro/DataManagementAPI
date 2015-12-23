

#include "EstadoModel.h"

void EstadoModel(Model *estadoModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamEstado, Estado*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(estadoModel->name, "Estado", 10);
    estadoModel->fieldsNumber = fieldsNumber;
    estadoModel->StructTypeSize = tamEstado;
    strncpy(estadoModel->fileName, "estado.txt", 13);
    estadoModel->primaryKeyField = ID_ESTADO;
    estadoModel->data = data;
    estadoModel->auxStruct = fields;
    estadoModel->elements = contador;
    estadoModel->aliasField = DESCRICAO_ESTADO;

}