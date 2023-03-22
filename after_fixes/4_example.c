#include <stdio.h>
#include <string.h> // include was missing
#include <stdlib.h> // include was missing

int main(void)
{
    char *buffer = NULL; // pointer wasn't nullified
    buffer = malloc(15);
	
	if(buffer != NULL){ // pointer wasn't checked if it is still null after allocation
		strcpy(buffer, "Some random text");
    	printf("%s\n", buffer);
		free(buffer); // pointer wasn't deallocated
		return 0;
	}
	else{
		return 1;
	}
}