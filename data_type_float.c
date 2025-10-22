#include <stdio.h>

int main() {
    float gpa = 3.8;
    const double PI = 3.141592653589793;
    printf("My GPA is %f\n", gpa);
    // printf("My GPA is %0.2f\n", gpa);
    printf("PI is %f\n", PI);
    printf("PI is %0.10f\n", PI);
    return 0;
}

/* Both float and double are data types used to 
store real numbers (numbers with decimal points), 
but they differ in precision and storage size.

double stores the number more accurately 
because it uses twice as many bits.
*/