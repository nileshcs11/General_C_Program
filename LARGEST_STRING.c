/* Aim: Write a program that accepts n strings and displays the longest string */

#include<stdio.h>
#include<string.h>
#define size 100
#define wsize 20

void LongStr(char str[][20],int n); // LongStr Function Prototype

void main()
{
	char str[size][wsize];
	int i,count=0,n;

	printf("\n How many words to accept:- ");
	scanf("%d",&n);

	printf("\n Enter %d words:- \n \n",n);

	for(i=0;i<n;i++)
	scanf("%s",str[i]);

	LongStr(str,n);
}
// LongStr Function
void LongStr(char str[][20],int n)
{
	int i,Max,len1,c;

	Max=strlen(str[0]);

	for(i=1;i<n;i++)
	{
	len1=strlen(str[i]);

		if(len1>Max)
		{
		c=i;
		Max=len1;
		}
	}

	printf("\n The longest string among all is \"%s\" \n \n",str[c]);
}
