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

    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    float avg = sum/n;
    printf("Sum of array : %d",sum);
    printf("avg of array : %f",avg);
}