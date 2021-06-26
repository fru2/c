// TODO : Before compiling, make sure only one snippet is uncommented. 



// What is a function?
// A function is a self-contained block of statement that can be called for any number of times. 
// A function if a collection of logically related instructions which performs a specific task.

// Syntax of function declaration:
/* 
return_type functionName (args1, args2, ..., argsN){
     Statement 1
     return value
} 
*/

// Example: 

#include <stdio.h>

void functionWithoutArguments(){
    printf("Function called\n");
    
};

int functionWithArguments(int num1, int num2){
    int sum = num1 + num2;
    return sum;
    
}

int area (int a, int b){
    int result = a * b;
    return result;
}

float valueOfPie(){
    float calcPi = 22.0 / 7.0;
    return calcPi;
}

int main() {
    printf("\n");

    printf("%d", area(10, 20));

    functionWithoutArguments(); // Function call
    functionWithArguments(10, 20); // Function call

    int result = functionWithArguments(20, 8); // Assigning the returned value to a int variable
    printf("Sum of number: %d\n", result);

    float pi = valueOfPie();
    printf("Value of Pi is %f\n", pi);

    printf("\n");

    return 0;
}


// ***********************************************************************************


// A function prototype gives information to the compiler that the function may later be used in the program.

// NOTE : The function prototype is not needed if the user-defined function is defined before the main() function. 


// #include <stdio.h>

// int function1(); // --------- Function prototype ---------

// int main() {
//     function1();
//     return 0;
// }

// int function1(){
//     printf("Hello world");
// }

// PS : To demonstrate, use solo learn online IDE which strictly follows ANSI C compiler guidelines. 
// https://code.sololearn.com/c
// Most compiler don't throw any error because all the function(s) gets initialized at the compile time.



// ***********************************************************************************

// Recursion 
// A function that calls itself is known as a recursive function. And, this technique is known as recursion.


// #include <stdio.h>

// int justANumber = 0;

// void recursiveFunction() {

//     justANumber += 1;
//     printf("Current number: %d\n", justANumber);
    
//     if (justANumber == 10){
//         return;
//     } 
//     else{
//         recursiveFunction();  // Recursion
//     }

// }

// int main() {
//     printf("\n");

//     recursiveFunction(); // Function call

//     printf("\n");
//     return 0;
// }











//*************************************************************************************************

