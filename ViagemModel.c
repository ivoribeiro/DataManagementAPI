
#include "ViagemModel.h"

void ViagemModel(Model *viagemModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamViagem, Viagem*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(viagemModel->name, "Viagem", 11);
    viagemModel->fieldsNumber = fieldsNumber;
    viagemModel->StructTypeSize = tamViagem;
    strncpy(viagemModel->fileName, "viagens.txt", 12);
    viagemModel->primaryKeyField = ID_VIAGEM;
    viagemModel->data = data;
    viagemModel->auxStruct = fields;
    viagemModel->elements = contador;
    viagemModel->aliasField = ID_LOCAL_DESTINO;


}