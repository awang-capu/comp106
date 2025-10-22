#include <stdio.h>
#include <stdbool.h> // Needed for use of bool type

int main() {

    bool comp106_pass = true; // Internally, bool is just an integer type true is 1, false is 0
    bool fail = 0; // Internally, bool is just an integer type true is 1, false is 0
    printf("The variable comp106_pass has the value of %d \n", comp106_pass);
    printf("The variable fail has the value of %d \n", fail);

    return 0;
}