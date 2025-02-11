#include<stdio.h>
#include <stdlib.h>
int s[10];
int top=-1;
int length = sizeof(s)/ sizeof(s[0]);
void push(int x){
    if (top >= 10)
    {
        printf("Overflow");
        return;
    }
    else{
        top= top+1;
        s[top] =x;
    }
}
int pop(){
    int popped;
    if(top == -1){
        printf("Stack underflow");

    }
    else{
        top--;
        popped = s[top+1];
    }
    return popped;
}
int peep(int i){
    if((top-i+1)<= 0){
        printf("\nStack underflow");
    }
    else{
        return(s[top-i+1]);
    }
}
int change(int i , int j){
    if(top-i+1 <=0){
        printf("Stack underflow");
    }
    else{
        s[top-i+1] = j;
    }
}
void Display(){
    printf("\nStack is: ");
    for (int i = length; i >= 0; i--)
    {
        printf("element : %d\n",s[i]);
    }
    
}
void main(){
    int c;
    while(c!= 5){
        printf("1.Push\n 2.pop\n 3.peep\n 4.change\n 5.exit");
        printf("\nEnter choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            int x;
            printf("Enter element of push: ");
            scanf("%d",&x);
            push(x);
            Display();
            break;
        case 2:
            int popped = pop();
            printf("Poped element: %d",popped);
            Display();
            break;
        case 3:
            int i;
            printf("Enter ele of peep: ");
            scanf("%d",&i);
            int peeped = peep(i);
            printf("Enter ele of index: %d",peeped);
            Display();
            break;
        case 4:
            int j,l;
            printf("enter ele of index: ");
            scanf("%d",&l);
            printf("Enter ele of change: ");
            scanf("%d",&j);
            change(l,j);
            Display();
            break;
        case 5:
            exit(0);
            Display();
        default:
            printf("Enter the valid choice!! ");
            break;
        }
    }
}