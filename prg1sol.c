// `Scenario: Employee Attendance and Salary Calculation` 
#include<stdio.h>
#include<string.h>

void employeeInput(char* p_name, int* p_id, int* p_days_worked, float* p_salary){
    printf("Enter Employee name : \n");
    scanf("%s", p_name);

    printf("Enter employee ID : \n");
    scanf("%d", p_id);

    printf("Enter no. of days worked in month(max 30) : \n");
    scanf("%d", p_days_worked);

    printf("Enter monthly salary : \n");
    scanf("%f", p_salary);
}

float calculateBonus(int days_worked, float salary, char* category){
    float bonus = 0;
    
    if(days_worked > 25){
        bonus = salary * 0.05;
        salary = salary + bonus;
        strcpy(category, "excellent");
    } else if(days_worked < 10){
        salary = salary / 2;
    }

    if(days_worked < 15){
        strcpy(category, "Needs improvement");
    }

    return bonus;
}

void printEmployeeDetails(char* name, int id, int days_worked, float salary, float bonus, char* category){
    printf("\n Employee details after bonus\n");
    printf("Employee name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("NO. of days worked in month: %d\n", days_worked);
    printf("Employee Final Salary : %.2f\n", salary);
    printf("Performance: %s\n", category);
    
    if(bonus > 0){
        printf("Bonus Applied: %.2f \n", bonus);
    }
}

int main(){
    char name[30];
    int days_worked;
    float salary;
    int id;
    char category[20] = "good";
    float bonus = 0;

    // Taking user input
    employeeInput(name, &id, &days_worked, &salary);

    // Calculating bonus
    bonus = calculateBonus(days_worked, salary, category);
    
    // Displaying details
    printEmployeeDetails(name, id, days_worked, salary, bonus, category);

    return 0;
}

