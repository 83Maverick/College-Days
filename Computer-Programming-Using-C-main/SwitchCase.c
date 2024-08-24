#include <stdio.h>
void main()
{
	char ch ='e';
	do
	{ printf("\n Enter 'e' to exit");
	printf("\b Enter the choice:");
	scanf("%c",&ch);
	switch(ch)
	{ case 'a':printf(" Case a");break;
	  case 'b':printf(" Case b");break;
	  case 'c':printf(" Case c");break;
	  case 'e':printf(" Exit ");break;
	 default: printf(" Default Case");break;
}	
	}
	while (ch !='e');
}
