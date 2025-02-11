#include<stdio.h>
void main(){
    int n;
    int flag=1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i=2; i<n ; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if (flag)
    {
        printf("%d is prime",n);
    }
    
}