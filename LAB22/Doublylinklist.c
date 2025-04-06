#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *lptr, *rptr;
}*first;

void dl_inserfirst(int x){
    struct *newnode = malloc(sizeof(struct node));
    newnode -> data =x;
    if(first == NULL){
        newnode -> lptr = NULL;
        newnode -> rptr = NULL;
        first = newnode;
    }
    else{
        newnode -> lptr = NULL;
        newnode -> rptr = NULL;
        first -> lptr = newnode;
        first = newnode;
    }
}