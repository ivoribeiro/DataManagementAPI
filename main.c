/* 
 * File:   main.c
 * Author: ivo
 *
 * Created on January 27, 2015, 3:09 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#include "DataManagement.h"
#include "TipoUtilizadorModel.h"
#include "TipoUtilizadorController.h"

/*
 * 
 */
int main(int argc, char** argv) {

    //---------------------------------------------------------------------------------------------------------//    

    Model tipoUtilizadorModel;

    //Fields

    FieldAux tipoUtilizadorFields[] = {
        {.fieldName = "id_tipo_utilizador", .alias = "Numero Tipo Utilizador", .sizeBytes = SHORT_SIZE, .type = SHORT, .unique = true, .required = true, .autoIncrement = true, .step = 1},
        {.fieldName = "descricao", .alias = "Descricao", .sizeBytes = SHORT_STRING, .type = STRING, .unique = false, .required = true}
    };


    const unsigned int maxTipoUtilizador = 3;
    unsigned short contadorTipoUtilizador = 1;

    //Data
    TipoUtilizador tipoUtilizadorData[maxTipoUtilizador];

    tipoUtilizadorData[0].id_tipo_utilizador = 1;
    strcpy(tipoUtilizadorData[0].descricao, "Administrador");
    tipoUtilizadorData[0].id_tipo_utilizador = 1;
    strcpy(tipoUtilizadorData[0].descricao, "Administrador");

    //Numero de campos que o tipo de utilizador tem
    const unsigned int fieldsNumber = (sizeof (tipoUtilizadorFields) / sizeof (tipoUtilizadorFields[0]));
    //Tamanho da estrutura
    const unsigned int tamTipoTipoUtilizador = sizeof (TipoUtilizador);


    TipoUtilizadorModel(&tipoUtilizadorModel, tipoUtilizadorFields, fieldsNumber, tamTipoTipoUtilizador, tipoUtilizadorData, &contadorTipoUtilizador);
    printf("%u", tipoUtilizadorModel.fieldsNumber);
    listarTipoUtilizadores(&tipoUtilizadorModel);

    //strcpy(NomeFicheiro, "tipoUtilizadores.txt");
    //readFile(NomeFicheiro, &tipoUtilizadorClass, MAX_TIPO_UTILIZADORES);

    //---------------------------------------------------------------------------------------------------------//

    typedef struct {
        Model * tipoUtilizadorModel;
    } Models;

    Models models;
    models.tipoUtilizadorModel = &tipoUtilizadorModel;


    //Testes
    //listarProducao_Encomenda_LinhaEncomenda(classes.producaoClass, classes.linhaEncomendaClass, classes.produtoFinalClass, classes.linhaProdutoFinalClass);

    //menuLogin(&classes);
    //unsigned short idCliente=2;
    //listarEncomendasCompletasCliente(classes.encomendaClass,idCliente,classes.linhaEncomendaClass,classes.producaoClass); 
    //---------------------------------------------------------------------------------------------------------//
    //Checks
    //inserirTipoUtilizador(classes.tipoUtilizadorClass);
    //listarTipoUtilizadores(classes.tipoUtilizadorClass);

    //listarTipoUtilizador(classes.tipoUtilizadorClass,0);
    //int chaves[] = {0, 1};
    //int campos[] = {ID_TIPO_UTILIZADOR, DESCRICAO_TIPO_UTILIZADOR};
    //filtrarTipoUtilizadores(classes.tipoUtilizadorClass, chaves, 2, campos, 2);
    //filtrarTipoUtilizador(classes.tipoUtilizadorClass,0,campos,2);
    //filtrarEditarTipoUtilizador(classes.tipoUtilizadorClass,0,campos,2);
    //editarTipoUtilizador(classes.tipoUtilizadorClass,1);
    //listar_editar_tipoUtilizadores(classes.tipoUtilizadorClass);
    //editarTipoUtilizadores(classes.tipoUtilizadorClass,chaves,2);
    //TipoUtilizador *tipoUtilizadorData = classes.tipoUtilizadorClass->data;
    //removerTipoUtilizador(classes.tipoUtilizadorClass, 2);
    //listarTipoUtilizadores(classes.tipoUtilizadorClass);

    //inserirUtilizador(classes.utilizadorClass);
    //listarUtilizadores(classes.utilizadorClass);
    // (*classes.utilizadorClass->elements)=0;
    // listarUtilizador(classes.utilizadorClass, 0);
    //listar_editar_utilizadores(classes.utilizadorClass);
    //printShort(classes.utilizadorClass->elements);

    //inserirCliente(classes.clienteClass);
    //removerCliente(classes.clienteClass,1);
    //listarClientes(classes.clienteClass);


    // inserirIngrediente(classes.ingredienteClass);
    //listarIngredientes(classes.ingredienteClass);

    //inserirProdutoFinal(classes.produtoFinalClass);
    //listarProdutosFinais(classes.produtoFinalClass);

    // inserirLinhaProdutoFinal(classes.linhaProdutoFinalClass);
    //listarLinhaProdutosFinais(classes.linhaProdutoFinalClass);

    // inserirEncomenda(classes.encomendaClass);
    //listarEncomendas(classes.encomendaClass);

    // inserirLinhaEncomenda(classes.linhaEncomendaClass);
    // listarLinhaEncomendas(classes.linhaEncomendaClass);


    //inserirProducao(classes.producaoClass);
    //printShort(classes.producaoClass->elements);
    //listarProducoes(classes.producaoClass);

    //listarProdutosFinais_LinhasProdutoFinal(classes.produtoFinalClass,classes.linhaProdutoFinalClass);
    //listarProdutoFinal_LinhasProdutoFinal(classes.produtoFinalClass,classes.linhaProdutoFinalClass,0);

    // listar_Encomenda_linhaEncomenda_producao(classes.encomendaClass,classes.linhaEncomendaClass,classes.producaoClass);

    //listarProducao_Encomenda_LinhaEncomenda(classes.producaoClass,classes.linhaEncomendaClass,classes.produtoFinalClass,classes.linhaProdutoFinalClass);


    //time_t time=getUnixTime();
    //convertDate(&time);




    return (EXIT_SUCCESS);
}



