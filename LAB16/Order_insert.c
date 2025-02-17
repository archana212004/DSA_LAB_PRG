#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *firstNode = NULL;

void insert_ord(int x) {
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = x;
    newNode->link = NULL;

    // Insert at beginning if list is empty or x is smaller than the first node
    if (firstNode == NULL || x <= firstNode->data) {
        newNode->link = firstNode;
        firstNode = newNode;
    } else {
        struct node *temp = firstNode;
        // Traverse the list to find the correct position
        while (temp->link != NULL && temp->link->data < x) {
            temp = temp->link;
        }
        // Insert the new node
        newNode->link = temp->link;
        temp->link = newNode;
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

int main() {
    int choice;
    while (1) {
        printf("Enter your Choice\n1.Insert \n3.Display\n7.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int x;
                printf("Enter the value to insert: ");
                scanf("%d", &x);
                insert_ord(x);
                break;
            }
            case 3:
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
