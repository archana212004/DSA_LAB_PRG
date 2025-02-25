
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} ;
struct node *first, *last;
void cl_insertfirst(int x)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode ->data=x;
    if (first ==NULL)
    {
        first= newNode;
        last = newNode;
        newNode->link=first;
    }
    else{
        newNode ->link=first;
        first=newNode;
        last->link=first;
    }
    
}
void display() {
    if (first == NULL) {
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = first;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("Enter your Choice\n1.Insert at end\n2. Delete from first \n 3. Display \n 4. Exit \n");
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
           
            case 3:
                display();
                break;
          
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Enter a valid choice.\n");
                break;
        }
    }
}
