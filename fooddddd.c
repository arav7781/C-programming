#include <stdio.h> #include <string.h>
#define MAX_ITEMS 10 struct MenuItem {
char name[50];
float price; int quantity;
};

void displayMenu(struct MenuItem menu[], int size) { printf("Menu:\n");
for (int i = 0; i < size; i++) {
printf("%d. %s - %.2f\n", i + 1, menu[i].name, menu[i].price);
}
}

float calculateTotal(struct MenuItem order[], int size) {
 

float total = 0;
for (int i = 0; i < size; i++) {
total += order[i].price * order[i].quantity;
}
return total;
}

int main() {
struct MenuItem menu[3] = {
{"Burger", 150, 0}, {"Pizza", 399, 0}, {"Fries", 200, 0}};

struct MenuItem order[MAX_ITEMS]; int orderSize = 0;

int choice; int quantity;

displayMenu(menu, 3);

printf("Enter the number of the item you'd like to order (0 to finish): "); scanf("%d", &choice);
while (choice != 0 && orderSize < MAX_ITEMS) { if (choice < 1 || choice > 3) {
printf("Invalid choice. Please choose a number between 1 to 3.\n");
} else {
printf("Enter the quantity: "); scanf("%d", &quantity);
menu[choice - 1].quantity += quantity; order[orderSize] = menu[choice - 1]; order[orderSize].quantity = quantity; orderSize++;
}
printf("Enter the number of the next item you'd like to order (0 to " "finish): ");
scanf("%d", &choice);
}

float total = calculateTotal(order, orderSize);

// Print Receipt

printf("\n\n       Receipt:        \n"); printf("	\n");
printf("Item\t\tQuantity\tPrice\n");
printf("	\n");
for (int i = 0; i < orderSize; i++) {
 

printf("%s\t\t%d\t\t	%.2f\n", order[i].name, order[i].quantity, order[i].price * order[i].quantity);
}
printf("	\n");
printf("Total:\t\t\t\t\t%.2f\n", total);
printf("	\n");

return 0;
}