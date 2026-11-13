
#include <stdio.h>
#include <string.h>

int main() {
    char grocery[5][20] = {
        "Rice", "Milk", "Bread", "Sugar", "Apples"
    };

    float rate[5] = {60, 30, 40, 45, 100};
    char item[20];
    int qty, i, choice;
    float bill = 0;

    printf("===== GROCERY SHOP =====\n");

    printf("\nAvailable Items:\n");
    printf("Item\t\tRate (Rs.)\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t\t%.2f\n", grocery[i], rate[i]);
    }

    do {
        printf("\nEnter item name to buy: ");
        scanf("%19s", item);

        for (i = 0; i < 5; i++) {
            if (strcmp(item, grocery[i]) == 0) {
                printf("Enter quantity: ");
                scanf("%d", &qty);

                if (qty <= 0) {
                    printf("Invalid quantity!\n");
                } else {
                    printf("Item: %s\n", grocery[i]);
                    printf("Rate: Rs. %.2f\n", rate[i]);
                    printf("Amount: Rs. %.2f\n",
                           rate[i] * qty);

                    bill += rate[i] * qty;
                }
                break;
            }
        }

        if (i == 5) {
            printf("Item not available!\n");
        }

        printf("\nBuy another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\n===== FINAL BILL =====\n");
    printf("Total Bill = Rs. %.2f\n", bill);
    printf("Thank you for shopping!\n");

    return 0;
}
