#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ponteiro;

 
    ponteiro = (int *)malloc(8 * sizeof(int));


    if (ponteiro == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; 
    }


    ponteiro = (int *)realloc(ponteiro, 12 * sizeof(int));


    if (ponteiro == NULL) {
        printf("Erro na realocação de memória.\n");
        free(ponteiro); 
        return 1;
    }


    free(ponteiro);

    return 0; 
}
