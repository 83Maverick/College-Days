#include <stdio.h>

void main()
{
int tmp;
printf("Input days temperatre:");
scanf("%d",&tmp);
if(tmp<0)
printf("Freezing weather.\n");
else if(tmp<10)
printf("Very cold weather.\n");
else if(tmp<20)
printf("cold weather.\n");
else if(tmp<30)
printf("Normal in temp.\n");
else if(tmp<40)
printf("Its Hot.\n");
else
printf("Its very hot.\n");
}


