#include<stdio.h>
int main()
{
	int a[3]={1,2,3},i=2,j=0,temp,c=0;
	while(j<i)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i--;
		j++;
	}
	while(c<=2)
	{
		printf("%d",a[c]);
		c++;
	}
	return 0;
}
