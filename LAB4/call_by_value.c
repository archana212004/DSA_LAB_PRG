#include<stdio.h>
void swap(int x,int y){
    int temp; 
    temp =x;
    x=y;
    y=temp;
    printf("x: %d and y: %d function \n ",x,y);
}
void main(){
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);

    printf("Enter y :");
    scanf("%d",&y);

    swap(x,y);
    printf("x: %d and y: %d main \n ",x,y);
}