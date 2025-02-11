#include<stdio.h>
int findgcd(int a, int b){
    int gcd = 1;
    for(int i = 2; i<a; i++){
        while((a%i==0)&& (b%i==0)){
            gcd *=i;
            a=a/i;
            b=b/i;
        }
    }
    return gcd;
}
void main(){
    int a,b;

    printf("Enter the number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    
    printf("GCD is %d",findgcd(a,b));
}