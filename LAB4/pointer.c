#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr= arr;
    for(int i=0;i<n;i++){
        printf("%d\t",*ptr) ;                                                                                               
        ptr++;
    }
}