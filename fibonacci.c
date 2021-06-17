#include <stdio.h>
int main(){
    long long int lt = 0, ct = 1;
    printf("Fibonacci series: %lld", lt);
    for (int i = 1; i < 50; i++){
        printf(", %lld", ct);
        ct = lt + ct;
        lt = ct - lt;
    }
}