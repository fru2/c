#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isArmstrong(num);
}

void isArmstrong(int inp) {
    int num = inp, dig, rev = 0, sumOfCube = 0;
    while (inp > 0) {
        dig = inp % 10;
        rev = rev * 10 + dig;
        inp = inp / 10;
        sumOfCube += (dig * dig * dig); 
    }
    if (sumOfCube == num) {
        printf("%d is armstrong.", num);
    }
    else {
        printf("%d is not armstrong.", num);
    }
}