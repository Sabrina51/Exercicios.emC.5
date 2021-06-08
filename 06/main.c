#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=1;
    float n, number, av_posi;

    int less_35 = 0, quant_pos = 0;
    float positive = 0, sum_positive = 0, count = 0;
    float per;

    printf("\n Quantity of numbers: "); scanf("%f",&n);

    while(i<=n){
        printf("\n Number %d: ", i); scanf("%f", &number);

        if(number < 35)
            less_35++;

        if(number > 0){
            positive++;
            sum_positive+=number;
            av_posi = sum_positive/positive;
        }

        if((number > 50) && (number < 100)){
            count++;

        }

        per = count/n*100;

    i++;
    }

    printf("\n The quantity of numbers less then 35 is %d", less_35);
    printf("\n The average positive numbers is %.2f", av_posi);
    printf("\n The percent of numbers between 50 - 100 if %.2f%%", per);

    printf("\n\n THE END!\n");

    return 0;
}
