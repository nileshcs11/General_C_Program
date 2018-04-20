#include<stdio.h>
#include<string.h>
int main()
{
char str[50],word[50];
int i,j,f,sl,wl;
printf("\n Enter The String:");
gets(str);
printf("\nEnter The Word To Be Searched:");
gets(word);
sl=strlen(str);
wl=strlen(word);
for(i=0;i<sl;i++)
{
	f=1;
	for(j=0;j<wl;j++)
	{
		if(str[i+j]!=word[j])
		{
			f=0;
			break;
		}
	}
if(f==1)
printf("\n'%s'found at position: %d\n",word,i+1);
}
return 0;
}















	
 
