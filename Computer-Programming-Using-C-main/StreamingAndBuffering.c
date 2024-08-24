
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Press any key to continue");
	getch();/*will not echo the character*/
	printf("\n Type any Character");
	ch=getche();/*will echo character typed*/
	printf("\n Type any Character");
    getchar();/*will echo character, must be followed by enter key*/
	printf("\n Continue Y/N");
	getchar();/*will echo character, must be followed by enter key*/
	return 0;	
}
