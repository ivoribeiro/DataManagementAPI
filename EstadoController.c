



#include "EstadoController.h"

void guardarEstado(Model *estadoModel) {
    writeFile(estadoModel);
}

void getAllEstado(Model *estadoModel) {
    puts("|-------------------|");
    puts("|-------Estados-----|");
    puts("|-------------------|");
    fullList(estadoModel);
    puts("|-------------------|");

}

void getShowEstado(Model *estadoModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|-----Estado----|");
    puts("|---------------|");
    singleList(estadoModel, indice);
    puts("|---------------|");

}

void postEstado(Model *estadoModel) {
    printf("Tem a certeza que pertende inserir um novo estado?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|-----Novo Estado----|");
        puts("|--------------------|");
        create(estadoModel);
        puts("|--------------------|");
        puts("Estado criado com sucesso Obrigado");
        guardarEstado(estadoModel);
    } else puts("Regressar ao menu gestao de estado");

}

void putEstado(Model *estadoModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|----Editar Estado-----|");
    puts("|----------------------|");
    update(estadoModel, indice);
    puts("|----------------------|");
    puts("Estado editado com sucesso Obrigado");
    guardarEstado(estadoModel);

}

void deleteEstado(Model *estadoModel, const unsigned short indice) {
    delete(estadoModel, indice);
    guardarEstado(estadoModel);
    puts("Estado removido com sucesso Obrigado");
}

