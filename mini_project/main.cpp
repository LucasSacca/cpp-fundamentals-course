#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>





int main()
{
    std::ifstream file("ExampleCSV.csv");
    std::string linha;
    char marcador = ',';
    int j, i = 0;
    int contador_doses = 0;
    int contador_vacinas = 0;
    float cont_sex_m = 0;
    float cont_sex_f = 0;
    int idade;
    int menores_de_idade;

    while (getline(file, linha))
    {
        std::stringstream colunas(linha);
        std::string casela;
        j=0;

        // printf("Linha[%d]\n", i);
            
        while (getline(colunas, casela, marcador))
        {

            // Atividade 01
            if ((casela == "ASTRAZENECA/FIOCRUZ") && (j == 10))  
            {  
                // printf("Coluna[%d] = %s\n", j, casela.c_str());
                contador_vacinas++;
            }

            // Atividade 02
            if ((casela == "Única") && (j == 12))  
            {  
                contador_doses++;
            }

            // Atividade 03
            if ((casela == "M") && (j == 3))  
            {  
                cont_sex_m++;
            }
            if ((casela == "F") && (j == 3))  
            {  
                cont_sex_f++;
            }

            // Atividade 04
            if ((j == 1) && (i > 0))
            {
                int idade = std::stoi(casela); // converte string para inteiro

                if (idade < 18) {
                    menores_de_idade++;
                }
            }

            j++;
        }
        
        i++;

    }

    float percentual_sex_f = ((cont_sex_f * 100) / (cont_sex_m + cont_sex_f)) ;
    float percentual_sex_m = 100 - percentual_sex_f;

    printf("\n\nQuantidade de vacinas aplicadas pela ASTRAZENECA/FIOCRUZ: %d", contador_vacinas);
    printf("\nQuantidade de doses únicas: %d", contador_doses);
    printf("\nPercentual de Homens e Mulheres da amostra: F = %.2f%%; M = %.2f%%.", percentual_sex_f, percentual_sex_m);
    printf("\nQuantidade de pacientes menor de idade: %d\n", menores_de_idade);

}
