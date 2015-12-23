

#include "LocalModel.h"

void LocalModel(Model *localModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamLocal, Local*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(localModel->name, "Local", 6);
    localModel->fieldsNumber = fieldsNumber;
    localModel->StructTypeSize = tamLocal;
    strncpy(localModel->fileName, "local.txt", 10);
    localModel->primaryKeyField = ID_LOCAL;
    localModel->data = data;
    localModel->auxStruct = fields;
    localModel->elements = contador;
    localModel->aliasField = NOME_LOCAL;


}