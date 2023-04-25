
#include <stdio.h>

int main() {

    int i = 1, grenais = 1, a, b;
    int gremio = 0, inter = 0, empates = 0;

    while(i != 2) {

        scanf("%d %d", &a, &b);

        if(a > b) {
            inter++;
        } else if(a < b) {
            gremio++;
        } else {
            empates++;
        }

        puts("Novo grenal (1-sim 2-nao)");
        scanf("%d", &i);

        if(i == 1) {
            grenais++;
        }

    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);

    if(inter > gremio) {
        puts("Inter venceu mais");
    } else if(inter < gremio) {
        puts("Gremio venceu mais");
    } else {
        puts("Nao houve vencedor");
    }

    return 0;
}
