//C Program to Compute Student Grade based on total marks and display result (pass/fail)
 #include <stdio.h>

int main() {
    int totalMarks;
    int passingMarks = 40; 
    
    printf("Enter the student's total marks: ");
    scanf("%d", &totalMarks);

    
    if (totalMarks >= passingMarks) {
        printf("Result: Pass\n");
        if (totalMarks >= 90) {
            printf("Grade: A\n");
        } else if (totalMarks >= 80) {
            printf("Grade: B\n");
        } else if (totalMarks >= 70) {
            printf("Grade: C\n");
        } else if (totalMarks >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: E\n");
        }
    } else {
        printf("Result: Fail\n");
        printf("Grade: F\n");
    }

    return 0;
}