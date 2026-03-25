#include <stdio.h>
#include <conio.h>
#include <math.h>

int a, b, c, maior;
float nota1, nota2, media;
char* status;  // usado para armazenar texto

int main(){

    a = 2;
    b = 1;
    c = 3;

    // && = operador lógico AND, || = operador lógico OR
    if ((a > b) && (a > c)){
        maior = a;
    }
    else if (b > c){
        maior = b;
    } 
    else {
        maior = c;
    }

    printf("maior = %d", maior);

    printf("\n\nNota 1:");
    scanf("%f", &nota1);
    
    printf("Nota 2:");
    scanf("%f", &nota2);

    media = ((nota1 + nota2) / 2);

    if (media >= 7){
        status = "aprovado";
    }
    else{
        status = "reprovado";
    }

    printf("media = %f", media);
    printf("\nstatus: %s", status);

////////////////////// LOOP FOR //////////////////////

    int i, tabuada, resultado;

    printf("\n\nSelecione a tabuada a ser exibida: ");
    scanf("%d", &tabuada);

    for (i = 0; i <= 10; i++) {
        resultado = i * tabuada;
        printf("%d * %d = %d \n", i, tabuada, resultado);
    }

////////////////////// LOOP WHILE //////////////////////

    char sair = 'n';    // aspas simples para chars
    int num = 0;

    printf("\n\nExibição de Números pares.");

    while (sair != 'y'){

        printf("\n%d", num);
        num = num + 2;

        printf("\n\nDeseja sair (y/n)?");
        // espaço antes de %c evita leitura de caracteres residuais (como '\n')
        scanf(" %c", &sair);
    }

    return 0;
}
