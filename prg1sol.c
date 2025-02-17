// `Scenario: Employee Attendance and Salary Calculation` 
#include<stdio.h>
#include<string.h>

int main(){
    char name[30];
    int days_worked;
    float salary;
    int id;
    char category[20] = "good";
    float bonus = 0;

    //taking user input
    printf("Enter Employee name : \n");//name
    scanf("%s", name);

    printf("Enter employee ID : \n");//ID
    scanf("%d", &id);

    printf("Enter no. of days worked in month(max 30) : \n");
    scanf("%d", &days_worked);

    printf("Enter monthly salary : \n");
    scanf("%f", &salary);
    
    
    //calculating bonus if applicable
    if(days_worked > 25){
        float bonus = salary*0.05;
        salary = salary+bonus;
        strcpy(category, "exellent");

    } else if(days_worked < 10){
        salary = salary/2;
    }
    
    if(days_worked<15){
        strcpy(category,"Need improvement");
    }

    //displaying details
    printf("\n Employee details after bonus\n");
    printf("Employee name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("NO. of days worked in month: %d\n", days_worked);
    printf("Employee Final Salary : %0.2f\n", salary);
    
    printf("Performance : %s", category);
    if(bonus>0){
        printf("Bonus Applied : %d \n",bonus);
    }

    return 0;

}
