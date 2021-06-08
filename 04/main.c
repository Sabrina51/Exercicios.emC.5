#include <stdio.h>
#include <stdlib.h>

int main()
{

    int depart, i;
    float salary, employee;
    float m_depart1, m_depart2, m_depart3;
    float depart1=0, depart2=0, depart3=0;
    float d_emp1=0, d_emp2=0, d_emp3=0;
    float total_s;
    float s_salary = 9999;

    i=1;
    while(i<4)
    {

        printf("\n Department %d", i);
        printf("\n Number of employee: "); scanf("%f", &employee);
        printf(" Salary($): "); scanf("%f", &salary);


    if(i == 1){
        depart1+=salary;
        d_emp1 = employee;
        m_depart1 = depart1*d_emp1/d_emp1;

    }

    else if(i == 2){
        depart2+=salary;
        d_emp2 = employee;
        m_depart2 = depart2*d_emp2/d_emp2;
    }

    else{
        depart3+=salary;
        d_emp3 = employee;
        m_depart3 = depart3*d_emp3/d_emp3;
    }

    if(salary < s_salary){
        s_salary = salary;
        depart = i;
    }

    total_s = (depart1*d_emp1)+(depart2*d_emp2)+(depart3*d_emp3);


    i++;
    }

    printf("\n Salary total Department 1 $%.2f", depart1*d_emp1);
    printf("\n Salary total Department 2 $%.2f", depart2*d_emp2);
    printf("\n Salary total Department 3 $%.2f \n", depart3*d_emp3);

    printf("\n Average department 1 $%.2f", m_depart1);
    printf("\n Average department 2 $%.2f", m_depart2);
    printf("\n Average department 3 $%.2f \n", m_depart3);

    printf("\n General total salary $%.2f \n", total_s);

    printf("\n Smaller salary is $%.2f and belong department %d \n", s_salary, depart);


    printf("\n THE END!\n");
    return 0;
}
