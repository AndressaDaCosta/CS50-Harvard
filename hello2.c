#include <cs50.h>
#include <stdio.h>
#include <ctype.h>


//pergunta ao usuário seu nome e em seguida imprime na tela olá, nome usuário.
int apenas_letras(char *name)
{

    for (int i = 0; name[i] != false; ++i) //percorrer todos os carateres - NUL '\ 0'(char nulo com valor = 0(false);)
    {
        if (!isalpha(name[i]) && name[i] != ' ')//se não for letra e espaço
        {
            return false; //retornar false(0) indica que não tem somente letras
        }
    }
    return true; //retornar true(1) indica que só tem letras
}


int main(void)
{
    string name = get_string("Qual é o seu nome?\n");

    if (apenas_letras(name)) //<--aqui
    {
        printf("Hello, %s", name); // imprime Olá, nome usuário...
        printf(". Welcome to CS50!");
    }
    else
    {
        printf("You need to use letters!\n"); // Você precisa inserir letras
    }

}
