#include <conio.h>
#include <stdio.h>
#include <math.h>


///////////////// FUNÇÕES /////////////////
 
// Tipos de Retorno das funções:
  // int inteiro();
  // float decimal();
  // char caractere();
  // void vazio();

// Exemplo:

int minhaPrimeiraFuncao(int a, int b)
{
    return a + b;
}

int verificadorDeNumero(int num)
{
    if (num < 0){
        return -1;
    }

    else if (num > 0){
        return 1;
    }

    else{
        return 0;
    }
}


int fatorial(int num)
{
    int resultado = 1;
    for (int i = 1; i <= num; i++){
        resultado = resultado * i;
    }

    return resultado;
}

/* 
O uso de * nos parâmetros permite alterar variáveis já existentes fora da função.
Assim, os valores podem ser modificados dentro da função e armazenados nos respectivos ponteiros,
sem necessidade de usar return para cada saída.
*/

void calculoTemperatura(int valor, char unidade, int* valor_convertido, char* unidade_convertida)
{
    if ((unidade == 'C') || (unidade == 'c')){
        *valor_convertido = valor + 273;
        *unidade_convertida = 'K';
    }
    else if ((unidade == 'K') || (unidade == 'k')){
        *valor_convertido = valor - 273;
        *unidade_convertida = 'C';
    }
}



int x, verificador, fatorial_result, num_fatorial, temperatura, temperatura_convertida;
char unidade_temperatura, unidade_convertida;

int main()
{
    x = minhaPrimeiraFuncao(10,15);
    verificador = verificadorDeNumero(-1);

    num_fatorial = 6;
    fatorial_result = fatorial(num_fatorial);

    printf("\n Soma de a + b = %d", x);
    printf("\n Verificando Sinal do Número: %d", verificador);
    printf("\n\n %d! = %d \n", num_fatorial, fatorial_result);

    printf("\n\nDigite um valor de Temperatura: ");
    scanf("%d", &temperatura);

    printf("Unidade de medida (C/K): ");
    scanf(" %c", &unidade_temperatura);


    // temperatura_convertida, unidade_convertida = calculoTemperatura(temperatura, unidade_temperatura);

    // printf("\n\n Temperatura original: %d %s", temperatura, unidade_temperatura);
    // printf("\n Temperatura convertida: %d %s", temperatura_convertida, unidade_convertida);


    calculoTemperatura(temperatura, unidade_temperatura, &temperatura_convertida, &unidade_convertida);

    printf("\n\n Temperatura original: %d %c", temperatura, unidade_temperatura);
    printf("\n Temperatura convertida: %d %c", temperatura_convertida, unidade_convertida);

    return 0;

}
