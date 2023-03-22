#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> // include was missing

void genRandomText(int count, char *buffer)
{
    int i;
    for (i = 0; i < count; i++) {
        //char symbol[1]; // incorrect length for 2 digit numbers
		char symbol[2];
        int num = (rand() % (90 - 65 + 1)) + 65;
        sprintf(symbol,"%c", num);
        strcat(buffer, symbol);
    }
    buffer[count] = '\0';
}

int main()
{
    char *buffer = NULL;
    int i = 1;
    srand(time(0));
  
    while(i < 7) {
        buffer = malloc(i * sizeof(char) + 1);
        genRandomText(i, buffer);
        printf("Buffer - %s\n", buffer);
		free(buffer); // pointer memory wasn't deallocated
        i++;
    }
    //free(buffer); // memory already being deallocated
    return 0;
}