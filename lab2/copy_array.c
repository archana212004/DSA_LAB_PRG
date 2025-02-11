#include<stdio.h>
void main(){
       int n,a,b;

    printf("Enter number of sizze: ");
    scanf("%d",&n);

    int arr[n];
    int arr2[n];

    for(int i = 0 ; i<n;i++){
        printf("Enter array ele : %d",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n;i++){
        arr[i] = arr2[i];
    }
    for(int i =0;i<n;i++){
        printf("%d",arr2[i]);
    }
}