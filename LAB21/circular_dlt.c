#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *first, *last;

void cl_insertfirst(int x){
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = x;
    if(first == NULL){
        first = newnode;
        last = newnode;
        newnode -> link = first;
    }else{
        newnode -> link = first;
        first = newnode;
        last -> link = newnode;
    }
}

void cl_insertlast(int x){
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = x;
    if(first == NULL){
        first = newnode;
        last = newnode;
        newnode -> link = first;
    }else{
        newnode -> link = first;
        last -> link = newnode;
        last = newnode;
       
    } 
}


void delete_first(){
    if(first==NULL){
        printf("List is empty!");
    }
    else{
        struct node *temp = first;
        if(first->link = first){
            first = NULL;
            last = NULL;
        }
        else{
            last -> link = first -> link;
            first = first -> link;
        }
        free(temp);
    }
}

void delete_last(){
    struct node *prev = first;
    struct node *temp = first;
    while(temp != last){
        prev = temp;
        temp = temp -> link;
    }
    prev -> link = first;
    free(temp);
}

void cl_delete_specific(int x)
{
    if(first==NULL){
        printf("List is empty!");
    }
    else{
        if(first->data = x)
        {
            struct node *temp = first;
        
            if(first -> link == first)
            {
                    first = last = NULL;
            }else{
                    last -> link = first -> link;
                    first = first -> link;
            }
            free(temp);
        }
        else{
            struct node *temp = first -> link;
            struct node *prev = first;
            while((temp != first) && (temp -> data != x)){
                prev = temp;
                temp = temp -> link;
            }
            if(temp-> data == x){
                prev -> link = temp -> link;
                free(temp);
            }
        }
    }
}

void display() {
    if (first == NULL) {
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = first;
    while((temp->link) != first){
        printf("%d ", temp->data);
        temp = temp->link;
    }
      printf("%d ", temp->data);
    printf("\n");
}



int main() {
    int choice;
    while (1) {
        printf("Enter your Choice\n1.Insert at first\n2. Insert at last \n 3. Delete at first \n 4. Delete at last \n 5. Delete at specific position \n 6. Display \n 7. Exit \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int x;
                    printf("Enter the value to insert at the first: ");
                    scanf("%d", &x);
                    cl_insertfirst(x);
                    break;
                }
            case 2:
                {
                    int x;
                    printf("Enter the value to insert at the last: ");
                    scanf("%d", &x);
                    cl_insertlast(x);
                    break;
                }
            case 3 :
                delete_first();
                break;
            case 4 :
                delete_last();
                break;
            case 5:
                {
                    int x;
                    printf("Enter the value to delete that specific node: ");
                    scanf("%d", &x);
                    cl_delete_specific(x);
                    break;
                }
            case 6:
                display();
                break;
            
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Enter a valid choice.\n");
                break;
        }
    }
}
