#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter ele %d: ");
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    int max=*ptr;

    for(int i=0;i<n;i++){
        if(*ptr>max){
          max =*ptr;
        }
        *ptr++;
    }
    printf("Max : %d\n",max);
}