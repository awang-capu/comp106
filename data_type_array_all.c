#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 3; // Number of students

    int studentID[] = {101, 102, 103}; // Integer array: student IDs

    float gpa[] = {3.5, 3.8, 1.2};  // Float array: student GPA

    bool passed[] = {true, true, false};  // Bool array: whether the student has passed

    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", studentID[i]);
        printf("GPA: %.2f\n", gpa[i]);
        if (passed[i]) 
            printf("Passed: %s\n", "Yes");
        else printf("Passed: %s\n", "No");
        // printf("Passed: %s\n", passed[i] ? "Yes" : "No");
        
        printf("--------\n");
    }

    return 0;
}