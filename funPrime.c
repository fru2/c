#include<stdio.h>
#include<stdbool.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPrime(num);
}

void isPrime(int inp){
    bool isPrime = true;
    for(int i = 2; i < inp; i++){
        if (inp % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        printf("%d is prime number", inp);
    }
    else{
        printf("%d is not prime number", inp);
    }
}