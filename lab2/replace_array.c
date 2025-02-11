#include<stdio.h>
void main(){
       int n,a,b;

    printf("Enter number of sizze: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter array of ele %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter number of a: ");
    scanf("%d",&a);

    printf("Enter number of b: ");
    scanf("%d",&b);

    arr[0] =a;
    arr[1] =b;

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        
    }

}