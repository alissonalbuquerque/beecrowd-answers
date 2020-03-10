
#include <stdio.h>

#define ACIMA_DA_MEDIA(X, Y) (Y * 100.00 / X)

int main() {

    int c, n, media = 0, cont = 0;
    scanf("%d", &c); 
    
    while(c--) {

        double media = 0;
        int cont = 0;
        scanf("%d", &n);

        int turma[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &turma[i]);
        }

        for(int j = 0; j < n; j++) {
            media += turma[j];
        }

        media = media / n;

        for(int k = 0; k < n; k++) {
            if(turma[k] > media) {
                cont++;
            }
        }
        
        printf("%.3f%%\n", ACIMA_DA_MEDIA(n, cont));
    }

    return 0;
}
