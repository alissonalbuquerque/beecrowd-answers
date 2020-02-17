
#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    double saida[3];
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        saida[0] = pow(i,1);
        saida[1] = pow(i,2);
        saida[2] = pow(i,3);
        printf("%.0lf %.0lf %.0lf\n", saida[0], saida[1], saida[2]);
        printf("%.0lf %.0lf %.0lf\n", saida[0], saida[1]+1, saida[2]+1);
    }

    return 0;
}
