#include <stdio.h>

void swap_max(int a[],int l,int n)
{
	int i,max=a[n],pos=n;
	for(i=n+1;i<l;i++)
		if(a[i]>max)
		{
			max=a[i];
			pos=i;
		}
	a[pos]=a[n];
	a[n]=max;
}

void ssort(int a[],int l)
{
	for(int i=0;i<l;i++)
		swap_max(a[],l,i);
}
