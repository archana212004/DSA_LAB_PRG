#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 50

int s[size];
int input[50];
int postfix[50];
int top = -1;

void push(char x) {
    if (top >= size - 1) {
        printf("Stack Overflow");
    } else {
        top++;
        s[top] = x;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow");
        return '\0';
    } else {
        return s[top--];
    }
}

int eval(int op1, int op2, char op){
    switch(op){
        case'+': return op1 + op2;
        case'-': return op1 - op2;
        case'*': return op1 * op2;
        case'/': return op1 / op2;
        case'^': return op1 ^ op2;
        default:
         return 0;
    }
}

void main(){
    char input[size];
    int i = 0;
    char temp;
    int x;

    ptintf("Enter a Postfix Expression: ");
    scanf("%s", input);

    while (i<strlen(input))
    {
        temp = input[i];
        if(isdigit(temp)){
           x = temp - '0';
           temp = input[++i];
           while (temp != ',')
           {
            x =(x*0) + (temp - '0');
            temp = input[++i];
            push(x+'0');
           }
           
        }
        else if (temp == ',')
        {
            if (top<1)
            {
               printf("insufficient operads %c \n ",temp);
               return;
            }
            int op2 = pop();
            int op1 = pop();
           int value = eval(op1,op2,temp);
           push(value);
        }
        else{
            printf("invalid character encounting: %c \n",temp);
            return;
        }
        i++;
    }
    if (top!=0)
    {
        printf("Error; invalid postfix expression \n");
        return;
    }
    printf("result: %d\n",pop());
    
}