#include <stdio.h>
void main()
{
	int i;
	printf("\n\nFOR Loop\n");
	for(i=1; i<=10; i++) printf("%5d",i);
	printf("\n\nWHILE Loop\n");
	i=1;
	while(i<=10)
	{
		printf("%5d", i++);
	}
	printf("\n\nFOR Loop\n");
	for(i=10; i>=0; i--) printf("%5d",i);
	printf("\n\nWHILE Loop\n");
	i=10;
	while(i>=0)
	{
	printf("%5d", i--);
	}
}
