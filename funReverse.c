#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d", num, reverse(num));
}

int reverse(int inp) {
    int dig, rev = 0;
    while (inp > 0) {
        dig = inp % 10;
        rev = rev * 10 + dig;
        inp = inp / 10;
    }
    return rev;
}