// MANIPULAÇÃO DE MEMÓRIA

#include <conio.h>
#include <stdio.h>
#include <stack>   // Para fazer pilhas => Last in, first out
#include <queue>   // Para fazer filas  => First in, first out
#include <string>


////////// PONTEIRO e REFERÊNCIA //////////

int main()
{
    int x = 10;
    int* p = &x; 

    printf("\n local %d", p);
    printf("\n%d", *p);


    int y = 10;
    int& ref_y = y; 

    printf("\n\n y1 = %d", y);

    ref_y = 20;

    printf("\n y2 = %d", y);


    int* arr = new int[5];
    arr[0] = 10;
    printf("\n\n%d", arr[0]);
    delete[] arr;
    printf("\n%d", arr[0]); // print do espaço da memória

}


void inserirNome(char nome[50], std::queue<std::string> &fila)
{
    fila.push(std::string(nome));
}


std::string proximoDaFila(std::queue<std::string> &fila)
{
    if (!fila.empty())
    {
    std::string nome = fila.front();
    fila.pop();
    return nome;
    }

    else
    {
        printf("Não há nomes para exibir");
        return "";
    }

    
}


// int main()
// {
//     ////////////////// Ex 1: //////////////////
//     int len_arr;
//     printf("\nDigite quantos inteiros você deseja armazenar no vetor: ");
//     scanf("%d", &len_arr);

//     int* arr = new int[len_arr]; // ao fazer o vetor de tamanho [n], o tipo de var deve ser igual em todos os endereços
    
//     printf("Digite os inteiros a serem alocados em sequência apertando [ENTER]: \n");
//     for (int i = 0; i < len_arr; i++)
//     {
//         scanf("%d", arr + i);  // aqui, o +1 não é uma soma algébrica, mas sim uma soma do endereço da memória
//     }

//     int soma = 0;
//     for (int i = 0; i < len_arr; i++)
//     {
//         soma += *(arr + i);
//     }

//     printf("soma: %d\n\n\n", soma);



//     ////////////////// Ex 2: Pilha //////////////////
//     int len_pilha, novo_num;
//     std::stack<int> pilha;         // pilha.push(var) inputa na pilha
//                                     // pilha.pop() tira o valor do topo da pilha
//                                     // pilha.top() retorna o valor do topo da pilha

//     printf("\nDigite o tamanho da pilha: ");
//     scanf("%d", &len_pilha);

//     printf("Digite os inteiros a serem alocados em sequência na pilha apertando [ENTER]: \n");
//     for (int i = 0; i < len_pilha; i++)
//     {
//         scanf("%d", &novo_num);
//         pilha.push(novo_num);
//     }

//     printf("\nImprimindo ao contrário: ");
//     for (int i = 0; i < len_pilha; i++)
//     {
//         printf("\n%d", pilha.top());
//         pilha.pop();
//     }
    

//     ////////////////// Ex 3: Fila //////////////////
//     int len_fila;
//     int sair = 0;
//     char decisao;

//     std::queue<std::string> fila;
//     char nome[50];

//     while (sair == 0)
//     {
//         if (!fila.empty())
//         {
//             printf("\nFila: ");
//             std::queue<std::string> temp = fila;
//             while (!temp.empty()) {
//                 printf("%s, ", temp.front().c_str());
//                 temp.pop();
//             }
//         }
//         else
//         {
//             printf("\nFila vazia");
//         }

//         printf("\na) inserir nome na fila");
//         printf("\nb) chamar o próximo da fila");
//         printf("\nc) SAIR");
//         printf("\nDigite o que deseja fazer (a/b/c): ");
//         scanf(" %c", &decisao);
        
//         if (decisao == 'a')
//         {
//             printf("Digite o nome: ");
//             scanf(" %49[^\n]", &nome);
//             inserirNome(nome, fila);
//         }
//         else if (decisao == 'b')
//         {
//             printf("\nPróximo da Fila: %s\n\n",proximoDaFila(fila).c_str());
//         }
//         else if (decisao == 'c')
//         {
//             sair = 1;
//         }
        
//     }


// }
