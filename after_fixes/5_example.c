#include <stdio.h>
#include <stdlib.h>
#include <string.h> // include was missing

void text_printer(char *msg); // for main to see text_printer

int main(void)
{
    char *buffer;
    buffer = malloc(25);
    strcpy(buffer, "Some random text");
    text_printer(buffer);
    free(buffer);
    return 0;
}

void text_printer(char *msg)
{
    printf("%s\n", msg);
    //free(msg); // the same memory is being deallocated later in main
}