#include <stdio.h>

// Function to calculate toll tax
float calculate_toll(char vehicle_type, int distance) {
    float rate_per_km;
    float total_cost;
    
    // Assign base charge per km based on vehicle type
    switch (vehicle_type) {
        case 'Car':
            rate_per_km = 5.0;
            break;
        case 'Truck':
            rate_per_km = 10.0;
            break;
        case 'Bus':
            rate_per_km = 8.0;
            break;
        default:
            printf("Invalid vehicle type!\n");
            return -1;
    }
    
    // Calculate total cost before discount
    total_cost = rate_per_km * distance;
    
    // Apply discounts
    if (vehicle_type == 'T' && distance > 500) {
        total_cost *= 0.9;  // 10% discount for trucks traveling more than 500 km
    } else if (vehicle_type == 'B' && distance > 300) {
        total_cost *= 0.95; // 5% discount for buses traveling more than 300 km
    }
    
    return total_cost;
}

int main() {
    char vehicle_type;
    int distance;
    float toll_amount;
    
    // Input vehicle type and distance
    printf("Enter vehicle type (C for Car, T for Truck, B for Bus): ");
    scanf(" %c", &vehicle_type);
    
    printf("Enter distance traveled (in km): ");
    scanf("%d", &distance);
    
    // Calculate toll amount
    toll_amount = calculate_toll(vehicle_type, distance);
    
    if (toll_amount != -1) {
        printf("Total toll tax: ₹%.2f\n", toll_amount);
    }
    
    return 0;
}
