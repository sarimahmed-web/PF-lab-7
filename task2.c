#include <stdio.h>

int main() {
    float marks[10];
    
    for(int i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        while(marks[i] < 0 || marks[i] > 20) {
            printf("Invalid input. Re-enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);
        }
    }
    
    printf("\n--- Grade Report ---\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d (%.2f): ", i + 1, marks[i]);
        if(marks[i] >= 18) {
            printf("Excellent\n");
        } else if(marks[i] >= 14) {
            printf("Good\n");
        } else if(marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }
    
    float sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += marks[i];
    }
    float class_avg = sum / 10;
    printf("\nClass Average: %.2f\n", class_avg);
    
    int above_avg_count = 0;
    for(int i = 0; i < 10; i++) {
        if(marks[i] > class_avg) {
            above_avg_count++;
        }
    }
    printf("Students above average: %d\n", above_avg_count);
    
    for(int i = 0; i < 10; i++) {
        marks[i] += 1.5;
        if(marks[i] > 20) {
            marks[i] = 20;
        }
    }
    
    printf("\n--- Revised Report after Bonus ---\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }
    
    return 0;
}