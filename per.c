#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,tot;
	printf("enter the value of s1,s2,s3,s4,s5:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	tot=(s1+s2+s3+s4+s5)/5;
	if (tot>=80)
	{
		printf("A grad");
	}
	else if(tot>=60)
	{
		printf("B grad");
	}
	else if(tot>=40)
	{
		printf("C grad");
	}
	else
	{
		printf("D grad");
	}
	return 0;
}
