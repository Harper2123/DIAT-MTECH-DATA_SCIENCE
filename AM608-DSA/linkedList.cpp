#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node{
  int value;
  struct Node *next;
}Node;

Node *head = NULL;

void display(){
  Node *temp;
  if(head == NULL) printf("List is empty\n");
  else{
    temp = head;
    while(temp != NULL){
      printf("%d ",temp->value );
      temp = temp->next;
    }
    printf("\n" );
  }
}

void insertAtFront(int x){
  Node *temp;
  temp = (Node*)malloc(sizeof(Node));
  temp->value = x;
  temp->next = head;
  head = temp;
}

void deleteList(){
  Node *curr = head;
  Node *temp;
  while(curr != NULL){
    temp = curr->next;
    free(curr);
    curr = temp;
  }
  head = NULL;
}

void insertAtEnd(int x){
  Node *temp, *h;
  temp = (Node*)malloc(sizeof(Node));
  temp->next = 0;
  temp->value = x;
  h = head;
  while(h->next != NULL)
    h = h->next;
  h->next = temp;
}

void insertAtPosition(int x, int pos){
  Node *temp, *n;
  int i=1;
  n = (Node*)malloc(sizeof(Node));
  temp = head;
  n->value = x;
  n->next = 0;
  while(i < pos-1){
    temp = temp->next;
    i++;
  }

  n->next = temp->next;
  temp->next = n;
}

int countNodes(){
  int count = 0;
  Node *temp = head;
  while(temp != NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

void deleteFirst(){
  Node *temp;
  if(head == NULL) printf("List is empty\n" );
  else{
    temp = head;
    head = head->next;
    printf("Deleted-> %d\n",temp->value );
    free(temp);
  }
}

void deleteEnd(){
  Node *temp, *prev;
  if(head == NULL) printf("List is empty\n" );
  else{
    temp = head;
    while(temp->next != 0){
      prev = temp;
      temp = temp->next;
    }
    printf("Deleted-> %d\n",temp->value );
    free(temp);
    prev->next = 0;
  }
}

void deleteAtPosition(int pos){
  Node *temp, *position;
  int i=1;
  if(head == NULL) printf("List is empty\n" );
  else{
    position = (Node*)malloc(sizeof(Node));
    temp = head;

    while(i < pos-1){
      temp = temp->next;
      i++;
    }

    position = temp->next;
    temp->next = position->next;
    printf("Deleted-> %d\n",position->value );
    free(position);
  }
}

void sort(){
  Node *curr = head;
  Node *i = NULL;
  int temp;

  if(head==NULL) return;
  else{
    while(curr != NULL){
      i = curr->next;
      while(i != NULL){
        if(curr->value > i->value){
          temp = curr->value;
          curr->value = i->value;
          i->value = temp;
        }
        i = i->next;
      }
      curr = curr->next;
    }
  }
}

void reverse(){
  Node *t1, *t2, *temp;
  t1 = t2 = NULL;

  if(head == NULL) printf("List is empty\n" );
  else{
    while(head != NULL){
      t2 = head->next;
      head->next = t1;
      t1 = head;
      head = t2;
    }
    head = t1;
  }
}

int main(){
  int ch, x, pos;
  ch = 1;
  while(ch!=10){
    printf("-------------------\nMenu:\n" );
    printf("1. Insert at Front\n" );
    printf("2. Insert at End\n" );
    printf("3. Insert at Position\n" );
    printf("4. Delete at Front\n" );
    printf("5. Delete at End\n" );
    printf("6. Delete at Position\n" );
    printf("7. Display Linked List\n" );
    printf("8. Sort Linked List\n" );
    printf("9. Count Nodes\n");
    printf("10. Exit\n");
    printf("Enter choice: " );
    scanf("%d", &ch);

    switch(ch){
      case 1:
        printf("Enter value to insert: " );
        scanf("%d",&x );
        insertAtFront(x);
      break;

      case 2:
        printf("Enter value to insert: " );
        scanf("%d",&x );
        insertAtEnd(x);
      break;

      case 3:
        printf("Enter value to insert: " );
        scanf("%d",&x );
        printf("Enter position: " );
        scanf("%d",&pos);
        insertAtPosition(x, pos);
      break;

      case 4:
        deleteFirst();
      break;

      case 5:
        deleteEnd();
      break;

      case 6:
        printf("Enter position: ");
        scanf("%d",&pos);
        deleteAtPosition(pos);
      break;

      case 7:
        display();
      break;

      case 8:
        sort();
      break;

      case 9:
        printf("Count: %d\n", countNodes());
      break;

      case 10:
        exit(1);
      break;

      default:
      break;
    }
  }
  return 0;
}
