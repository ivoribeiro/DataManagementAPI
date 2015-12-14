#include "Utils.h"

/*Function not implemented*/

/**
 * 
 * @param vet
 * @param chave
 * @param Tam
 * @return 
 */
int PesquisaBinaria(int vet[], int chave, int Tam) {
    int inf = 0; //Limite inferior      (o primeiro elemento do vetor em C é zero          )
    int sup = Tam - 1; //Limite superior    (termina em um número a menos 0 à 9 são 10 numeros )
    int meio;
    while (inf <= sup) {
        meio = (inf + sup) / 2;
        if (chave == vet[meio])
            return meio;
        else if (chave < vet[meio])
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1; // não encontrado
}



/**
 * This function randomize a chosed quantity of numbers , of a given array
 * @param array - Memory adress of a int array , 
 * @param n , quantity of numbers that will be returned 
 * @param limit - array limit
 * @return  an memory adress of an array of requested number of randomized integers
 */
int * randomize(int *array, size_t n, int limit) {
    if (n > 1) {
        size_t i;
        for (i = 0; i < n; i++) {
            srand(time(0));
            size_t j = i + rand() / (RAND_MAX / (limit - i) + 1);
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
    return array;
}
