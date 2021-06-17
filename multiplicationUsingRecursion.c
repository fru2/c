#include <stdio.h>

int main(){
    int c, a = 3, b = 4;
    c = prod(a,b);
    printf("Product of %d and %d is %d", a, b, c);
}

int prod(int a, int b){
    if (a == 1)
        return b;
    else
        return (b + prod(a-1, b)); //recursion here
}