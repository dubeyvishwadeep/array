#include<stdio.h>
void display(int *);
int main()
{
int w;
int marks[]={23,34,56,78,98,76,45};
for(w=0;w<=6;w++)
display(&marks[w]);
return 0;
}
void display (int *m)
{
printf("%d\n",*m);
}
