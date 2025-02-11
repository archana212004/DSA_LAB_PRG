#include<stdio.h>
void main(){
    int a[5];
    int b[5];

    int k=0;
    for(int i = 0; i<5;i++){
        printf("Enter array ele %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<5;i++){
        int flag=0;
        for(int j=i+1;j<5;j++){
            if(a[i] == a[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            b[k] =a[i];
            k++;
        }
       
    }
    for(int i=0; i<5;i++){
        printf("%d",b[i]);
    }
}