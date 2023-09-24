#include <stdio.h>

#define SIZE 15

int arr[SIZE];
int top = -1;

void push(int value) {
    if (top < SIZE - 1) {
        arr[top + 1] = value;
        top = top + 1;
    }
    else {
        printf("Stack Overflow!!\n");
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow!!");
    }
    else {
        printf("%d", arr[top]);
        top = top - 1;
    }
}

void display() {
    printf("--------Elements in Stack-------\n");
    for (int i = 0; i <= top; i++) {
        printf("%d", arr[i]);
    }
    printf("\n------------------------------\n");
}

void peek() {
    if (top == -1) {
        printf("\nNo elements in Stack\n");
    }
    else {
        printf("\nThe element at the top of the Stack is %d\n", arr[top]);
    }
}

int main() {
    int y;
    int sw = 0;

    while (sw != 5) {
        printf("Menu:\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\nEnter your choice: ");
        scanf("%d", &sw);
        printf("-------------------------\n");
        switch (sw) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &y);
            push(y);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            break;
        }
    }
    return 0;
}
