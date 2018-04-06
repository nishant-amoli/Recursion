#include"stdio.h"
int mul(int,int);
int main(void)
{
	printf("Demonstration of Recursion in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Multiply two given numbers without using '*' operator.\n");
	int no1,no2,result;
	scanf("%d%d",&no1,&no2);
	result=mul(no1,no2);
	printf("Result:%d",result);
}
int mul(int no1,int no2)
{
	if(no2==0)
	return 0;
	return no1+(mul(no1,no2-1));
}
