#include <stdio.h>

int main() {
    int marks[] = {80, 80, 90};

    int our_marks[3] = {80, 80, 90};
    int your_marks[3];
    your_marks[0] = 80;
    your_marks[1] = 90;
    your_marks[2] = 100;
    printf("The first mark is: %d\n", your_marks[1]);

    for (int i = 0; i < 3; i++) 
         printf("The mark is: %d\n", your_marks[i]);

    return 0;
}