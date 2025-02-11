#include<stdio.h>
int findpower(int base, int exp){
    int result = 1;
    for(int i=0;i<exp;i++){
        result *=base;
    }
    return result;
}
void main(){
    int base, exp;

    printf("Enter the base:");
    scanf("%d",&base);

     printf("Enter the exp:");
    scanf("%d",&exp);

    printf("Result of : %d\n",findpower(base,exp));
}