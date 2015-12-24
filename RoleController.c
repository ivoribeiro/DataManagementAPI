


#include "RoleController.h"

void guardarRole(Model *roleModel) {
    writeFile(roleModel);
}

void getAllRole(Model *roleModel) {
    puts("|-------------------|");
    puts("|Roles|");
    puts("|-------------------|");
    fullList(roleModel);
    puts("|-------------------|");

}

void getShowRole(Model *roleModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|Role|");
    puts("|---------------|");
    singleList(roleModel, indice);
    puts("|---------------|");

}

void postRole(Model *roleModel) {
    printf("Tem a certeza que pertende inserir um novo role?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|Novo Role|");
        puts("|--------------------|");
        create(roleModel);
        puts("|--------------------|");
        puts("Role criado com sucesso Obrigado");
        guardarRole(roleModel);
    } else puts("Regressar ao menu gestao de role");

}

void putRole(Model *roleModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|Editar Role|");
    puts("|----------------------|");
    update(roleModel, indice);
    puts("|----------------------|");
    puts("Role editado com sucesso Obrigado");
    guardarRole(roleModel);

}

void deleteRole(Model *roleModel, const unsigned short indice) {
    delete(roleModel, indice);
    guardarRole(roleModel);
    puts("Role removido com sucesso Obrigado");
}

