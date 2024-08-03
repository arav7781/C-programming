#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define data structures
typedef struct {
    char name[50];
    float price;
} MenuItem;

typedef struct {
    char name[50];
    MenuItem menu[50];
    int num_items;
} Restaurant;

typedef struct {
    char name[50];
    char address[100];
    int phone;
} Customer;

typedef struct {
    char item_name[50];
    int quantity;
} OrderItem;

typedef struct {
    Customer customer;
    Restaurant restaurant;
    OrderItem items[50];
    int num_items;
    float total_price;
    char status[20];
} Order;

// Function prototypes
void displayMenu(Restaurant restaurant);
Order createOrder(Customer customer, Restaurant restaurant);
void placeOrder(Order order);

// Main function
int main() {
    // Example usage
    Customer customer = {"John", "123 Main St", 1234567890};
    Restaurant restaurant = {"Restaurant A"};
    MenuItem menu[] = {{"Pizza", 10.99}, {"Burger", 8.99}, {"Salad", 5.99}};
    memcpy(restaurant.menu, menu, sizeof(menu));
    restaurant.num_items = sizeof(menu) / sizeof(menu[0]);

    displayMenu(restaurant);
    Order order = createOrder(customer, restaurant);
    placeOrder(order);

    return 0;
}

// Function to display restaurant menu
void displayMenu(Restaurant restaurant) {
    printf("Menu for %s:\n", restaurant.name);
    for (int i = 0; i < restaurant.num_items; i++) {
        printf("%d. %s - $%.2f\n", i+1, restaurant.menu[i].name, restaurant.menu[i].price);
    }
}

// Function to create an order
Order createOrder(Customer customer, Restaurant restaurant) {
    Order order;
    order.customer = customer;
    order.restaurant = restaurant;
    order.total_price = 0;
    order.num_items = 0;
    strcpy(order.status, "Pending");
    
    int choice;
    do {
        printf("Enter item number to add to order (0 to finish): ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= restaurant.num_items) {
            printf("Enter quantity: ");
            scanf("%d", &order.items[order.num_items].quantity);
            strcpy(order.items[order.num_items].item_name, restaurant.menu[choice-1].name);
            order.total_price += restaurant.menu[choice-1].price * order.items[order.num_items].quantity;
            order.num_items++;
        }
    } while (choice != 0);

    return order;
}

// Function to place an order
void placeOrder(Order order) {
    printf("\nOrder details:\n");
    printf("Customer: %s\n", order.customer.name);
    printf("Restaurant: %s\n", order.restaurant.name);
    printf("Items:\n");
    for (int i = 0; i < order.num_items; i++) {
        printf("%s - Quantity: %d\n", order.items[i].item_name, order.items[i].quantity);
    }
    printf("Total Price: $%.2f\n", order.total_price);
    printf("Status: %s\n", order.status);
    printf("Order placed successfully!\n");
}
