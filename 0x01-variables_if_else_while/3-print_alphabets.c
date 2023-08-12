#include <stdio.h>

int main() {

	char lowerLetter = 'a';
	char upperLetter = 'A';

	while ( lowerLetter<= 'z' )
	{
		putchar (lowerLetter);lowerLetter ++;
	}

	while ( upperLetter <= 'Z' )
	{
		putchar (upperLetter); upperLetter ++;
	}

	putchar ( '\n' );
		return (0);
}
