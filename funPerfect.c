#include<stdio.h> 
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPerfect(num);
}

void isPerfect(int inp){
    int i = 1, sum = 0;
    while (i < inp)
    {
        if (inp % i == 0)
            sum = sum + i;
        i++;
    }
    if (sum == inp) {
        printf("%d is perfect numberber", inp);
    }
    else {
        printf("%d is not a perfect number", inp);
    }
}