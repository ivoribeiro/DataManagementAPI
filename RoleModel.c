


#include "RoleModel.h"

void RoleModel(Model *roleModel, FieldAux *fields, unsigned int fieldsNumber, unsigned int tamRole, Role*data, unsigned short *contador) {

    //--------------------Fields------------------------   

    strncpy(roleModel->name, "Role", 5);
    roleModel->fieldsNumber = fieldsNumber;
    roleModel->StructTypeSize = tamRole;
    strncpy(roleModel->fileName, "role.txt", 10);
    roleModel->primaryKeyField = ID_ROLE;
    roleModel->data = data;
    roleModel->auxStruct = fields;
    roleModel->elements = contador;
    roleModel->aliasField = DESCRICAO_ROLE;

}