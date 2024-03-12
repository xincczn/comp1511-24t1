// bubble_tea.c
//
// Written by X (YOUR-ZID) on TODAYS-DATE
//
// This program is a simple bubble tea store used to teach functions

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_TEA 10
#define BASE_TOPPINGS 5
#define BASE_COST 6.5

// enum definitions
enum bubble_tea_type {
    MILK_TEA,
    FRUIT_TEA,
    TARO_MILK,
    MATCHA_LATTE,
};

enum topping_types {
    TAPIOCA_PEARLS,
    JELLY,
    POPPING_PEARLS,
    ALOE_VERA,
};

// struct definitions
struct bubble_tea {
    enum bubble_tea_type type;
	enum topping_types topping;
	int topping_qty;
    char size;
};

struct inventory {
    int tea;
    int toppings;
};

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// FUNCTION PROTOYPES //////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Add functions protoypes here
struct bubble_tea creating_order(void);
int check_inventory(struct inventory inventory);
double calculate_cost(struct bubble_tea order);
void print_cost(struct bubble_tea order, double total_cost);
struct inventory update_inventory(struct inventory inventory, struct bubble_tea order);
void print_inventory(struct inventory inventory);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// MAIN FUCNTION ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


int main(void) {
    struct inventory inventory;
    inventory.tea = BASE_TEA;
    inventory.toppings = BASE_TOPPINGS;

    struct bubble_tea orders[10];

    int i = 0;
    while (i < 10) {
        orders[i] = creating_order();
        i++;
    }

    int i = 0;
    while (i < 10) {
        if (check_inventory(inventory)) {
            return 1;
        }

        print_cost(orders[i], calculate_cost(orders[i]));

        inventory = update_inventory(inventory);
    }

    print_inventory();

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////// FUNCTION DEFINITIONS /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Write function definitionds here
struct bubble_tea creating_order(void) {
 // Take the user's bubble tea order
    struct bubble_tea order;
    int type;

    printf("Enter bubble tea type (0: MILK TEA, 1: FRUIT TEA, 2: TARO MILK, "
            "3: MATCHA LATTE): ");
    scanf("%d", &type);
    if (type == 0) {
        order.type = MILK_TEA;
    } else if (type == 1) {
        order.type = FRUIT_TEA;
    } else if (type == 2) {
        order.type = TARO_MILK;
    } else if (type == 3) {
        order.type = MATCHA_LATTE;
    }

    printf("Enter topping (0: TAPIOCA PEARLS, 1: JELLY, 2: POPPING PEARLS, "
            "3: ALOE VERA): ");
    scanf("%d", &type);
    if (type == 0) {
        order.topping = TAPIOCA_PEARLS;
    } else if (type == 1) {
        order.topping = JELLY;
    } else if (type == 2) {
        order.topping = POPPING_PEARLS;
    } else if (type == 3) {
        order.topping = ALOE_VERA;
    }

    printf("Enter topping qty: ");
    scanf("%d", &order.topping_qty);


    printf("Enter size (L for Large, R for Regular): ");
    scanf(" %c", &order.size);

    return order;
}

int check_inventory(struct inventory inventory) {
    // Check available stock and end the program if insufficient stock
    if (inventory.tea - 1 <= 0 ||
        inventory.toppings - order.topping_qty <= 0) {
        printf("Sorry, we cannot fulfill your bubble tea order due to "
                "insufficient stock.\n");
        return 1; 
    } else {
        return 0;
    }
}

double calculate_cost(struct bubble_tea order) {
    // Calculate the cost
    double total_cost = BASE_COST;

    if (order.size == LARGE) {
        total_cost += ADDED_COST;
    }

    if (order.type == MILK_TEA ||
        order.type == TARO_MILK ||
        order.type == MATCHA_LATTE) {
        total_cost += ADDED_COST;
    }

    int count = 0;
    while (count < order.topping_qty) {
        total_cost += ADDED_COST;
        count++;
    }

    return total_cost;
}

void print_cost(struct bubble_tea order, double total_cost) {
    // Print the final order and cost
    printf("Order:\n");
    printf("Type: %d\n", order.type);
    printf("Topping Qty: %d\n", order.topping_qty);
    printf("Size: %c\n", order.size);
    printf("Total Cost: %.2lf\n", total_cost);
}

struct inventory update_inventory(struct inventory inventory, struct bubble_tea order) {
    // Update the stock after fulfilling the order
    if (order.size == LARGE) {
        inventory.tea -= 2;
    } else {
        inventory.tea -= 1;
    }
            
    inventory.toppings -= order.topping_qty;

    return inventory;
}

void print_inventory(struct inventory inventory) {
    // Step 6: print the remining inventory
    printf("The current inventory is: ");
    printf("Bubble tea(s): %d\n", inventory.tea);
    printf("Topping(s): %d\n", inventory.toppings);
}