#include <stdio.h>
int main(){
    int num, inp, dig, rev = 0;
    printf("Enter the number to reverse: ");
    scanf("%d", &num);
    inp = num;
    while (num > 0){
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }
    if (inp == rev){
        printf("Number is palindrome.");
    }
    else{
        printf("Number is not palindrome.");
    }

    // printf("Reversed number: %d", rev);
}