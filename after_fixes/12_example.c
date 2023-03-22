#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *user_input=NULL; // pointer wasn't nulled
	user_input = malloc(50); // pointer didn't have allocated memory
	FILE *ptr = stdin;
    printf("Enter your text: ");
    fscanf(stdin, "%[^\n]", user_input);
    printf("\nYour line -> %s\n", user_input);
	free(user_input); // pointer memory wasn't deallocated
    return 0;
}