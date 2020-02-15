
#include <stdio.h>

int main() {

    int number, hours;
    double hour_work, salary;

    scanf("%d %d %lf", &number, &hours, &hour_work);

    salary = hours * hour_work;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

    return 0;
}
