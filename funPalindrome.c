#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPalindrome(num);
}

void isPalindrome(int inp) {
    int num = inp, dig, rev = 0;
    while (inp > 0) {
        dig = inp % 10;
        rev = rev * 10 + dig;
        inp = inp / 10;
    }
    if (num == rev) {
        printf("Number is palindrome.");
    }
    else {
        printf("Number is not palindrome.");
    }
}