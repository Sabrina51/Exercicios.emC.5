#include <stdio.h>
#include <stdlib.h>

int main()
{

    //CARREGAMENTO
    int n;
    char codigo[2],genero[2];
    float hora_aula, mensalidade;

    //PROCESSAMENTO
    float sal_bruto, sal_liquido, media_sal_m, media_sal_f, desconto = 0;

    //ACUMULADORES
    float h = 0, m = 0;

    //CONTADORE
    int i;

    //CADA HORA AULA CUSTA 18,50

    printf("\n Quantidade de professores: "); scanf("%d", &n);fflush(stdin);

    i=0;
    while(i<n){
        printf("\n Codigo: "); fgets(codigo, 2, stdin); fflush(stdin);
        printf(" Genero (m/f): "); fgets(genero, 2, stdin); fflush(stdin);

        while((strcasecmp(genero, "f")!=0) && (strcasecmp(genero, "m")!=0)){
            printf("\n Digite um genero valido! "); fgets(genero, 2, stdin); fflush(stdin);
        }

        printf(" Hora aula: "); scanf("%f", &hora_aula);
        printf(" Mensalidade: "); scanf("%f", &mensalidade);fflush(stdin);

        sal_bruto = hora_aula*18.50;

        if (strcasecmp(genero, "f")==0){
            sal_liquido = sal_bruto - sal_bruto*0.05;
            desconto = sal_bruto*0.05;
            h++;
            media_sal_f = sal_liquido/h;
        }

        else{
            sal_liquido = sal_bruto - sal_bruto*0.15;
            desconto = sal_bruto*0.15;
            m++;
            media_sal_m = sal_liquido/m;
        }

        printf("\n Salario Bruto... R$%.2f", sal_bruto);
        printf("\n Salario liquido... R$%.2f", sal_liquido);
        printf("\n Desconto... R$%.2f\n\n", desconto);

    i++;
    }

    printf("\n Media do salario liquido dos professores R$%.2f",media_sal_m);
    printf("\n Media do salario liquido das professoras  R$%.2f",media_sal_f);

    return 0;
}
