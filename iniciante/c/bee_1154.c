
#include <stdio.h>

int main() {

    int idade, contador = 0;
    double media_idade = 0;

    while(scanf("%d", &idade) && idade >= 0) {
        media_idade += idade;
        contador++;
    }

    media_idade = media_idade / contador;
    printf("%.2lf\n", media_idade);

    return 0;
}
