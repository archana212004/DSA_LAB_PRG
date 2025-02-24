#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *firstNode = NULL;

void insert_ord(int x) {    
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> data = x;
    if(firstNode == NULL){
        firstNode = newNode;
        firstNode -> link = NULL;
    }
    else{
        if(newNode -> data <= firstNode->data){     // > only for next prg
            newNode->link =  firstNode;
            firstNode = newNode;
        }
        else{
            struct node *temp;
            while(newNode->data >= (temp->link)->data){ // > only for next prg 
                temp = temp->link;
            }
        }
    }
  
}

void ord_delete(int x){
    struct node *temp, *prev;
    if(firstNode==NULL){
        printf("Empty list");
    }
    else if(firstNode->data == x){
        temp = firstNode;
        if(firstNode-> link == NULL){
            firstNode = NULL;
        }else{
            firstNode = firstNode-> link;
        }
        free(temp);
    }else{
        temp = firstNode;
        while(temp -> data != x){
            prev = temp;
            temp = temp -> link;
        }
        prev -> link = temp -> link;
        free(temp);
    }
}

void display() {
    if (firstNode == NULL) {
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = firstNode;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}


void main() {
    int choice;
    while (1) {
        printf("Enter your Choice\n1.Insert \n3.Display\n7.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int x;
                    printf("Enter the value to insert: ");
                    scanf("%d", &x);
                    insert_B(x);
                    break;
                }
            case 3:
                display(); 
                break;
            default:
                printf("Enter a valid choice.\n");
                break;
        }
    }
}
