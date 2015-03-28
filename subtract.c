/*subtraction of pointer variable from another*/
#include<stdio.h>
int main()
{
int arr[]={10,78,67,98,78,23,45};
int *i,*j;
i=&arr[1];
j=&arr[5];
printf("%d\n%d\n",j-i,*j-*i);
return 0;
}
