#include "TipoUtilizadorController.h"

void guardarTipoUtilizador(Model *tipoUtilizadorModel) {
    writeFile(tipoUtilizadorModel);
}

void getAllTipoUtilizador(Model *tipoUtilizadorModel) {
    puts("|-------------------|");
    puts("|Tipos Utilizador|");
    puts("|-------------------|");
    fullList(tipoUtilizadorModel);
    puts("|-------------------|");

}

void getShowTipoUtilizador(Model *tipoUtilizadorModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|Tipo Utilizador|");
    puts("|---------------|");
    singleList(tipoUtilizadorModel, indice);
    puts("|---------------|");

}

void postTipoUtilizador(Model *tipoUtilizadorModel) {
    printf("Tem a certeza que pertende inserir um novo tipo de utilizador?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|Novo Tipo Utilizador|");
        puts("|--------------------|");
        create(tipoUtilizadorModel);
        puts("|--------------------|");
        puts("Tipo de utilizador criado com sucesso Obrigado");
        guardarTipoUtilizador(tipoUtilizadorModel);
    } else puts("Regressar ao menu gestao de tipo de utilizador");

}

void putTipoUtilizador(Model *tipoUtilizadorModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|Editar Tipo Utilizador|");
    puts("|----------------------|");
    update(tipoUtilizadorModel, indice);
    puts("|----------------------|");
    puts("Tipo de utilizador editado com sucesso Obrigado");

    guardarTipoUtilizador(tipoUtilizadorModel);

}

void deleteTipoUtilizador(Model *tipoUtilizadorModel, const unsigned short indice) {
    delete(tipoUtilizadorModel, indice);
    guardarTipoUtilizador(tipoUtilizadorModel);
    puts("Tipo de utilizador removido com sucesso Obrigado");
}

