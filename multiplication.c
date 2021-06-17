#include <stdio.h>

int main(){
	int num, fac = 1, mul;
    printf("Enter a number: ");
    scanf("%d", &num);
    for ( int i = 1; i <= 10; i++){
        mul = num * i;
        printf("%d X %d = %d\n", num, i, mul);
    }
}
