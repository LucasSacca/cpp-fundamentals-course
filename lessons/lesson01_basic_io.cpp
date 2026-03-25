#include <stdio.h>   // biblioteca para entrada e saída (estilo C)
#include <conio.h>   // funções de console (dependente do sistema)
#include <math.h>    // funções matemáticas (ex: fmod)

// declarar variáveis antes do uso
int n1, n2, n3, soma;
float num, den, div_inteira, resto;

// lembrar de usar ";" ao final das instruções

int main()
{
    printf("n1: ");   
    scanf("%d", &n1);   // leitura de inteiro

    printf("n2: ");   
    scanf("%d", &n2);

    printf("n3: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;
    printf("soma = %d \n\n", soma);

    // ----------------------

    printf("numerador: ");
    scanf("%f", &num);

    printf("denominador: ");
    scanf("%f", &den);

    div_inteira = num / den;
    resto = fmod(num, den);

    printf("resultado da divisao = %f", div_inteira);
    printf("\nresto da divisao = %f", resto);

    return 0;
}
