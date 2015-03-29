/* program to add 6*6 matrices*/
#include<stdio.h>
int main()
{
int mat1[6][6],mat2[6][6],mat3[6][6],i,j;
printf("\n enter values for first matrix:\n");
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
scanf("%d",&mat1[i][j]);/* enter first matrix value*/

}
printf("\n enter values of second matrix:\n");
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
scanf("%d",&mat2[i][j]);/* enter second matrix*/
}

/* print both matrices are entered*/
printf("\n matrices entered by you are:\nmatrix 1:\n");
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
printf("%d\t",mat1[i][j]);/* print each row*/
printf("\n");/* new row on new line*/
}
printf("\n matrix 2:\n");
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
printf("%d\t",mat2[i][j]);/* print each row*/
printf("\n");/* new row on new line*/
}
/* calculate the sum of two matrices*/
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
mat3[i][j]=mat1[i][j]+mat2[i][j];
}
/* print the matrix with the sum*/

printf("\n the new matrices after  addition of the above two matrices is:\n");
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
printf("%d\t",mat3[i][j]);
printf("\n");
}
return 0;
}

