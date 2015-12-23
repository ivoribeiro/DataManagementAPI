
#include "ConfortoModel.h"

void ConfortoModel(Model *confortoModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamConforto, Conforto*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(confortoModel->name, "Conforto", 10);
    confortoModel->fieldsNumber = fieldsNumber;
    confortoModel->StructTypeSize = tamConforto;
    strncpy(confortoModel->fileName, "conforto.txt", 13);
    confortoModel->primaryKeyField = ID_CONFORTO;
    confortoModel->data = data;
    confortoModel->auxStruct = fields;
    confortoModel->elements = contador;
    confortoModel->aliasField = DESCRICAO_CONFORTO;

}