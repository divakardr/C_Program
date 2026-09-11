#include <stdio.h>
#include <string.h>

int main() {

  
    // 1. MENU ITEM AVAILABILITY

    char itemCode[10];
    int quantity;

    printf("===== SMART CAFE =====\n");

    printf("\nEnter Item Code (C101/T202/S303): ");
    scanf("%s", itemCode);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    int stock = 0;
    char itemName[20];

    switch (itemCode[0]) {

        case 'C':
            if (strcmp(itemCode, "C101") == 0) {
                stock = 10;
                strcpy(itemName, "Coffee");
            } else {
                printf("Invalid item code!\n");
            }
            break;

        case 'T':
            if (strcmp(itemCode, "T202") == 0) {
                stock = 8;
                strcpy(itemName, "Tea");
            } else {
                printf("Invalid item code!\n");
            }
            break;

        case 'S':
            if (strcmp(itemCode, "S303") == 0) {
                stock = 5;
                strcpy(itemName, "Sandwich");
            } else {
                printf("Invalid item code!\n");
            }
            break;

        default:
            printf("Invalid item code!\n");
    }

    if (stock > 0) {
        if (quantity <= stock) {
            printf("%s is available.\n", itemName);
            printf("Requested quantity: %d\n", quantity);
        } else {
            printf("Out of stock!\n");
            printf("Only %d %s available.\n", stock, itemName);
        }
    }


    
    // 2. CUSTOMER DISCOUNT

    char customerType[20];
    float total, discount = 0, finalAmount;

    printf("\n===== CUSTOMER DISCOUNT =====\n");

    printf("Enter Customer Type (Regular/Member/First-Time): ");
    scanf("%s", customerType);

    printf("Enter Total Bill: $");
    scanf("%f", &total);

    if (strcmp(customerType, "Member") == 0) {

        discount = total * 0.15;

    } else if (strcmp(customerType, "First-Time") == 0) {

        if (total >= 20) {
            discount = total * 0.10;
        } else {
            discount = 0;
        }

    } else if (strcmp(customerType, "Regular") == 0) {

        discount = 0;

    } else {

        printf("Invalid customer type!\n");
    }

    finalAmount = total - discount;

    printf("Discount: $%.2f\n", discount);
    printf("Final Amount: $%.2f\n", finalAmount);


    
    // 3. PROMO CODE
    
    char promoCode[20];

    printf("\n===== PROMO CODE =====\n");

    printf("Enter Promo Code: ");
    scanf("%s", promoCode);

    if (strcmp(promoCode, "CAFE5") == 0) {

        printf("$5 discount applied.\n");

    } else if (strcmp(promoCode, "FREEDRINK") == 0) {

        printf("Congratulations! You get a free drink.\n");

    } else if (strcmp(promoCode, "WELCOME10") == 0) {

        printf("10%% discount applied.\n");

    } else {

        printf("Invalid promo code.\n");
    }


    
    // 4. DAILY ORDER SUMMARY
    

    int n;
    float orders[100];
    float revenue = 0;
    int points = 0;

    printf("\n===== DAILY ORDER SUMMARY =====\n");

    printf("Enter number of orders: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("Enter amount for Order %d: $", i + 1);
        scanf("%f", &orders[i]);

        revenue = revenue + orders[i];

        points = points + ((int)orders[i] / 25) * 10;
    }

    printf("\nTotal Revenue: $%.2f\n", revenue);
    printf("Total Loyalty Points: %d\n", points);

    return 0;
}