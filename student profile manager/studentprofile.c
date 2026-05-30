#include<stdio.h>
struct student
{
    char name[30];
    int roll_number;
    float cgpa;
};
int main(){
    struct student s1;
    printf("------STUDENT DETAILS ENTRY------\n");
    printf("Enter the name of the student:");
    scanf("%s", s1.name);
    printf("Enter the roll number of the student:");
    scanf("%d", &s1.roll_number);
    printf("Enter the CGPA of the student:");
    scanf("%f", &s1.cgpa);
    printf("------STUDENT DETAILS DISPLAY------\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_number);
    printf("CGPA: %.2f\n", s1.cgpa);
    if (s1.cgpa>=9.0){
        printf("Excellent!\n");
    }else{
        printf("Good! Keep Improving!\n");
    }
    return 0;
}
