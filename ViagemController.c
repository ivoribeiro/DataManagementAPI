
#include "ViagemController.h"

void guardarViagem(Model *viagemModel) {
    writeFile(viagemModel);
}

void getAllViagem(Model *viagemModel) {
    puts("|-------------------|");
    puts("|Viagens|");
    puts("|-------------------|");
    fullList(viagemModel);
    puts("|-------------------|");

}

void getShowViagem(Model *viagemModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|Viagem|");
    puts("|---------------|");
    singleList(viagemModel, indice);
    puts("|---------------|");

}

void postViagem(Model *viagemModel) {
    printf("Tem a certeza que pertende inserir um novo viagem?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|Novo Viagem|");
        puts("|--------------------|");
        create(viagemModel);
        puts("|--------------------|");
        puts("Viagem criada com sucesso Obrigado");
        guardarViagem(viagemModel);
    } else puts("Regressar ao menu gestao de viagem");

}

void putViagem(Model *viagemModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|Editar Viagem|");
    puts("|----------------------|");
    update(viagemModel, indice);
    puts("|----------------------|");
    puts("Viagem editada com sucesso Obrigado");
    guardarViagem(viagemModel);

}

void deleteViagem(Model *viagemModel, const unsigned short indice) {
    delete(viagemModel, indice);
    guardarViagem(viagemModel);
    puts("Viagem removida com sucesso Obrigado");
}

