

#include "LocalController.h"

void guardarLocal(Model *localModel) {
    writeFile(localModel);
}

void getAllLocal(Model *localModel) {
    puts("|-------------------|");
    puts("|------Locais-------|");
    puts("|-------------------|");
    fullList(localModel);
    puts("|-------------------|");

}

void getShowLocal(Model *localModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|-----Local-----|");
    puts("|---------------|");
    singleList(localModel, indice);
    puts("|---------------|");

}

void postLocal(Model *localModel) {
    printf("Tem a certeza que pertende inserir um novo local?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|-----Novo Local-----|");
        puts("|--------------------|");
        create(localModel);
        puts("|--------------------|");
        puts("Local criado com sucesso Obrigado");
        guardarLocal(localModel);
    } else puts("Regressar ao menu gestao de local");

}

void putLocal(Model *localModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|-----Editar Local-----|");
    puts("|----------------------|");
    update(localModel, indice);
    puts("|----------------------|");
    puts("Local editado com sucesso Obrigado");
    guardarLocal(localModel);

}

void deleteLocal(Model *localModel, const unsigned short indice) {
    delete(localModel, indice);
    guardarLocal(localModel);
    puts("Local removido com sucesso Obrigado");
}

