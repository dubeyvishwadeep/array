#include<stdio.h>
int main()
{
int r,c,a[100][100],b[100][100],sum[100][100],i,j;
printf("\n enter number of rows(between 1 and 100):");
scanf("%d\n",&r);
printf("\n enter number of colum(between 1 and 100):");
scanf("%d\n",&c);
printf("\n enter element of 1 st matrix :\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("enter element %d%d:",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf(" enter element in second matrix:\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("\n enter elements is %d%d:",i+1,j+1);
scanf("%d",&b[i][j]);
}
/* adding two matrices*/
for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    sum[i][j]=a[i][j]+b[i][j];


/* displaying the resltant sum matrices*/
for(i=0;i<r;++i)
    for(j=0;j<c;++j)
{

    printf("%d%d",sum[i][j]);
    if(j==c-1)
        printf("\n\n");
}
    return 0;
}

