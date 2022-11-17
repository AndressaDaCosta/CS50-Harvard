#include <stdio.h>
#include <cs50.h>
#include <math.h>



// Variáveis
int start_size;
int end_size;
int years = 0;


// funções
void getStart();
void getEnd();
void calculate();







// Lab 1: Population Growth
int main(void)
{
    getStart();
    getEnd();
    calculate();
}

// Prompt (tamanho inicial).
void getStart()
{
    do
    {
        start_size = get_int("Enter population start size: \n");
    }
    while (start_size < 9);
}

// Prompt (tamanho final).
void getEnd()
{

    do
    {
        end_size = get_int("Enter Population end size: \n");
    }
    while (end_size < start_size);
}

// Calculate number of years one by one until we reach threshold (start_size >= end_size)).
void calculate()
{
    while (start_size < end_size)
    {
        start_size = trunc(start_size + (start_size / 3) - (start_size / 4));
        years++;
    }

    //Print(truncated value)years.
    printf("Years: %i\n", years);
}


