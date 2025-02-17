/*
`3. Student Grading System`  
`Scenario:`  
A university assigns grades based on `students’ total marks` out of 100:  
- `90-100`: Grade A  
- `80-89`: Grade B  
- `70-79`: Grade C  
- `60-69`: Grade D  
- `Below 60`: Grade F  

Write a program to `process multiple students' scores` and display their grades.

`Input Example:`  
```
Enter number of students: 3
Enter marks: 95 72 50
```

`Output Example:`  
```
Student 1: Grade A
Student 2: Grade C
Student 3: Grade F
```
*/

#include <stdio.h>

// Function to determine grade based on marks
char get_grade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int num_students;
    
    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &num_students);
    
    int marks[num_students];
    
    // Input marks for each student
    printf("Enter marks: ");
    for (int i = 0; i < num_students; i++) {
        scanf("%d", &marks[i]);
    }
    
    // Process and display grades
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: Grade %c\n", i + 1, get_grade(marks[i]));
    }
    
    return 0;
}
