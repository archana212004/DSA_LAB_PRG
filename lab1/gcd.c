#include<stdio.h>
void main(){
    int a,b;
    int gcd=1;

    printf("Enter the number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    for(int i = 2; i<a; i++){
        while((a%i==0)&& (b%i==0)){
            gcd *=i;
            a=a/i;
            b=b/i;
        }
    }

    printf("GCD is %d",a,b,gcd);
}