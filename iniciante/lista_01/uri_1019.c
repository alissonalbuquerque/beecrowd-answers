
#include <stdio.h>

int main() {

    int n;
    int hr_min_seg[3] = {0, 0, 0};

    scanf("%d", &n);

    while(n > 0) {

        if(n >= 3600) {
            hr_min_seg[0] = n / 3600;
            n %= 3600;
        } else if(n >= 60) {
            hr_min_seg[1] = n / 60;
            n %= 60;
        } else {
            hr_min_seg[2] = n;
            n = 0;
        }

    }

    printf("%d:%d:%d\n", hr_min_seg[0], hr_min_seg[1], hr_min_seg[2]);

    return 0;
}
