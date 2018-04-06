#include"stdio.h"
int add(int [],int *,int);
int main(void)
{
	printf("Demonstration of Recursion in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Add all the elements of an array using Recursion.\n");
	int arr[]={1,2,3,4,5};
	int sum=0;
	int l=5;
	sum=add(arr,&sum,l);
	printf("%d",sum);
}
int add(int *arr,int *sum,int l)
{
	if(l==0)
	return 0;
	else
	{
		return (*sum)+*arr+add((arr+1),sum,(l-1));
	}
	
}
