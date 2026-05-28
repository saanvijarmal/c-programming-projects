#include<stdio.h>
int main(){
    float marks_1, marks_2, marks_3, marks_4, marks_5, total_marks, percentage;
    char name [50], professor_name[50];
    printf("-----MARK ENTRY-----\n");
    printf("Enter Name of Student: ");
    scanf("%s", name);
    printf("Enter Name of Professor:");
    scanf("%s", professor_name);
    printf("Marks Obtained in Subject 1: ");
    scanf("%f", &marks_1);
    printf("Marks Obtained in Subject 2: ");
    scanf("%f", &marks_2);
    printf("Marks Obtained in Subject 3: ");
    scanf("%f", &marks_3);
    printf("Marks Obtained in Subject 4: ");
    scanf("%f", &marks_4);
    printf("Marks Obtained in Subject 5: ");
    scanf("%f", &marks_5);
    total_marks = marks_1 + marks_2 + marks_3 + marks_4 + marks_5;
    percentage = (total_marks /500) * 100;
    printf("-----MARK DETAILS-----\n");
    printf("Total Marks; %.2f\n", total_marks);
    printf("Percentage: %.2f\n", percentage);
    if (percentage >= 90){
        printf("O GRADE\n");
    }else if (percentage >= 80 && percentage < 90){
            printf("A+ GRADE\n");
        }
        else if (percentage >= 70 && percentage < 80){
            printf("A GRADE\n");
        } 
        else if (percentage >= 60 && percentage < 70){
            printf("B GRADE\n");
        }
        else if (percentage >= 50 && percentage < 60){
            printf("C GRADE\n");
        }
        else if (percentage >= 40 && percentage < 50){
            printf("D GRADE\n");
        }
        else {
            printf("FAIL\n");
        }
    if (percentage >=40){
        printf("CONGRATULATIONS %s! YOU HAVE PASSED THE EXAM.\n", name);
    }
    else {
        printf("SORRY %s! YOU HAVE FAILED THE EXAM.\n", name);
    }
    printf("-----END OF REPORT-----\n");
    printf("Professor: %s\n", professor_name);
    return 0;
}