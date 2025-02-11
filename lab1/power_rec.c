#include<stdio.h>
int power_r(int a, int b){
    if(b==0)
        return a;
    return a * power_r(a,b-1);
}
void main(){
    int a, b;

    printf("Enter the base no: ");
    scanf("%d",&a);

    printf("Enter the exp no: ");
    scanf("%d",&b);

    printf("Result using recursion: %d\n",power_r(a,b));
}