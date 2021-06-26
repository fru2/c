// TODO : Before compiling, make sure only one snippet is uncommented.





// Storage class
// A storage class defines the scope(visibility) and life - time of variables and /or functions within a C Program.

// Types: auto, static, register, extern 

#include <stdio.h>

int externVar; // Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used.

int main(){

    int autoVar;   // This is the default storage class for all the variables declared inside a function or a block.
    
    static int staticVar; // they are initialized only once and exist till the termination of the program.

    register int registerVar;   // the compiler tries to store these variables in the register of the microprocessor if a free register is available.This makes the use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program.

    printf("Auto: %d, Static: %d, Register: %d, Extern: %d", 
        autoVar, // garbage
        staticVar, // zero
        registerVar, // garbage
        externVar // zero
    );

    return 0;
}

// ***********************************************************************************


// Global variable (outside of all function)
// Local variable (inside a function)
// Formal variable  (in the definition of function) [void fun (int thisIsFormalVar)]

// #include <stdio.h>

// int globalVariable;

// void justAFunction( int formalVariable ){ 
    
//     int localVariable;

// }

// int main(){
//     return 0;
// }




// Behaviour

// #include <stdio.h>

// int counter = 0;    // global variable init

// void justAFunction(int anotherNum) { // formal variable init

//     int num = 0; // local variable init

//     anotherNum++;
//     num++;
//     counter++;

//     printf("%d\n", num);
//     printf("%d\n", anotherNum);
//     printf("%d\n\n", counter);

// }

// int main() {

//     justAFunction(9);
//     justAFunction(19);
//     justAFunction(29);

//     printf("%d\n", counter);
//     // printf("%d", num);           // Local and formal variable can't be accessed
//     // printf("%d", anotherNum);

//     return 0;
// }
