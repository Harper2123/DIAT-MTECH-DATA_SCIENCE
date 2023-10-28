#include <stdio.h>
#include <time.h>

int lin_search(int a[],int x){
  int i;
  for(i = 0;i < 15;i++){
    if(a[i] == x){
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[15] = {10,23,9,71,-3,89,46,34,59,17,11,8,72,61,57};
  int key = 61;
  int idx;

  clock_t start, end;
  double cpu_time_used;

  start = clock();
  idx = lin_search(arr,key);
  end = clock();

  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

  if(idx == -1){
    printf("The element %d is not in the array",key);
  }
  else{
    printf("The element %d is at the index %d",key,idx);
  }
  printf("\nThe execution time is %lf seconds",cpu_time_used);

  return 0;
}
