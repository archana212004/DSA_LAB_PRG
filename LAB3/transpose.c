#include<stdio.h>
void main(){
    int row,col;
    printf("Enter row and cols: ");
    scanf("%d %d",&row,&col);

    int a[row][col];
    int b[row][col];
    int c[row][col];


    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            printf("Enter arr 1 ele %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}