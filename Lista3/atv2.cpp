#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

typedef struct compra
{
    string marca;
    int ano;
    double preco;
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double gasto;
    compra carro[5];

    for (int i = 0; i < 5; i++)
    {
        carro[i].marca = " ";
        carro[i].ano = 0;
        carro[i].preco = 0.0;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nDigite a marca do carro: ";
        cin >> carro[i].marca;

        cout << "\nDigite o ano do carro: ";
        cin >> carro[i].ano;

        cout << "\nDigite o preço do carro: ";
        cin >> carro[i].preco;

        system("cls");
    }

    cout << "\nDigite o quanto vc deseja gastar no carro: ";
    cin >> gasto;

    for (int i = 0; i < 5; i++)
    {
        if (gasto >= carro[i].preco)
        {
            cout << endl;
            cout << "\nA marca do carro: " << carro[i].marca;
            cout << endl;
            cout << "\nO ano do carro: " << carro[i].ano;
            cout << endl;
            cout << "\nO preço do carro: " << carro[i].preco;
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}