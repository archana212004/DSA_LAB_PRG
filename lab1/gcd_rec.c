#include<stdio.h>
int  findgcd(int a, int b){
    int gcd = 1;
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }  
    else if(a>b){
        return findgcd(a,a-b);
    }
    else{
        return findgcd(a,b-a);
    }
}
void main(){
    int a,b;

    printf("Enter the number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    
    printf("GCD is %d",findgcd(a,b));
}