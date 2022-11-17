#include <stdio.h>
#include <cs50.h>
#include <math.h>


// Lab 1: Population Growth
int main(void)
{

    int start_size;

    // Prompt (tamanho inicial).
    do
    {
        start_size = get_int("Enter population start size: \n");
    }
    while (start_size < 9);


    int end_size;

    // Prompt (tamanho final).
    do
    {
        end_size = get_int("Enter Population end size: \n");
    }
    while (end_size < start_size);


    int years = 0;

    // Calculate number of years one by one until we reach threshold (start_size >= end_size)).
    while (start_size < end_size)
    {
        start_size = trunc(start_size + (start_size / 3) - (start_size / 4));
        years++;
    }

    //Print(truncated value)years.
    printf("Years: %i\n", years);
}