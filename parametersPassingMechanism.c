#include <stdio.h>

int main(void) {
    
    int aa = 10, bb = 20, cc, dd;
    
    cc = callByVal(aa, bb);
    dd = callByRed(&aa, &bb);
    
    printf("Call by value return: %d, call by reference returned value: %d", cc, dd);

    // See how the original value of aa is changed because of reference call... Because the new variable in callByRead is using the same address as that of aa therefore the value change in function cause the value in main function to change.
    printf("\naa after function call: %d, bb after function call %d", aa, bb);
    
	return 0;
}

int callByVal(int a, int b){
    int c = a + b;
    b = 288;
    return c;
}

int callByRed(int *a, int *b){
    int c = *a + *b;
    *a = 500; 
    return c;
}
