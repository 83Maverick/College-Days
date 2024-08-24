#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 3
int main()
{
	int mat[ROW][COL],i,j;
	printf("enter the value of matrix:");
	for(i=0;i<ROW;i++)
	for(j=0;j<COL;j++)
	scanf("%d",&mat[i][j]);
	printf("the matrix that you have entered is:");
	for(i=0;i<ROW;i++)
	for(j=0;j<COL;j++)
	printf("%d",mat[i][j]);
	getch();
}
