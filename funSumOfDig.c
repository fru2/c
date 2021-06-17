#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of the digit(s) of %d is %d", num, sumOfDigit(num));
}

int sumOfDigit(int inp) {
    int dig, sum;
    while (inp > 0) {
        dig = inp % 10;
        inp = inp / 10;
        sum += dig;
    }
    return sum;
}