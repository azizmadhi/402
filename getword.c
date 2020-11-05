//main.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 80   /* maximum input line size */

/* function declarations */ 
int readline( char line[], int max );
int getWordFromArray(int index) ;
//https://cwe.mitre.org/data/definitions/119.html.  Example 4
char line[MAXLINE];    /* current input line */

//Brownie points if you can identify the passage!
char* passage[7] = {"once", "more", "unto", "the", "breach", "my", "friends"};
char* more = "It is a far, far better place I go";
char* evenMore = "than I have ever been";
char* warning[5] = {"how", "very", "insecure", "this", "is"};

int main(int argc, char** argv)
{
    printf("Enter a number to get a word from the passage\n");
    readline(line, MAXLINE);
    int value = atoi(line);
    getWordFromArray(value);

}

/* readline: read a line into s, return length */
int readline( char s[], int lim )
{
    int c, i;
    for( i=0; i<lim-1 && (c=getchar()) != EOF && c !='\n'; i++)
        s[i] = c;
    if ( c == '\n') {
        s[i] = c;
	    i++;
	}
	s[i] = '\0';
	return i;
}


int getWordFromArray(int index) 
{
    printf("Word from passage is: %s\n", passage[index]);

}