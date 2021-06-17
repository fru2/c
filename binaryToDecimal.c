#include <stdio.h>
int main(){
    // b2 - base 2; ct - current term; ld - last digit
    long int b2, b10 = 0, ct = 1, ld;
    printf("Enter binary b2: ");
    scanf("%ld", &b2);
    while (b2 > 0){
        ld = b2 % 10;
        b2 /= 10;
        b10 = b10 + ld * ct;
        ct = ct * 2;
    }
    printf("Decimal number %d", b10);
}