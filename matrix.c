/* write a program to find matrix is symatric*/
#include<stdio.h>
int main()
{
int arr[3][3],i,j,count=0;
printf("\n enter the element of the matrix:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d",&arr[i][j]);
printf("\n");
}
printf("\n the matrix formed is....\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d",arr[i][j]);
printf("\n");
}
/* check for symmetry*/
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(arr[i][j]==arr[j][i])
count++;
}
}
if(count==6)
printf("\n matrix is symatric\n");
else
printf("\n\n the matrix is not symatric\n");
return 0;
}
