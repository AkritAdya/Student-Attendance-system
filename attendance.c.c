/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char name[30];
    int attendance;
    int present = 0;
    int absent = 0;
    int i, n;

    printf("STUDENT ATTENDANCE SYSTEM\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter student name: ");
        scanf("%29s", name);

        printf("Enter attendance (1=Present, 0=Absent): ");
        scanf("%d", &attendance);

        if (attendance == 1) {
            printf("%s is Present\n", name);
            present++;
        } else if (attendance == 0) {
            printf("%s is Absent\n", name);
            absent++;
        } else {
            printf("Invalid attendance entered\n");
        }
    }

    printf("\n----- ATTENDANCE REPORT -----\n");
    printf("Total Present: %d\n", present);
    printf("Total Absent: %d\n", absent);

    return 0;
}