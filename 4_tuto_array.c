// TODO : Before compiling, make sure only one snippet is uncommented.



#include <stdio.h>
#include <stdlib.h>

void passingArrAsArgument(){}

int main() {

    //  1D array

    int arr[] = { 2, 4, 10, 28 };
    // int arr[4] = {2, 4, 10, 28};

    int arr2[10];
    for (int i = 0; i < 10; i++)
        arr2[i] = rand() % 100;

    for (int i = 0; i < 10; i++)
        printf("%d\n", arr2[i]);

    // *************************************************************************************************8

    // 2D array

    // int arr3[2][5];
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         arr3[i][j] = rand() % 10;
    //     }
    // }

    // for (int i = 0; i < 2; i++) {
    //     printf("\n");
    //     for (int j = 0; j < 5; j++)
    //         printf("%d\n", arr3[i][j]);
    //     printf("\n");
    // }

    //

    return 0;
}