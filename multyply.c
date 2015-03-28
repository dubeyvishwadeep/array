/*pass entire array and multiply each element by 3 */
#include<stdio.h>
int main()
{
int i;
static int array[]={1,2,3,4,5,6,7,8,9,10};
printf("\n original array is:");
for(i=0;i<10;i++)
printf("%d\n",array[i]);

modify(array,10);

 printf("\n modified array is:\n");
 for(i=0;i<10;i++)
 printf("%d\n",array[i]);
 return 0;
 }
 /* function to modify array */
 modify(int *arr,int n)
 {
 int i;
 for(i=0;i<n;i++)
 {
 *arr=*arr*3;
 arr++;
 }
 }
