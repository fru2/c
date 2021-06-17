#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("\nEnter element at index %d @position %d: ", i, i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nBiggest number is %d", biggestNum(arr, n));
	return 0;
}

int biggestNum(int aa[], int n){
    int big = aa[0];
    for (int j = 0; j < n; j++)
        if (aa[j] > big)
            big = aa[j];;
    return big;
}
