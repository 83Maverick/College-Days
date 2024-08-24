#include <stdio.h>

int main()
{
int l,b,area,perimeter;
printf("\n Enter the length of rectangle:");
scanf("%d",&l);
printf("\n Enter the breadth of rectangle:");
scanf("%d",&b);
area=l*b;
perimeter=2*(l+b);
printf("\nArea of rectangle;%d",area);
printf("\nPerimeter of rectangle;%d",perimeter);
return(0);

}
