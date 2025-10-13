#include <stdio.h>

int sum_range(int small_number, int large_number, int step) {
    int sum = 0;
    for (int i = small_number; i < large_number + 1; i += step) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("The sum of integers from 1 to 100 is %d.\n", sum_range(1, 100, 1));
    printf("The sum of even integers from 1 to 100 is %d.\n", sum_range(2, 100, 2));
    
    return 0;
}
