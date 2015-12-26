#include "UtilizadorController.h"

void guardarUtilizador(Model *utilizadorModel) {
    writeFile(utilizadorModel);
}

void getAllUtilizador(Model *utilizadorModel) {
    puts("|-------------------|");
    puts("|----Utilizadores---|");
    puts("|-------------------|");
    fullList(utilizadorModel);
    puts("|-------------------|");

}

void getShowUtilizador(Model *utilizadorModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|---Utilizador--|");
    puts("|---------------|");
    singleList(utilizadorModel, indice);
    puts("|---------------|");

}

void postUtilizador(Model *utilizadorModel) {
    printf("Tem a certeza que pertende inserir um novo utilizador?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|--Novo Utilizador---|");
        puts("|--------------------|");
        create(utilizadorModel);
        puts("|--------------------|");
        puts("Utilizador criado com sucesso Obrigado");
        guardarUtilizador(utilizadorModel);
    } else puts("Regressar ao menu gestao de utilizador");

}

void putUtilizador(Model *utilizadorModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|--Editar Utilizador---|");
    puts("|----------------------|");
    update(utilizadorModel, indice);
    puts("|----------------------|");
    puts("Utilizador editado com sucesso Obrigado");

    guardarUtilizador(utilizadorModel);

}

void deleteUtilizador(Model *utilizadorModel, const unsigned short indice) {
    delete(utilizadorModel, indice);
    guardarUtilizador(utilizadorModel);
    puts("Utilizador removido com sucesso Obrigado");
}

