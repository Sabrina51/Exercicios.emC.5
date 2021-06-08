#include <stdio.h>
#include <stdlib.h>

int main()
{
    //CARREGAMENTO
    float idade, peso;

    //PROCESSAMENTO
    float media;

    //CONTADORES
    int i;

    //ACUMULADORES
    int peso_nove=0,quant_p=0;

    i=0;

    while(i<5){
        printf("\n Idade: "); scanf("%f", &idade);
        printf(" Peso: "); scanf("%f", &peso);

        if(peso > 90)
        peso_nove++;

        quant_p+=idade;
        media = quant_p/5;

    i++;
    }

    printf("\n Pessoas com mais de 90Kg %d",peso_nove);
    printf("\n Media das idades %.2f",media);

    return 0;
}
