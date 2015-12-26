
#include "AlertaController.h"

void guardarAlerta(Model *alertaModel) {
    writeFile(alertaModel);
}

void getAllAlerta(Model *alertaModel) {
    puts("|-------------------|");
    puts("|Alertas|");
    puts("|-------------------|");
    fullList(alertaModel);
    puts("|-------------------|");

}

void getShowAlerta(Model *alertaModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|Alerta|");
    puts("|---------------|");
    singleList(alertaModel, indice);
    puts("|---------------|");

}

void postAlerta(Model *alertaModel) {
    printf("Tem a certeza que pertende inserir um novo alerta?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|Novo Alerta|");
        puts("|--------------------|");
        create(alertaModel);
        puts("|--------------------|");
        puts("Alerta criado com sucesso Obrigado");
        guardarAlerta(alertaModel);
    } else puts("Regressar ao menu gestao de alerta");

}

void putAlerta(Model *alertaModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|Editar Alerta|");
    puts("|----------------------|");
    update(alertaModel, indice);
    puts("|----------------------|");
    puts("Alerta editado com sucesso Obrigado");
    guardarAlerta(alertaModel);

}

void deleteAlerta(Model *alertaModel, const unsigned short indice) {
    delete(alertaModel, indice);
    guardarAlerta(alertaModel);
    puts("Alerta removido com sucesso Obrigado");
}

