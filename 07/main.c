#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int i;
char seller[7][10];
float sales_total[7], sale_perc[2];
float commi_v[7], h_value_c;

float all_sales=0, h_value=0, commi=0;
int n_sales_goal = 0;

char sales_t[7][9], a_sales[9],h_val[9];
char sel[10];


int ins_inf(){

    for(i=0;i<7;i++){

        printf("\n ==================================================");
        printf("\n  =           Inset sales information            =");
        printf("\n ==================================================");

        printf("\n\n  Seller %d",i+1);
        printf("\n ---------------------");

        printf("\n  Name: "); fgets(seller[i],10,stdin); fflush(stdin);
        printf("  Sales Total ($): "); scanf("%f",&sales_total[i]); fflush(stdin);
        printf("  Commission (%%): "); scanf("%f",&sale_perc[i]); fflush(stdin);

        commi_v[i] = (sale_perc[i]*sales_total[i]/100) + sales_total[i];

        all_sales = all_sales + commi_v[i];

        if(h_value < sales_total[i]){
            h_value = sales_total[i];
            commi = sale_perc[i];
            strcpy(sel,seller[i]);
        }

        if(commi_v[i] <= 1000){
            n_sales_goal++;
        }


        system("cls");
    }

    printf("\n  **successful** \n\n");
    system("pause");
    system("cls");
}

int rep_sale(){

    printf("\n  = Seller Name      Amount receivable   = ");
    printf("\n ==========================================");

    for(i=0;i<7;i++){
        sprintf(sales_t[i],"%.2f",commi_v[i]);
        seller[i][strlen(seller[i]) - 1] = '\0';
        printf("\n    %s \t     $%s",seller[i],sales_t[i]);
    }
}

int all_sal(){

    printf("\n  = Sales total (all seller)             = ");
    printf("\n ==========================================");

    sprintf(a_sales,"%.2f",all_sales);
    printf("\n    $%s",a_sales);
}

int higher_sold(){

    printf("\n  = Higher value sold \t seller name     = ");
    printf("\n ==========================================");

    h_value_c = (commi*h_value/100) + h_value;
    sprintf(h_val,"%.2f",h_value_c);
    sel[strlen(sel) - 1] = '\0';
    printf("\n    $%s \t\t %s",h_val,sel);
}


int sales_goal(){

    printf("\n  = Did not reach sales target           = ");
    printf("\n ==========================================");

    printf("\n    %d people didn't reach the sales target\n",n_sales_goal);

}
int main(){

    int op;

        printf("\n ======================================================");
        printf("\n  _  _  _ ______        ______   _____  _______ ______");
        printf("\n  |  |  | |_____ |      |       |     | |  |  | |_____");
        printf("\n  |__|__| |_____ |_____ |_____  |_____| |  |  | |_____");
        printf("\n\n  ......................... Developed by Sabrina Silva");
        printf("\n ======================================================\n\n");
        printf("\n ");

        system("pause");
        system("cls");


    do{

        printf("\n  =                   MAIN                    =");
        printf("\n ===============================================");
        printf("\n   Inset sales information................ [1]  ");
        printf("\n   Report sales information .............. [2]  ");
        printf("\n   Sales total (all seller) .............. [3]  ");
        printf("\n   Higher value sold - seller name ....... [4]  ");
        printf("\n   Did not reach sales target ............ [5]  ");
        printf("\n   See all reports ....................... [6]  ");
        printf("\n   Exit................................... [0]  ");
        printf("\n\n  Option: "); op = getche();

        switch(op){
        case '1':
            system("cls");
            ins_inf();
            break;

        case '2':
            system("cls");
            rep_sale();
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case '3':
            system("cls");
            all_sal();
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case '4':
            system("cls");
            higher_sold();
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case '5':
            system("cls");
            sales_goal();
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case '6':
            system("cls");
            rep_sale();
            printf("\n\n");
            all_sal();
            printf("\n\n");
            higher_sold();
            printf("\n\n");
            sales_goal();
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        default :
            system("cls");
            printf("");
        }

    }while(op!='0');


    printf("\n\n\n Bye =^^=!\n");
    return 0;
}
