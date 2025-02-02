#include<stdio.h>
void binary(int);
int main()
{
	int num;
	printf("enter decimal number:");
	scanf("%d",&num);
	binary(num);
	
}
void binary(int num)
{
	int q,r[30],i=0,j;
	printf("binary: ");
	while(num!=0)
	{
		r[i]=num%2;
		num=num/2;	
		j=i++;
	}
	for(j;j>=0;j--)
	{
		printf("%d",r[j]);	
	}
}
