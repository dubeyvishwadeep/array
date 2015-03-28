/* demonstration of call by value*/
#include<stdio.h>
void display (int);
int main()
{
int z;
int marks[]={34,45,34,67,89,134,345};
for(z=0;z<=6;z++)
display(marks[z]);
return 0;
}
void display(int n)
{
printf("%d\n",n);
}
