#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, pecas[5];
    float valor[5];
    char vendedor[5][10];

    for(i=0; i<5; i++)
    {
        printf("\n DADOS DA VENDA %d ",i+1);
        printf("\n Digite o nome do vendedor: ");
        fgets(vendedor[i],10,stdin);
        fflush(stdin);

        printf("\n Digite a quantidade de pecas vendidas: ");
        scanf("%d",&pecas[i]);

        printf("\n Digite o valor total da venda: ");
        scanf("%f",&valor[i]);
        fflush(stdin);

        system("cls");
    }

    printf("\n ------------+----------------+--------------");
    printf("\n  VENDEDOR   |   QUANTIDADE   |  VALOR TOTAL ");
    printf("\n ------------+----------------+--------------");
    for(i=0; i<5; i++)
    {
        vendedor[i][strlen(vendedor[i])-1] = '\0';
        printf("\n  %s \t %d und \t R$%.2f", vendedor[i],pecas[i],valor[i]);
    }
    printf("\n\n");
    system("pause");

}
