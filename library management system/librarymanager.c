#include<stdio.h>
struct member{
    char name[30];
    int library_id;
    int total_books;
    char book[10][50];
};
int main(){
    int n, i, x;
    printf("Enter number of members: ");
    scanf("%d", &n);
    struct member marr[n];
    for (i=0;i<n;i++){
        printf("-----MEMBER DETAILS-----\n");
        printf("Enter member name: ");
        scanf("%s", marr[i].name);
        printf("Enter member ID: ");
        scanf("%d", &marr[i].library_id);
        printf("Enter total number of books borrowed: ");
        scanf("%d", &marr[i].total_books);
        getchar();
        for(x=0; x<marr[i].total_books; x++){
            printf("Enter book name: ");
            fgets(marr[i].book[x], 50, stdin);
        }
    }
    printf("-----LIBRARY DATABASE-----\n");
    for(i=0; i<n; i++){
    printf("\nMember ID: %d", marr[i].library_id);
    printf("\nName: %s", marr[i].name);
    printf("\nTotal Books: %d", marr[i].total_books);
    printf("\nBooks:\n");
    for(x=0; x<marr[i].total_books; x++)
    {
        printf("- %s\n", marr[i].book[x]);
    }
    printf("\n");
}
return 0;
}