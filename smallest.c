/* program to find smallest element using pointer*/
#include<stdio.h>
int main()
{
int arr[25],i,n;
printf("\n enter 25 elements of array:");
for(i=0;i<=24;i++)
scanf("%d",&arr[i]);
n=*arr;
for(i=0;i<=24;i++)
{
if(*(arr+i)<n)
n=*(arr+i);
}
printf(" smallest number in array is%d\n",n);
return 0;
}
