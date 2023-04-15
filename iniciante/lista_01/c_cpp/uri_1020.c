
#include <stdio.h>

int main() {

    int n;
    int ano = 0, mes = 0, dia = 0;

    scanf("%d", &n);

    while(n > 0) {

        if(n >= 365) {
            ano = n / 365;
            n %= 365;
        } else if(n >= 30) {
            mes = n / 30;
            n %= 30;
        } else {
            dia = n;
            n = 0;
        }
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);   

    return 0;
}
