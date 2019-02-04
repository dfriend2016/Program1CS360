//*************************************//
/*
Course Section CS 360, Spring 2019
Assignemnt: Program 1 -- Dos 2 Nix
Resources:
Description: This program converts the
	     crlf character to the lf
	     character within dos files
	     essentially converting
	     dos formatting to unix
	     formatting
*/
//*************************************//

// Other Includes //
#include<stdio.h>
#include<string.h>

// Constants //
const int MAX = 30;

// Driver //
int
main()
{
	// Prompt and Input filename
	char filename[MAX];
	puts("Enter the dos file name: ");
	scanf("%s", filename);

	// initialize and open file stream for reading and writing
	FILE *dos;
	dos = fopen(filename, "r+");
	
	char crlf = '\r';
	char curr = 'a'; // set to a just for initialization

	// loop to go through each character
	//    until the end of the file is reached
	while (curr = fgetc(dos) != EOF)    // sets curr to the current character
	{
	    // conditional to check if curr is the crlf char
	    if(curr == crlf)
	    {
		fputc(' ', dos);    // replaces the crlf with a space
		fputc('\n', dos);   // inserts a lf in place of the cl

	    } // end conditional
	} // end loop

	fclose(filename);   // closes the file

	return 0;
}

// END OF PROGRAM //
# Program1CS360
