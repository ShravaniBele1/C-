#include<stdio.h>
int main()
{
	int num,original_num,rem,reverse_num=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	original_num=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		reverse_num=reverse_num*10+rem;
	}
	if(original_num==reverse_num)
	{
		printf("%d is palindrome",original_num);
	}
	else
	{
		printf("%d is not palindrome",original_num);
	}
}
