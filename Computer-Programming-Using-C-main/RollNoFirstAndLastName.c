
#include <stdio.h>
struct student
{ 
int roll_no;
char f_name[10];
char l_name[10];
}s[5];
/*Reading Values*/
main()
{
	int i;
for(i=0;i<5;i++)
{
	printf("\n Enter Roll Number:");
	scanf("%d",&s[i].roll_no);
	printf("\n Enter First Name:");
	scanf("%s",&s[i].f_name);
	printf("\n Enter Last Name:");
	scanf("%s",&s[i].l_name);
}


/*Sorting values*/
for(i=0;i<5;i++)

{ printf("%d",s[i].roll_no);
  printf("%s\n",s[i].f_name);
  printf("%s\n",s[i].l_name);

}

}
