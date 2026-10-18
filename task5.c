#include <stdio.h>

int main() {
    char input[30];
    char cleaned[30];
    
    printf("Enter phone number: ");
    scanf(" %[^\n]", input);
    
    int i = 0;
    int j = 0;
    
    while(input[i] != '\0') {
        if(input[i] >= '0' && input[i] <= '9') {
            cleaned[j] = input[i];
            j++;
        }
        i++;
    }
    cleaned[j] = '\0';
    
    printf("Original input: %s\n", input);
    printf("Cleaned number: %s\n", cleaned);
    printf("Count of digits: %d\n", j);
    
    if(j == 11) {
        printf("Valid local number\n");
    } else {
        printf("Invalid length - please re-enter\n");
    }
    
    return 0;
}