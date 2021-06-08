#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, n;
    char gender[2];
    float salary;

    float av_sala;
    char gender_s_salary[7];

    int i=1, female_s=0;

    float sum_sala = 0;
    float s_salary = 99999999;
    int s_age = 9999, b_age = 0;
    int age_s_salary = 0;

    printf("\n Write the number of interviewed: "); scanf("%d",&n);

    while(i<=n){
        printf("\n Interviewed %d", i);
        printf("\n Age: "); scanf("%d", &age); fflush(stdin);
        printf(" Gender(f/m): "); fgets(gender,2,stdin);
        printf(" Salary $: "); scanf("%f", &salary);

        sum_sala+=salary;
        av_sala = sum_sala/n;

        if(age < s_age){
            s_age = age;
            age_s_salary = age;
        }

        if(age > b_age){
            b_age = age;
        }

        if((strcasecmp(gender, "f")==0) && (salary <= 1120)){
            female_s++;
        }

        if (salary < s_salary){
            s_salary = salary;
                if((strcasecmp(gender, "f")==0))
                    strcpy(gender_s_salary, "Female");
                else
                    strcpy(gender_s_salary, "Male");
        }

    i++;
    }

    printf("\n Average salary $%.2f", av_sala);
    printf("\n The biggest age is %d years old and smaller age is %d years old", b_age, s_age);
    printf("\n The number of women with a salary less than or equal to $1.120 is %d", female_s);
    printf("\n The person with the lower salary if %s gender and your age is %d years old",gender_s_salary, age_s_salary);

    printf("\n\n THE END!\n");
    return 0;
}
