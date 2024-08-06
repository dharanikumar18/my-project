#include<stdio.h>
int main()
{
	int num,n1=0,n2=1,n3;
	printf("enter the value of num:");
	scanf("%d",&num);
	while(num>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		num++;
	}
	printf("%d",n3);
	return 0;
}

