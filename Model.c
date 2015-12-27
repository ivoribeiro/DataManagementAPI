



#include "Model.h"

void ModelConstruct(char *name, char * file, Model *model, FieldAux *fields, unsigned int fieldsNumber, unsigned int sctructSize, Role*data, unsigned short *counter, unsigned int primaryKeyField, unsigned int aliasField) {


    strcpy(model->name, name);
    model->fieldsNumber = fieldsNumber;
    model->StructTypeSize = sctructSize;
    strcpy(model->fileName, file);
    model->primaryKeyField = primaryKeyField;
    model->data = data;
    model->auxStruct = fields;
    model->elements = counter;
    model->aliasField = aliasField;

}