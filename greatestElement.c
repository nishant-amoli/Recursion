#include"stdio.h"
void greatestElement(int *,int *,int);
int main(void)
{
	printf("Demonstration of Recursion in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Print the greatest element of an array. \n");
	int arr[10];
	int size,i;
	printf("Enter the size of array. \n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	int max=0;	
	greatestElement(arr,&max,size);
	printf("Greatest element: %d",max);
}
void greatestElement(int *p,int * max,int size)
{
	if(size<1)
	return;
	if(*p>*max)
	*max=*p;
	greatestElement((p+1),max,size-1);
}

