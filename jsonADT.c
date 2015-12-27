#include "jsonADT.h"

void jsonRegistry(void * reg, FieldAux *aux, unsigned field, char *jsonStr) {
    unsigned i, j;
    char keyJsonStr[50];
    char valueJsonStr[50];

    for (i = 0; i < field; ++i) {
        reg = reg + aux[i].sizeBytes;
    }
    DataType type = aux[i].type;
    sprintf(keyJsonStr, "\"%s\":", aux[i].fieldName);

    if (type == STRING) {
        sprintf(valueJsonStr, "\"%s\"", castString(reg));
    } else
        if (type == INT) {
        sprintf(valueJsonStr, "%d", castInt(reg));

    } else
        if (type == SHORT) {
        sprintf(valueJsonStr, "%hi", castShort(reg));
    }
    strcat(jsonStr, keyJsonStr);
    strcat(jsonStr, valueJsonStr);
}

void jsonElement(Model *model, unsigned int nelement, char * jsonStr) {
    unsigned j = 0;
    FieldAux *aux = model->auxStruct;
    strcat(jsonStr, "{");
    for (j = 0; j < model->fieldsNumber; j++) {
        jsonRegistry(elementMemoryAdress(model->data, model->StructTypeSize, nelement), aux, j, jsonStr);
        strcat(jsonStr, ",");
    }
    jsonStr[strlen(jsonStr) - 1] = 0;
    strcat(jsonStr, "}");

}

void jsonAllElement(Model *model, char * jsonStr) {
    unsigned int i = 0, j = 0;
    for (i = 0; i < *(model->elements); i++) {
        jsonElement(model, i, jsonStr);
        strcat(jsonStr, ",");
    }
    jsonStr[strlen(jsonStr) - 1] = 0;
}

