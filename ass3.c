/*
`1. Employee Salary Classification`  
`Scenario:`  
A company wants to `classify its employees' salaries` 
based on their earnings. Given the salary of `N` employees, 
write a program to categorize them as:  
- `Low income`: Salary < 30,000  
- `Middle income`: Salary between 30,000 and 70,000  
- `High income`: Salary > 70,000  

`Input Example:`  
```
Enter the number of employees: 5
Enter salaries: 25000 45000 80000 32000 60000
```

`Output Example:`  
```
Low Income: 1
Middle Income: 3
High Income: 1
```
*/
#include <stdio.h>

// Function to classify salaries
void classify_salaries(int salaries[], int n) {
    int low_income = 0, middle_income = 0, high_income = 0;
    
    for (int i = 0; i < n; i++) {
        if (salaries[i] < 30000) {
            low_income++;
        } else if (salaries[i] <= 70000) {
            middle_income++;
        } else {
            high_income++;
        }
    }
    
    // Display classification counts
    printf("Low Income: %d\n", low_income);
    printf("Middle Income: %d\n", middle_income);
    printf("High Income: %d\n", high_income);
}

int main() {
    int num_employees;
    
    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);
    
    int salaries[num_employees];
    
    // Input salaries for each employee
    printf("Enter salaries: ");
    for (int i = 0; i < num_employees; i++) {
        scanf("%d", &salaries[i]);
    }
    
    // Classify and display results
    classify_salaries(salaries, num_employees);
    
    return 0;
}
