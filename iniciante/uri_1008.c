
#include <stdio.h>

int main() {

    int number, hours;
    double hour_work, salary;

    scanf("%d %d %lf", &number, &hours, &hour_work);

    salary = hours * hour_work;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

    return 0;
}

/*
    ---------------------
    Entrada:
        25
        100
        5.50  
    Saida:
        NUMBER = 25
        SALARY = U$ 550.00
    ---------------------
    ---------------------
    Entrada:    
        1
        200
        20.50
    Saida:
        NUMBER = 1
        SALARY = U$ 4100.00
    ---------------------

    ---------------------
    Entrada:
        6
        145
        15.55
    Saida:
        NUMBER = 6
        SALARY = U$ 2254.75
    ---------------------
*/