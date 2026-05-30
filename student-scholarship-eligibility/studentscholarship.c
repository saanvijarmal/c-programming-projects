#include<stdio.h>
struct Student
{
    char name[30];
    int roll_no;
    float cgpa, attendance, academic_score;
};
int main(){
    struct Student s1;
    printf("Welcome! Please enter the following details.\n");
    printf("Name of Student:");
    scanf("%s", s1.name);
    printf("\nRoll Number:");
    scanf("%d", &s1.roll_no);
    printf("\nCGPA Acquired:");
    scanf("%f", &s1.cgpa);
    printf("\nAttendance Percentage:");
    scanf("%f", &s1.attendance);
    printf("\n-----SCHOLARSHIP REPORT-----\n");
    s1.academic_score = (s1.cgpa*10) + s1.attendance;
    printf("%.2f", s1.academic_score);
    if (s1.cgpa>=9.0 && s1.attendance>=90){
        printf("\nCongratulations! You are eligible for the GOLD SCHOLARSHIP!");
    } else if (s1.cgpa>=8.0 && s1.attendance>=80){
        printf("\nCongratulations! You are eligible for the SILVER SCHOLARSHIP!");
    } else if (s1.cgpa>=7.0 && s1.attendance>=75){
        printf("\nCongratulations! You are eligible for the BRONZE SCHOLARSHIP!");
    }else{
        printf("\nSorry you are not eligible for any scholarship. Try again next time!");
    }
    return 0;
}
