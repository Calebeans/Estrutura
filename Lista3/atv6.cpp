#include <iostream>
#include <string.h>

using namespace std;

typedef struct Filme
{
    char titulo[30];
    char genero[30];
    int duracao;
    int ano;
};

void imprimeComedia(Filme filmes[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(filmes[i].genero, "Comedia") == 0)
        {
            cout << filmes[i].titulo << endl;
        }
    }
}

int main()
{
    Filme filmes[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Titulo: ";
        cin.getline(filmes[i].titulo, 30);
        cout << "Genero: ";
        cin.getline(filmes[i].genero, 30);
        cout << "Duracao: ";
        cin >> filmes[i].duracao;
        cout << "Ano: ";
        cin >> filmes[i].ano;
        cin.ignore();
    }

    imprimeComedia(filmes);

    return 0;
}