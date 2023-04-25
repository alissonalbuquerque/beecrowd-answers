
#include <stdio.h>

int main() {

    for(double i = 0; i <= 2; i+=0.2) {

        for(double  j = 1; j <= 3; j++) {

            if( (i >= 0.1 && i <= 0.9) || (i >= 1.1 && i <= 1.9) )  {
                printf("I=%.1f J=%.1f\n", i, j+i);
            } else {
                printf("I=%.0f J=%.0f\n", i, j+i);
            }

        }

    }


    return 0;
}
