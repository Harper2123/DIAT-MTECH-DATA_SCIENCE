#include <stdio.h>

#define SIZE 15

int arr[SIZE];
int front = -1;
int rear = -1;

int isFull(){
  if(rear == SIZE-1)
    return 1;
  return 0;
}

int isEmpty(){
  if(front == -1)
    return 1;
  return 0;
}

void enqueue(int x){
  if(isFull())
    printf("\nQueue Overflow!\n");
  else{
    if(front == -1){
      front = 0;
      rear = 0;
    }
    arr[rear] = x;
    printf("Inserted Element:- %d\n",arr[rear]);
    rear += 1;
  }
}

void dequeue(){
  if(isEmpty()){
    printf("\nQueue Underflow\n");
  }
  else{
    int x;
    if(front == rear){
      x = arr[front];
      printf("\nDeleted Element:- %d\n",arr[front]);
      front = -1;
      rear = -1;
    }
    else{
      x = arr[front];
      printf("\nDeleted Element:- %d\n",arr[front]);
      front += 1;
    }
  }
}

void display(){
  int i;

  if(isEmpty()){
    printf("\nNo elements to display!!\n");
  }
  else{
    for(i = front;i < rear; i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
  }
}

int main(){
  int y;
  int sw = 0;
  while(sw!=4){
    printf("Menu:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
    scanf("%d",&sw );
    printf("-------------------------\n");
    switch(sw){
      case 1:
        printf("Enter value: ");
        scanf("%d",&y);
        enqueue(y);
      break;
      case 2:
        dequeue();
      break;
      case 3:
        display();
      break;
      default:
      break;
    }
  }
  return 0;
}
