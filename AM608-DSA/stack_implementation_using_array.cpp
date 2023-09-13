#include <stdio.h>

#define SIZE 15

char arr[SIZE];
int top = -1;

void push(char value){
  if(top < SIZE-1){
    arr[top+1] = value;
    top = top + 1;
  }
  else{
    printf("Stack Overflow!!\n");
  }
}

void pop(){
  if(top == -1){
    printf("Stack Underflow!!");
  }
  else{
    printf("%c",arr[top]);
    top = top - 1;
  }
}

void display(){
  printf("--------Elements in Stack-------\n");
  for(int i=0; i<=top; i++){
    printf("%c",arr[i]);
  }
  printf("\n------------------------------\n");
}



int main(){

  push('D');
  push('a');
  push('t');
  push('a');
  push(' ');
  push('S');
  push('c');
  push('i');
  push('e');
  push('n');
  push('c');
  push('e');

  display();

  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();

  return 0;
}
