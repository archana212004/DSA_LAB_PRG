 #include<stdio.h>

struct emp_detail{
    int id;
    char name[20];
    char designation[50];
    float salary;
};
void main(){
    struct emp_detail e[2];
    for (int i = 0; i < 2; i++)
    {
    printf("\nEnter emp id: ");
    scanf("%d",&e[i].id);

    printf("Enter emp name: ");
    scanf("%s",&e[i].name);
    
    printf("Enter emp designation: ");
    scanf("%s",&e[i].designation);

    printf("Enter emp salary: ");
    scanf("%f",&e[i].salary);
    }
   struct emp_detail *ptr=e;
   for (int i = 0; i < 2; i++)
   {
    printf("*************************");
    printf("emp id %d: %d\n",i+1,ptr->id);
    printf("emp name %d: %s\n",i+1,ptr->name);
    printf("emp designation %d: %s\n",i+1,ptr->designation);
    printf("emp salary %d: %2f\n",i+1,ptr->salary);
    printf("*************************");
   }
}