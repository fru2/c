#include <stdio.h>

int main(){
	int num, fac;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
}

int factorial(int inp){
    int fac = 1;
    for ( inp; inp > 0 ; inp--){
        fac *= inp;
    }
    return fac;
}