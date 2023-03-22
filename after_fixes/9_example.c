#include <stdio.h>

void number_changer(int *var) // pointer required to make permanent changes
{
    printf("Number changer. Before change - %d\n", *var); // asterisk required to access pointer's value
    *var = 123; // asterisk required to set pointer's value
    printf("Number changer. After change - %d\n", *var); // asterisk required to access pointer's value
}

int main(void)
{
    int var = 766;
    printf("Before change - %d\n", var);
    number_changer(&var); // pointer required to make permanent changes
    printf("After change - %d\n", var);
    return 0;
}