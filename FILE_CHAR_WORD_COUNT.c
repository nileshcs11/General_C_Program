/*************************************************
 * C program to count no of lines, words and 	 *
 * characters in a file.filename must be given through commandline
 *************************************************/
#include <stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("\nInsufficient Argument!");
		exit (0);
	}
 FILE *fp;
 //char filename[100];
 char ch;
 int linecount, wordcount, charcount;
 // Initialize counter variables
 linecount = 0;
 wordcount = 0;
 // Prompt user to enter filename
  //gets(filename);
	
		
	
    // Open file in read-only mode
   fp = fopen(argv[1],"r");

   // If file opened successfully, then write the string to file
   if ( fp )
   {
	//Repeat until End Of File character is reached.
	   while ((ch=getc(fp)) != EOF) {
	   	  // Increment character count if NOT new line or space
		    if (ch != ' ' && ch != '\n') { ++charcount; }

		  // Increment word count if new line or space character
		   if (ch == ' ' || ch == '\n') { ++wordcount; }

		  // Increment line count if new line character
		   if (ch == '\n') { ++linecount; }



	   }

	   if (charcount > 0) {
		++linecount;
		++wordcount;
	   }
    }
   else
      {
         printf("Failed to open the file\n");
         exit(0);
        }

    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

    return(0);

}
