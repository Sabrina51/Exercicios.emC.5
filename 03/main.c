#include <stdio.h>
#include <stdlib.h>

int main()
{
    //CARREGAMENTO
    int op;
    float idade;

    //PROCESSAMENTO
    float media;

    //CONTADORES
    int i;

    //ACUMULADORES
    int resp_ot=0, resp_id=0, resp_reg=0;

    printf("\n Pesquisa de satisfacao");
    i=0;
    while(i<4){
        printf("\n Idade: "); scanf("%f", &idade);fflush(stdin);
        printf("\n 3 - Otimo \n 2 - Regular \n 1 - Ruim \n Opcao escolhida: "); scanf("%d", &op);

        if (op == 2)
            resp_reg++;

        if(op == 3){
            resp_ot+=idade;
            resp_id++;
            media = resp_ot / resp_id;
        }

    i++;
    }
    printf("\n Media das idades das pessoas que responderam otimo %.1f",media);
    printf("\n Quantidade de pessaos que responderam regular %d",resp_reg);

    return 0;
}
