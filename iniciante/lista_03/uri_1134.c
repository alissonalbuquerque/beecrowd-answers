
#include <stdio.h>

int main() {

    int alcool = 0, gasolina = 0, diesel = 0;

    int c;
    while(scanf("%d", &c) && c != 4) {

        switch(c) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            default:
                break;
        }

    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
