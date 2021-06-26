// TODO : Before compiling, make sure only one snippet is uncommented.




// Jump statement
// Type: continue, goto, break, return

#include <stdio.h>

void continueExample(){
    for (int i = 1; i <= 5; i++) {

        if (i == 3) {
            continue;
        }

        printf("%d\n", i);
    }
}

void gotoExample(){
    for (int i = 10; i <= 20; i += 10) {

        if (i == 12) {
            goto skipToThisPart;
        }

        i = i - 9; //
        
        skipToThisPart:
            printf("%d\n", i);
    }
}

void breakExample(){
    for (int i = 1; i <= 5; i++) {

        if (i == 3) {
            break;
        }

        printf("%d\n", i);
    }
}

void returnExample() {
    for (int i = 1; i <= 5; i++) {

        if (i == 3) {
            return; // Return genearally holds a value but in this case, the function return type is void that's why it has to be empty
        }

        printf("%d\n", i);
    }
}


int main() {

    continueExample();
    // gotoExample();
    // breakExample();
    // returnExample();
    
    return 0;
}