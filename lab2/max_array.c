#include<stdio.h>
void main(){
       int n;

    printf("Enter number of sizze: ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("enter array of ele %d: ",i+1);
        scanf("%d",&a[i]);
    }

    int max=a[0];
    for(int i =0 ;i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    printf("Max in array : %d",max);
}