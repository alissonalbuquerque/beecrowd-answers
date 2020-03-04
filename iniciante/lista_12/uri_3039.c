
#include <stdio.h>

int main() {

    int n = 0, m = 0, f = 0;
    char c;
    scanf("%d", &n);

    while(n--) {

        scanf("%*s %c", &c);

        c == 'F'? f++ : m++;

    }

    printf("%d carrinhos\n%d bonecas\n", m, f);

    return 0;
}
