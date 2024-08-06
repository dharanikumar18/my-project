#include<stdio.h>
int main()
{
	int n=3452,re=0,r,result;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		re=(re+r)*10;
		result=re/10;

	}
	printf("%d",result);
	return 0;
}

