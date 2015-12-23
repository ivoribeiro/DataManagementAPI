#include "UtilizadorModel.h"

void UtilizadorModel(Model *utilizadorModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamUtilizador, Utilizador*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(utilizadorModel->name, "Utilizador", 11);
    utilizadorModel->fieldsNumber = fieldsNumber;
    utilizadorModel->StructTypeSize = tamUtilizador;
    strncpy(utilizadorModel->fileName, "utilizadores.txt", 17);
    utilizadorModel->primaryKeyField = ID_UTILIZADOR;
    utilizadorModel->data = data;
    utilizadorModel->auxStruct = fields;
    utilizadorModel->elements = contador;
    utilizadorModel->aliasField = USERNAME;


}