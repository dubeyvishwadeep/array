/* pick up largest number from matrix*/
#include<stdio.h>
int main()
{
int a[5][5]={
{12,2,7,8,4},
{23,45,54,36,76},
{11,22,33,44,55},
{13,26,39,52,65},
{14,28,84,98,13}
};
int i,j,big;
 big=a[0][0];
  printf("\n the matrix is:\n");
  for(i=0;i<=4;i++)
  {
  for(j=0;j<=4;j++)
  {
  printf("%d\t",a[i][j]);
  if(a[i][j]>big)
  big=a[i][j];
  }
  printf("\n");
  }
  printf("\n largest number in the matrix is %d\n",big);
  return 0;
  }
