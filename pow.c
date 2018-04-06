#include"stdio.h"
int powr(int,int);
int main(void)
{
	printf("Demonstration of Recursion in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Implement the pow() function.\n");
	int rad,exp,power;
	scanf("%d%d",&rad,&exp);
	power=powr(rad,exp);
	printf("Power:%d",power);
}
int powr(int no,int p)
{
	if(p==0)
	return 1;
	return no*(powr(no,p-1));
}
