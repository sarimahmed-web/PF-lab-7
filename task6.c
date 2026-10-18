#include <stdio.h>

int main() {
    int queue[15];
    int count = 0;
    int token;
    
    printf("Register patients (Enter -1 to stop, max 15):\n");
    while(count < 15) {
        printf("Enter token number: ");
        scanf("%d", &token);
        if(token == -1) {
            break;
        }
        queue[count] = token;
        count++;
    }
    
    printf("\nCurrent Queue:\n");
    for(int i = 0; i < count; i++) {
        printf("Position %d -> Token %d\n", i + 1, queue[i]);
    }
    
    char choice;
    while(count > 0) {
        printf("\nPress 'c' to call next patient, 'e' for emergency, or 'q' to quit: ");
        scanf(" %c", &choice);
        
        if(choice == 'q') {
            break;
        } else if(choice == 'c') {
            printf("Calling Token %d\n", queue[0]);
            for(int i = 0; i < count - 1; i++) {
                queue[i] = queue[i + 1];
            }
            count--;
        } else if(choice == 'e') {
            if(count >= 15) {
                printf("Queue is full! Cannot add emergency.\n");
                continue;
            }
            int em_token;
            printf("Enter emergency token number: ");
            scanf("%d", &em_token);
            
            for(int i = count; i > 0; i--) {
                queue[i] = queue[i - 1];
            }
            queue[0] = em_token;
            count++;
            printf("Emergency patient added at front.\n");
        }
        
        printf("Updated Queue:\n");
        if(count == 0) {
            printf("Queue is empty.\n");
        } else {
            for(int i = 0; i < count; i++) {
                printf("Position %d -> Token %d\n", i + 1, queue[i]);
            }
        }
    }
    
    return 0;
}