#include <stdio.h>
int main()
{int cp,sp,amt;
/*Input cost price and selling price of a product*/
printf("Enter cost price:");
scanf("%d",&cp);
printf("Enter selling price:");
scanf("%d",&sp);
if (sp>cp)
{/* Calculate Profit */
amt=sp-cp;
printf("Profit=%d",amt);
}
if(cp>sp)
{
	/*Calculate Loss */
	amt=sp-cp;
	printf("Loss=%d",amt);
}
return 0;
}


