#include <stdio.h>
int main() {
    int rp = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            if (rp != 0) {
                if (j % 2 == 0) {
                    printf("%d ", 1);
                }
                else {
                    printf("%d ", 0);
                }
            }

            else {
                if (j % 2 == 0) {
                    printf("%d ", 0);
                }
                else {
                    printf("%d ", 1);
                }
            }
        }
        printf("\n");
        rp += 1;
        if (rp == 3) {
            rp = 0;
        }
    }
}