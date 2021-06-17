#include <stdio.h>

int linearSearch(int inpArr[], int inpArrSize, int inpTbs){
    for (int i = 0; i < inpArrSize; i++){
        if (inpTbs == inpArr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arrSize, tbs;

    printf("Enter array size: ");
    scanf("%d", &arrSize);

    int arr[arrSize];
    printf("Enter the array: ");
    for (int i = 0; i < arrSize; i++)
        scanf("%d", &arr[i]);

    printf("Enter a number to search: ");
    scanf("%d", &tbs);

    int index = linearSearch(arr, arrSize, tbs);
    (index == -1) 
        ? printf("Not found in the array") 
        : printf("%d is on the index %d", tbs, index);

    return 0;
}