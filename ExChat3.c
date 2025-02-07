#include <stdio.h>
#include <stdlib.h>

int main(){
    char frase[30], fraseNova[30];
    int j = 0; 

    printf("Determine a frase: ");
    scanf(" %[^\n]", frase);

    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] != 'A' && frase[i] != 'a' && frase[i] != 'E' && frase[i] != 'e' && frase[i] != 'I' && frase[i] != 'i' && frase[i] != 'O' && frase[i] != 'o' && frase[i] != 'U' && frase[i] != 'u') 
        {
            fraseNova[j] = frase[i];
            j++;
        }
    }
    
    fraseNova[j] = '\0';
    printf("Frase sem vogais: %s\n", fraseNova);

    return 0;
}
