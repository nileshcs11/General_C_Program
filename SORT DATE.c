// C++ program for sorting dates using selection sort
#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
 
int main()
{
    int i,j;
	struct date input[5];
    for(int i=0; i<5; i++)
    {
    	printf("\n\n ENTER DATE %d:",i+1);
        scanf("%d",&input[i].day);
        scanf("%d",&input[i].month);
        scanf("%d",&input[i].year);
        //cin>>input[i].month;
        //cin>>input[i].year;
 
    }
    for (i=0; i<4; i++)
    {
        for (j=i+1; j<5; j++)
        {
            if (input[i].year > input[j].year)
            {
                struct date temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
            else if (input[i].year == input[j].year && input[i].month > input[j].month)
            {
                struct date temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
            else if (input[i].year == input[j].year && input[i].month == input[j].month && input[i].day > input[j].day)
            {
                struct date temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
 
        }
    }
 
 
    for(i=0; i<5; i++)
    {
        printf("\n\n %d   %d   %d",input[i].day,input[i].month,input[i].year);
    }
    return 0;
}

