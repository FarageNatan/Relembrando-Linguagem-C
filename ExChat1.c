#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis
    int* pontInt;
    pontInt = (int*) malloc(sizeof(int));
    int valor;
    //Resolução
    printf("Determine valor: ");
    scanf("%i", &valor);
    *pontInt = valor;
    printf("%p\n", pontInt);
    printf("%i\n", *pontInt);
    //Liberar memória
    free(pontInt);
    return 0;
}