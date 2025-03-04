#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *lptr, *rptr;
} *first;

void DL_insert_first(int x){
    struct *newnode = malloc(sizeof(struct node));
    newnode -> data = x;
    if(first == NULL){
        newnode -> lptr = NULL;
        newnode -> rptr = NULL;
        first = newnode;
    }else{
        newnode -> lptr = NULL;
        newnode -> rptr = first;
        first -> lptr = newnode;
        first = newnode;
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
        printf("Enter your Choice  \n 1.Insert at first\n 2. Display \n 3. Exit \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int x;
                    printf("Enter the value to insert at the first: ");
                    scanf("%d", &x);
                    DL_insert_first(x);
                    break;
                }
            case 2:
                display();
                break;
            
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Enter a valid choice.\n");
                break;
        }
    }
}
