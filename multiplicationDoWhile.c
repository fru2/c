#include <stdio.h>

int main(){
	int num, i = 1, mul;
    printf("Enter a number: ");
    scanf("%d", &num);
    do{
        mul = num * i;
        i++;
        print("%d", mul);
    } while (i <= 10);
}
