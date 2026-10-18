#include <stdio.h>

int main() {
    int stock[] = {25, 12, 8, 40, 5, 18, 3, 22};
    int n = sizeof(stock) / sizeof(stock[0]);
    
    printf("Initial Stock Levels:\n");
    for(int i = 0; i < n; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);
        if(stock[i] < 10) {
            printf("Item %d is LOW on stock - reorder required\n", i + 1);
        }
    }
    
    int item, qty;
    while(1) {
        printf("\nEnter item number (1-%d) or 0 to exit: ", n);
        scanf("%d", &item);
        if(item == 0) {
            break;
        }
        if(item < 1 || item > n) {
            printf("Invalid item number.\n");
            continue;
        }
        printf("Enter quantity sold: ");
        scanf("%d", &qty);
        
        if(stock[item - 1] - qty < 0) {
            printf("Error: Sale would make stock negative. Quantity unchanged.\n");
        } else {
            stock[item - 1] -= qty;
            printf("Sale recorded successfully.\n");
        }
    }
    
    printf("\nEnd of Day Summary:\n");
    int total_units = 0;
    int min_stock = stock[0];
    int min_index = 0;
    
    for(int i = 0; i < n; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);
        total_units += stock[i];
        if(stock[i] < min_stock) {
            min_stock = stock[i];
            min_index = i;
        }
    }
    
    printf("Total units remaining: %d\n", total_units);
    printf("Item with least stock: Item %d with %d units\n", min_index + 1, min_stock);
    
    return 0;
}