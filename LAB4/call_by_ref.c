#include<stdio.h>
void swap_ref(int *X,int *Y){
    int temp;
    temp =*X;
    *X=*Y;
    *Y=temp;
   printf("a: %d and b: %d function \n ",*X,*Y);
}
void main(){
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);

    printf("Enter y :");
    scanf("%d",&y);

   
    swap_ref(&x,&y);
    printf("x: %d and y: %d main \n ",x,y);
}