#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct Pessoa
{
    char nome[30];
    char endereco[50];
    char telefone[10];
};

int main()
{
    int i, j;
    Pessoa pessoa[5], aux[1];

    for (i = 0; i < 5; i++)
    {
        cout << "\n DIGITE O NOME " << i + 1 << ": ";
        cin >> pessoa[i].nome;
        cout << "\n DIGITE O ENDERECO :";
        cin >> pessoa[i].endereco;
        cout << "\n DIGITE O TELEFONE :";
        cin >> pessoa[i].telefone;
    };

    Pessoa aux1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(pessoa[j + 1].nome, pessoa[j].nome) < 0)
            {
                aux1 = pessoa[j];
                pessoa[j] = pessoa[j + 1];
                pessoa[j + 1] = aux1;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        cout << "\n nome: " << pessoa[i].nome;
        cout << "\n endereco: " << pessoa[i].endereco;
        cout << "\n telefone:" << pessoa[i].telefone;
        cout << "\n ----------------------------";
        cout << "\n";
    }
}
