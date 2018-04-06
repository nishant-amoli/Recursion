#include"stdio.h"
int even(int,int);
int main(void)
{
	printf("Demonstration of Recursion in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Print all the even numbers between two numbers entered by a user. \n");
	int no1,no2;
	scanf("%d%d",&no1,&no2);
	if(no1 % 2 == 0)
	even(no1,no2);
	else
	even(no1+1,no2);
}
int even(int no1,int no2)
{
	if(no1>no2)
	return;
	printf("%d\t",no1);
	even(no1+2,no2);
}
