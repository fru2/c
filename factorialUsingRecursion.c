#include <stdio.h>

int main(void) {
	int n;
	printf("\nEnter any number: ");
	scanf("%d", &n);
	printf("Factorial of %d is %d", n, facto(n));
	return 0;
}

int facto(int n) {
    int f;
    if (n == 0) {
        return 1;
    }
    else {
        f = n * facto(n - 1); //recursion here
    }
    return f;
}