


#include "ConfortoController.h"

void guardarConforto(Model *confortoModel) {
    writeFile(confortoModel);
}

void getAllConforto(Model *confortoModel) {
    puts("|-------------------|");
    puts("|Confortos|");
    puts("|-------------------|");
    fullList(confortoModel);
    puts("|-------------------|");

}

void getShowConforto(Model *confortoModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|Conforto|");
    puts("|---------------|");
    singleList(confortoModel, indice);
    puts("|---------------|");

}

void postConforto(Model *confortoModel) {
    printf("Tem a certeza que pertende inserir um novo conforto?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|Novo Conforto|");
        puts("|--------------------|");
        create(confortoModel);
        puts("|--------------------|");
        puts("Conforto criado com sucesso Obrigado");
        guardarConforto(confortoModel);
    } else puts("Regressar ao menu gestao de conforto");

}

void putConforto(Model *confortoModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|Editar Conforto|");
    puts("|----------------------|");
    update(confortoModel, indice);
    puts("|----------------------|");
    puts("Conforto editado com sucesso Obrigado");
    guardarConforto(confortoModel);

}

void deleteConforto(Model *confortoModel, const unsigned short indice) {
    delete(confortoModel, indice);
    guardarConforto(confortoModel);
    puts("Conforto removido com sucesso Obrigado");
}

