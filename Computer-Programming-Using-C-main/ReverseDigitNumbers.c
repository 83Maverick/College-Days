/*Program to reverse 5-digit number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a;
	long int rev=0; /*initialised to zero otherwise it will contain garbage value*/
	int clrscr();
	printf("Enter a five digit Number:");
	scanf("%d",&num);
	
	
	a=num%10;/*Last digit*/
	num=num/10;
	rev=rev*10+a;
	
	a=num%10;/*4th digit*/
	num=num/10;
	rev=rev*10+a;
	
	a=num%10;/*3rd digit*/
	num=num/10;
	rev=rev*10+a;
	
	a=num%10;/*2nd digit*/
	num=num/10;
	rev=rev*10+a;
	
	a=num%10;/*1st digit*/
	rev=rev*10+a;
	
	printf("\n The reversed number is %Id",rev);
	getche();
}
