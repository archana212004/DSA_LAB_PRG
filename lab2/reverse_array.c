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

    for(int i =n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}