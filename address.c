#include<stdio.h>
int main()
{
int num[]={34,67,87,56,76};
int p;
for(p=0;p<=4;p++)
{
printf("elements number%d\n",p);
printf("address=%u\n",&num[p]);
}
return 0;
}
