
#include "DataManagement.h"
#include "TipoUtilizadorModel.h"

void guardarTipoUtilizador(Model *tipoUtilizadorModel) {
    char NomeFicheiro[SHORT_STRING];
    strcpy(NomeFicheiro, "tipoUtilizadores.txt");
    writeFile(NomeFicheiro, tipoUtilizadorModel);
}

void listarTipoUtilizadores(Model *tipoUtilizadorModel) {
    fullList(tipoUtilizadorModel);

}

void listarTipoUtilizador(Model *tipoUtilizadorModel, const unsigned int chave) {
    singleList(tipoUtilizadorModel, chave);
}

void filtrarTipoUtilizadores(Model *tipoUtilizadorModel, int *chaves, int numeroChaves, int *campos, int numeroCampos) {
    parsedList(tipoUtilizadorModel, chaves, numeroChaves, campos, numeroCampos);
}

void filtrarTipoUtilizador(Model *tipoUtilizadorModel, int chave, int *campos, int numeroCampos) {
    singleParsedList(tipoUtilizadorModel, chave, campos, numeroCampos);
}


void inserirTipoUtilizador(Model *tipoUtilizadorModel) {
    char mensagemConfirmacao[MEDIUM_STRING];
    strcpy(mensagemConfirmacao, "Tem a certeza que pertende inserir um novo tipo de utilizador?[Y/N]");
    puts(mensagemConfirmacao);
    char resposta[1 + 1];
    readChar(resposta);
    if (compareStrings(resposta, "Y") == true) {
        create(tipoUtilizadorModel);
        guardarTipoUtilizador(tipoUtilizadorModel);
    } else puts("Regressar ao menu gestao de tipo de utilizador");

}

void filtrarEditarTipoUtilizador(Model *tipoUtilizadorModel, const unsigned int chave, const unsigned int *campos, const unsigned int numeroCampos) {
    singleParsedRead(tipoUtilizadorModel, UPDATE, chave, campos, numeroCampos);
    guardarTipoUtilizador(tipoUtilizadorModel);

}

void editarTipoUtilizador(Model *tipoUtilizadorModel, const unsigned int chave) {
    fullRead(tipoUtilizadorModel, UPDATE, chave);
    guardarTipoUtilizador(tipoUtilizadorModel);

}

void listar_editar_tipoUtilizadores(Model *tipoUtilizadorModel) {
    listarTipoUtilizadores(tipoUtilizadorModel);
    puts("Escolha o tipo de utilizador que quer editar");
    unsigned int tipoUtilizadorID;
    readInt(&tipoUtilizadorID);
    TipoUtilizador *tipoUtilizador;
    tipoUtilizador = tipoUtilizadorModel->data;
    if (tipoUtilizadorID >= tipoUtilizador[0].id_tipo_utilizador && tipoUtilizadorID <= tipoUtilizador[*(tipoUtilizadorModel->elements) - 1].id_tipo_utilizador) {
        editarTipoUtilizador(tipoUtilizadorModel, tipoUtilizadorID - 1);
    }
}

void editarTipoUtilizadores(Model *tipoUtilizadorModel, const unsigned int *chaves, const unsigned numeroChaves) {
    unsigned int i;
    for (i = 0; i < numeroChaves; i++) {
        fullRead(tipoUtilizadorModel, UPDATE, chaves[i]);
    }
    guardarTipoUtilizador(tipoUtilizadorModel);

}

void removerTipoUtilizador(Model *tipoUtilizadorModel, const unsigned short key) {
        removeKey(tipoUtilizadorModel, key);
        guardarTipoUtilizador(tipoUtilizadorModel);
        puts("Tipo de utilizador removido com sucesso Obrigado");
}

void listar_remover_tipoUtilizador(Model *tipoUtilizadorModel) {
    listarTipoUtilizadores(tipoUtilizadorModel);
    puts("Escolha o Tipo de Utilizador que quer remover");
    unsigned int tipoUtilizadorID;
    readInt(&tipoUtilizadorID);
    TipoUtilizador *tipoUtilizador;
    tipoUtilizador = tipoUtilizadorModel->data;
    if (tipoUtilizadorID >= tipoUtilizador[0].id_tipo_utilizador && tipoUtilizadorID <= tipoUtilizador[*(tipoUtilizadorModel->elements) - 1].id_tipo_utilizador) {
       removerTipoUtilizador(tipoUtilizadorModel, tipoUtilizadorID - 1);
    }
}
