#include <stdio.h>

int my_square(int num) {
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += num;
    }
    return sum;
}

int main() {
    printf("The square of 5 is: %d.\n", my_square(5));
    return 0;
}