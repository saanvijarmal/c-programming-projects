#include<stdio.h>
struct doctor{
    char doctor_name[30];
    int experience;
    char department[50];
};
struct patient{
    char patient_name[30];
    int patient_id;
    int patient_age;
    struct doctor doc;
};
int main(){
    int i,n;
    printf("Enter the number of Patients: ");
    scanf("%d", &n);
    getchar();
    struct patient parr[n];
    for(i=0;i<n;i++){
        printf("Enter patient name: ");
        fgets(parr[i].patient_name, 30, stdin);
        printf("Enter patient ID: ");
        scanf("%d", &parr[i].patient_id);
        printf("Enter the patient age: ");
        scanf("%d", &parr[i].patient_age);
        getchar();
        printf("Enter doctor name: ");
        fgets(parr[i].doc.doctor_name, 30, stdin);
        printf("Enter department: ");
        fgets(parr[i].doc.department, 50, stdin);
        printf("Years of Experience: ");
        scanf("%d", &parr[i].doc.experience);
        getchar();
        printf("\n");
    }
    printf("-----HOSPITAL DATABASE-----\n");
    for(i=0;i<n;i++){
        printf("\nPatient Name: %s", parr[i].patient_name);
        printf("Patient ID: %d\n", parr[i].patient_id);
        printf("Age: %d\n", parr[i].patient_age);
        printf("\n");
        printf("Doctor Name: %s", parr[i].doc.doctor_name);
        printf("Department: %s", parr[i].doc.department);
        printf("Experience: %d\n", parr[i].doc.experience);
        printf("---------------------------\n");
    }
    return 0;
}