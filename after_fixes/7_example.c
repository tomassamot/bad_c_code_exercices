#include <stdio.h>
#include <stdlib.h>
#include <string.h> // include was missing

void mem_alloc(char **buffer) // double pointer required
{
    *buffer = malloc(41 * sizeof(char)); // bigger buffer required
}

int main(void)
{
    char *buffer = NULL;
    mem_alloc(&buffer); // double pointer required
	if(buffer != NULL){ // need to check if memory was allocated successfully
		strcpy(buffer, "Some random text to be copied to the buffer");
    	printf("%s\n", buffer);
    	free(buffer);
		return 0;
	}
	else{
		return 1;
	}
    strcpy(buffer, "Some random text to be copied to the buffer");
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}