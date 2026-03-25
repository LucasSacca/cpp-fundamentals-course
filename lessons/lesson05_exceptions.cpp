///////////////// EXCEÇÕES /////////////////

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string>
#include <queue>
#include <stack>

// Precisamos usar a biblioteca do stdexcept e fazer o uso de try e catch (famoso try e except).
// E para fazer o raise do erro, usar tabela do professor dos diferentes raises possíveis (slides aula 5)
#include <stdexcept>





//////// Ex 1: raise error caso não receba número inteiro do scanf

int n, continuar;

int main()
{
    while(continuar != 1)
    {
        try
        {
            printf("Digite um número inteiro: ");
            int verificacao = scanf("%d", &n);   // O scanf sempre retorna 1 quando a var recebida por ele atende ao %... else retorna 0

            if (verificacao != 1)
            {
                while (getchar() != '\n');
                throw std::invalid_argument("input errado\n");
            }

            continuar = 1;
        }
        catch(const std::invalid_argument& error)
        {
            printf("Erro: %s\n\n", error.what());
        }
    }
    
    printf("Exibindo os números: \n\n");
    n = 0;
    char continuar2;
    while(continuar != 2)
    {
        if (n%2 == 0)
        {
            printf("par: %d", n);
        } 
        else
        {
            printf("ímpar: %d", n);
        }

        try
        {
            printf("Deseja continuar (y/n)? ");
            int verificacao = scanf(" %c", &continuar2);

            if ((verificacao != 'Y') || (verificacao != 'y') || (verificacao != 'N') || (verificacao != 'n'))
            {
                while (getchar() != '\n');
                throw std::invalid_argument("y ou n");
            }
        }
        catch(const std::invalid_argument& error)
        {
            printf("Erro: %s\n", error.what());
        }
        n += 1;
    }

    // Toda essa parada aí em cima do while 2 não funciona na parte da verificacao, porque qualquer
    //  letra ou pontuação é caractere. Logo, a verificação como a de acima só serve para casos numéricos


}
