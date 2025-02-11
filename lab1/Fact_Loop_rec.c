#include<stdio.h>
void main(){
    int fact = 1;
    int n;
    printf("Enter the number: ");
    scanf("%d" , &n);

    for(int i=n ; i>=1 ; i--){
        fact = fact * i;
    }

    printf("Factorial using loop : %d",fact);
}