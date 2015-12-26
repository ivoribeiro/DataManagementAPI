



#include "TipoAlertaController.h"

void guardarTipoAlerta(Model *tipoAlertaModel) {
    writeFile(tipoAlertaModel);
}

void getAllTipoAlerta(Model *tipoAlertaModel) {
    puts("|-------------------|");
    puts("|Tipo de Alertas|");
    puts("|-------------------|");
    fullList(tipoAlertaModel);
    puts("|-------------------|");

}

void getShowTipoAlerta(Model *tipoAlertaModel, const unsigned int indice) {
    puts("|---------------|");
    puts("|TipoAlerta|");
    puts("|---------------|");
    singleList(tipoAlertaModel, indice);
    puts("|---------------|");

}

void postTipoAlerta(Model *tipoAlertaModel) {
    printf("Tem a certeza que pertende inserir um novo tipo de alerta?[Y/N]\n");
    char resposta;
    readChar(&resposta);
    if (resposta == 'Y' || resposta == 'y') {
        puts("|--------------------|");
        puts("|Novo TipoAlerta|");
        puts("|--------------------|");
        create(tipoAlertaModel);
        puts("|--------------------|");
        puts("TipoAlerta criado com sucesso Obrigado");
        guardarTipoAlerta(tipoAlertaModel);
    } else puts("Regressar ao menu gestao de tipoAlerta");

}

void putTipoAlerta(Model *tipoAlertaModel, const unsigned int indice) {
    puts("|----------------------|");
    puts("|Editar tipo de alerta|");
    puts("|----------------------|");
    update(tipoAlertaModel, indice);
    puts("|----------------------|");
    puts("TipoAlerta editado com sucesso Obrigado");
    guardarTipoAlerta(tipoAlertaModel);

}

void deleteTipoAlerta(Model *tipoAlertaModel, const unsigned short indice) {
    delete(tipoAlertaModel, indice);
    guardarTipoAlerta(tipoAlertaModel);
    puts("Tipo de alerta removido com sucesso Obrigado");
}

