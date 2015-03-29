/* program to multiply any two 3*3 matrices*/
#include<stdio.h>
int main()
{
int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k,sum;


/* get values for first matrix*/
printf("\n enter values for first matrix:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d",&mat1[i][j]);
}
/* print the first matrix as entered*/
printf("\n the first matrix entered by you:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",mat1[i][j]);
printf("\n");
}
/* get values for second matrix*/
printf("\n enter values for second matrix:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d",&mat2[i][j]);
}
/* print the second matrix as entered*/
printf("\n the second matrix are entered by you:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",mat2[i][j]);
printf("\n");
}
/* calculate the product of two matrix*/
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
sum=0;
for(k=0;k<=2;k++)
sum=sum+mat1[i][k]*mat2[k][j];
mat3[i][j]=sum;
}
}
/* print the new matrix containing the product*/
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",mat3[i][j]);
printf("\n");
}
return 0;
}
