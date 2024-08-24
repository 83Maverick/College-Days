#include <stdio.h>

int main()
{
int num1,num2,temp,gcd,i,j;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
i=num1;
j=num2;
while(num2 !=0)
{
    temp=num2;
    num2=num1%num2;
    num1=temp;
}
gcd=num1;
printf("Greatest Common Divisor(GCD) of %D and %d is %d.\n",i,j,gcd);
return 0;
}


