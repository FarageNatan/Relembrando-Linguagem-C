#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, soma = 0;
    float media = 0;
    int* vetInt;
    printf("Determine numero: ");
    scanf("%i", &n);
    vetInt = (int*) malloc(n * sizeof(int));
    (unsigned) time (NULL);
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++)
    {
        vetInt[i] = rand() % 101;
        soma += vetInt[i];
        media = (float)soma / n;
    }
    for(int j = 0; j < n; j++)
    {
        printf("%i\n", vetInt[j]);
    }
    printf("A media eh: %f", media);

    free(vetInt);

    return 0;
}