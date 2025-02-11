#include<stdio.h>

struct stud_detail{
    int enroll_no;
    char name[20];
    int sem;
    float CPI;
};
void main(){
    struct stud_detail s[5];
    for (int i = 0; i < 5; i++)
    {
    printf("Enter stud enroll_no: ");
    scanf("%d",&s[i].enroll_no);

    printf("Enter stud name: ");
    scanf("%s",&s[i].name);
    
    printf("Enter stud sem: ");
    scanf("%d",&s[i].sem);

    printf("Enter stud CPI: ");
    scanf("%f",&s[i].CPI);
    } 
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        printf("students enroll_no%d: %d\n",i+1,s[i].enroll_no);
        printf("students name%d: %s\n",i+1,&s[i].name);
        printf("students sem %d: %d\n",i+1,&s[i].sem);
        printf("students CPI %d: %2f\n",i+1,&s[i].CPI);
    }
}