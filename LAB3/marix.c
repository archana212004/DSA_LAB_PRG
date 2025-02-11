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
            printf("Enter arr 2 ele %d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            c[i][j]=0;
            for(int k=0;k<col;k++){
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
            
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d \t",c[i][j]);
            
        }
        printf("\n");
    }
}