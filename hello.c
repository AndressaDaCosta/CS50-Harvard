#include <cs50.h>
#include <stdio.h>


//pergunta ao usuário seu nome e em seguida imprime na tela olá, nome usuário.
int main(void)
{

     string name = get_string("Qual é o seu nome?\n");
        printf("Hello, %s", name);
        printf(". Welcome to CS50!");
  
}