#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int vowels=0,cons=0,i,len;
	printf("enter the string:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		 {
		 	vowels++;
		 }
		else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			cons++;
		}
	}
	printf("total number of vowels in a string:%d",vowels);
	printf("\ntotal number of consonants in a string:%d",cons);
}
