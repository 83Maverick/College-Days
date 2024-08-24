#include <stdio.h>
#include <conio.h>
void main ()
{
    int i,a,b,c;
   int clrscr();
    printf("Armstrong number between 1 and 500 are \n");
    i=1;
    while(i<=500)
    {
        a=i%10; /*Extract last digit*/
        b=i%100;
        b=(b-a)/10; /*Extract second digit*/
        c=i/100; /*Extract first digit */
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        
        {
               printf("%d\n",i);
        }
        i++;
    }
    getch();
    }
