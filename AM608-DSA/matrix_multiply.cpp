#include <stdio.h>
#define MAX 15
int main()
{
  int r1,c1,r2,c2,i,j,k;
  int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];

  printf("Enter rows and columns for first matrix(rows,columns):- ");
  scanf("%d,%d",&r1,&c1);

  printf("\nEnter rows and columns for second matrix(rows,columns):- ");
  scanf("%d,%d",&r2,&c2);

  while(c1 != r2)
  {
    printf("Columns of first matrix should be equal to rows of second matrix\n");
    printf("Enter rows and columns for first matrix(rows,columns):- ");
    scanf("%d,%d",&r1,&c1);

    printf("\nEnter rows and columns for second matrix(rows,columns):- ");
    scanf("%d,%d",&r2,&c2);
  }

  printf("\nEnter matrix 1 elements:- ");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }

  printf("\nEnter matrix 2 elements:- ");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }

  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      c[i][j] = 0;
      for(k=0;k<c1;k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  printf("\nThe resultant matrix is:- \n");

  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
return 0;
}
