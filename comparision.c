
/*comparison of two pinter variable*/
#include<stdio.h>
int main()
{
int arr[]={12,23,45,67,89,98,66};
int *j,*k;
j=&arr[3];
k=(arr+3);
if(j==k)
printf("\n the two pointer point to the same location\n");
else
printf("\n the pointer do not point to the same location\n");
return 0;
}
