#include"stdio.h"
int table(int,int);
int main(void)
{
	printf("Demonstration of Recursion in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Print the table of a user inputted number.\n");
	int no;
	scanf("%d",&no);
	table(no,1);
}
int table(int no,int times)
{
	if(times>10)
	return 1;
	printf("%d\t*\t%d\t=\t%d\n",no,times,no*times);
	table(no,times+1);
}
