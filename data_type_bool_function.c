#include <stdio.h>
#include <stdbool.h> // Needed for use of bool type

bool pass_exam(int mark) {
    if (mark >= 50)
        return true;
    else 
        return false;
}

int main() {

    bool pass = true; // Internally, bool is just an integer type true is 1, false is 0
    bool fail = 0; // Internally, bool is just an integer type true is 1, false is 0
    printf("Pass is %d \n", pass);
    printf("Fail is %d \n", fail);

    printf("Does the mark 60 pass the exam? %d \n", pass_exam(60));

    return 0;
}