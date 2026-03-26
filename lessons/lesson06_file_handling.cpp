////////////////// MANIPULAÇÃO DE ARQUIVOS //////////////////

#include <conio.h>
#include <stdio.h>
#include <fstream> // File stream para manipulação de arquivos
#include <string>

std::ofstream arquivo("dados.txt");

void getNames()
{
    char buffer_name[100];
    if (arquivo.is_open())
    {
        for (int i = 1; i <= 5; i++)
        {
            printf("Digite o %dº nome: ", i);
            scanf("%s", &buffer_name);
        
            arquivo << (buffer_name); // "<<" significa que vai por a string dentro do arquivo. Tem que ser string (já que é um txt)
            arquivo << "\n";
        }

        arquivo.close();
    }
}


int main()
{
    getNames();
    
    std::ifstream arquivo_output("dados.txt");
    std::string linha;

    if (arquivo_output.is_open())
    {
        printf("\nImprimindo:\n");
            while (getline(arquivo_output, linha))
            {
                printf("%s\n", linha.c_str());
            }
        
        arquivo_output.close();
    }

}
