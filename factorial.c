#include <stdio.h>

int main(){
	int num, fac = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for ( num; num > 0 ; num--){
        fac *= num;
    }
    printf("Factorial: %d", fac);
}
