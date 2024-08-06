#include<stdio.h>

int main()
{
	int sum=0,i=0,result,ori,sum1=0,size=12;
	int arr[]={1,2,3,4,5,6,8,9,10,11,12};
	while(i<11)
	{
		sum=sum+arr[i];
		i++;
	}
	printf("%d\n",sum);
	ori=size*(size+1)/2;
	printf("%d\n",ori);
	result=ori-sum;
	printf("%d\n",result);
	return 0;
}

