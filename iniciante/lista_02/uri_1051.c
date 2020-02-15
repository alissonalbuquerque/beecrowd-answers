
#include <stdio.h>

void calcular_imposto(double* salario, double* imposto, double desconto, double taxa) {

    *imposto += (*salario - desconto) * taxa;
    *salario = *salario - (*salario - desconto);

}

int main() {

    double salario, imposto = 0;
    scanf("%lf", &salario);

    while( salario > 0 ) {

        if( salario <= 2000 ) {

            imposto = imposto + 0;
            break;

        } else if( salario > 2000 && salario <= 3000 ) {

            calcular_imposto(&salario, &imposto, 2000, 0.08);

        } else if( salario > 3000 && salario <= 4500 ) {

            calcular_imposto(&salario, &imposto, 3000, 0.18);

        } else {

            calcular_imposto(&salario, &imposto, 4500, 0.28);
        }

    }

    if( imposto == 0 ) {
        printf("Isento\n");
    } else {
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
