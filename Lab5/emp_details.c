#include<stdio.h>

struct emp_detail{
    int id;
    char name[20];
    char designation[50];
    float salary;
};
void main(){
    struct emp_detail e;
    printf("Enter emp id: ");
    scanf("%d",&e.id);

    printf("Enter emp name: ");
    scanf("%s",&e.name);
    
    printf("Enter emp designation: ");
    scanf("%s",&e.designation);

    printf("Enter emp salary: ");
    scanf("%f",&e.salary);

    printf("emp id: %d\n",e.id);
    printf("emp name : %s\n",&e.name);
    printf("emp designation: %s\n",&e.designation);
    printf("emp salary: %f\n",&e.salary);
}