#include <stdio.h>
#include <stdlib.h>

#define n 100
int q[n];
int front = -1;
int rear = -1;

void c_enqueue(int x) {
    if (rear == n-1) {
        rear=0;
    } else {
        rear = rear + 1;
        if (rear==front)
        {
            printf("queue is overflow");
        }
        else
        {
            q [rear] = x;
            if(front == -1){
                front =0;
            }
        }
    }
}
void c_dequeue() {
    if (front == -1 || front > rear) {
        printf("Q underflow\n");
    } else {
        printf("Dequeued element: %d\n", q[front]);
        front = front + 1;
    }
} 