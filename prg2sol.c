#include <stdio.h>
#include <string.h>

// Function to calculate the base bill
float calculateBaseBill(int unitsConsumed) {
    float baseBill = 100; // Fixed charge

    if (unitsConsumed <= 100) {
        baseBill += unitsConsumed * 5;
    } else if (unitsConsumed <= 300) {
        baseBill += 100 * 5 + (unitsConsumed - 100) * 7;
    } else {
        baseBill += 100 * 5 + 200 * 7 + (unitsConsumed - 300) * 10;
    }
    return baseBill;
}

// Function to calculate the surcharge
float calculateSurcharge(float baseBill) {
    if (baseBill > 1000) {
        return baseBill * 0.05;
    } else {
        return 0;
    }
}

// Function to calculate the total bill
float calculateTotalBill(float baseBill, float surcharge) {
    return baseBill + surcharge;
}

int main() {
    char customerName[100];
    int customerID;
    int unitsConsumed;
    float baseBill, surcharge, totalBill;

    printf("Enter Customer Name: ");
    fgets(customerName, sizeof(customerName), stdin);
    customerName[strcspn(customerName, "\n")] = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Total Units Consumed: ");
    scanf("%d", &unitsConsumed);

    baseBill = calculateBaseBill(unitsConsumed);
    surcharge = calculateSurcharge(baseBill);
    totalBill = calculateTotalBill(baseBill, surcharge);

    printf("\nCustomer Name: %s\n", customerName);
    printf("Customer ID: %d\n", customerID);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Base Bill: ₹%.2f\n", baseBill);
    printf("Surcharge: ₹%.2f\n", surcharge);
    printf("Total Bill: ₹%.2f\n", totalBill);

    return 0;
}
