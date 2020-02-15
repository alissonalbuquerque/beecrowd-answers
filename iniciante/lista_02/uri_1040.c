
#include <stdio.h>

#define P1 2
#define P2 3
#define P3 4
#define P4 1
#define MEDIA_PONDERADA(N1, N2, N3, N4) ( ((N1 * P1) + (N2 * P2) + (N3 * P3) + (N4 * P4)) / (P1 + P2 + P3 + P4) )

int main() {

    double n1, n2, n3, n4;
    double media, exame;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = MEDIA_PONDERADA(n1, n2, n3, n4);

    printf("Media: %.1lf\n", media);

    if(media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(media >= 5.0 && media <= 6.9) {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;
        media >= 5 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
