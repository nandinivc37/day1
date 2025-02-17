/*
`2. Electricity Bill Calculation`  
`Scenario:`  
A power company charges customers based on their `electricity consumption`:  
- `First 100 units`: ₹2 per unit  
- `Next 100 units`: ₹3 per unit  
- `Beyond 200 units`: ₹5 per unit  

Write a program that calculates the `total electricity bill` for `N` customers.

`Input Example:`  
```
Enter units consumed: 250
```

`Output Example:`  
```
Total Bill: ₹850
```
*/

#include <stdio.h>

// Function to calculate electricity bill
float calculate_bill(int units) {
    float total_cost = 0;
    
    if (units <= 100) {
        total_cost = units * 2;
    } else if (units <= 200) {
        total_cost = (100 * 2) + ((units - 100) * 3);
    } else {
        total_cost = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    }
    
    return total_cost;
}

int main() {
    int units;
    float bill_amount;
    
    // Input electricity units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    // Calculate total bill
    bill_amount = calculate_bill(units);
    
    printf("Total Bill: ₹%.2f\n", bill_amount);
    
    return 0;
}
