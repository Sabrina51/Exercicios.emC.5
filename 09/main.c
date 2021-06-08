#include <stdlib.h>
#include <stdio.h>

int main()
{

    int i, vetor[5], par=0, impar=0;

    printf("\n Digite 5 numeros: \n");

    for(i=0; i<5; i++)
    {
        printf(" => ");scanf("%d",&vetor[i]);

        if(vetor[i]%2 == 0)
            par++;
        else
            impar+=vetor[i];
    }

    printf("\n Quantidade de numeros pares: %d",par);
    printf("\n A soma dos impares e igual a %d",impar);

}
