#include <stdio.h>

int main()
{
    char frase[50];
    char frasecopia[50];
    int i;
    
    printf("frase \n");
    printf("escreva uma frase \n");
    scanf ("%s", frase);
    
    for (i=0; i==50; i++) {
        frasecopia[i] = frase[i];
    }
    
    printf("%s", frasecopia);

    return 0;
}
