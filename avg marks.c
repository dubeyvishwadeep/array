#include<stdio.h>
int main()
{
int avg,sum=0;
int t;
int marks[30];/* array decleration*/

for(t=0;t<=29;t++)
{
printf("\n enter marks");
scanf("%d\n",&marks[t]);/* store data in array*/
}
for(t=0;t<=29;t++)
sum=sum+marks[t];/* read data from an array*/
avg=sum/30;
printf(" average marks=%d\n",avg);
return 0;
}
