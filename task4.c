#include <stdio.h>

int main() {
    char name[20];
    
    printf("Enter display name: ");
    scanf("%[A-Za-z]", name);
    
    int count = 0;
    while(name[count] != '\0') {
        printf("Character at index %d: %c\n", count, name[count]);
        count++;
    }
    
    printf("Total characters stored: %d\n", count);
    
    if(name[0] >= 'a' && name[0] <= 'z') {
        name[0] -= 32;
    }
    
    printf("Final name: %s\n", name);
    
    return 0;
}