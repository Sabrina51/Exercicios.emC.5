#include <stdio.h>
#include <stdlib.h>

main()
{
    char i, funcionario[3][10];
    float salario[3];
    int anos[3];

    for(i=0; i<3; i++)
    {
        printf("\n DADOS DO FUNCIONARIO %d", i + 1);

        printf("\n Nome: ");
        //fgets(funcionario[i],10,stdin);
        gets(funcionario[i]);

        printf(" Salario(R$): ");
        scanf("%f",&salario[i]);

        printf(" Anos de empresa: ");
        scanf("%d",&anos[i]);
        fflush(stdin);

    if(anos[i] >= 5 && salario[i] < 1120)
    salario[i] += salario[i]*0.35;

    else if(anos[i] >= 5)
    salario[i] += salario[i]*0.25;

    else if(salario[i] < 1200)
    salario[i] += salario[i]*0.15;

    }

    printf("\n FUNCIONARIO \t SALARIO COM ACRESCIMO\n");
    printf(" -------------+-----------------------\n");
    for(i=0; i<3; i++)
    {
    printf("\n %-10s %13.2f \n", funcionario[i], salario[i]);
    }

    printf("\n\n FIM\n");
}
