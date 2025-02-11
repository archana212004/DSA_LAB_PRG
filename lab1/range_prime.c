#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the strat number: ");
    scanf("%d",&a);

    printf("Enter the end number: ");
    scanf("%d",&b);
    
    for(int i = a; i<= b; i++){
        int flag=1;
        for(int j=2;j<i;i++){
            if(i%j==0){
                flag=0;
            }

        }
        if(flag==1){
            printf("%d\t",i);
        }
    }
}