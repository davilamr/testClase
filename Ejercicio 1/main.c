#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    char letra;
    int acumA=0;
    int acumE=0;
    int acumI=0;
    int acumO=0;
    int acumU=0;
    int i;

    for(i=0; i<MAX; i++)
    {
        printf("Ingrese caracteres: \n");
        fflush(stdin);
        scanf("%c", &letra);

    switch(letra)
        {
            case 'a': acumA++;
                    break;
            case 'e': acumE++;
                    break;
            case 'i': acumI++;
                    break;
            case 'o': acumO++;
                    break;
            case 'u': acumU++;
                    break;
            default: break;

        }

    }
    printf("Resultado: \nLetras A: %d \nLetras E: %d \nLetras I: %d \nLetras O: %d \nLetras U: %d", acumA, acumE, acumI, acumO, acumU);

    return 0;
}
