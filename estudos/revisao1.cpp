#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int soma = 0,  div = 0, nulo = 0, somaP = 0;
    double media=0.0;
    int v[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 5; i++)
    {
        soma += v[i];

        if (v[i] % 5 == 0)
        {
            div++;
        }
        if (v[i] == 0)
        {
            nulo++;
        }
        if (v[i] % 2 == 0)
        {
            somaP = somaP + v[i];
        }
    }
    media = soma / 5.0;
    cout << soma << "\n"
         << media << "\n"
         << div << "\n"
         << nulo << "\n"
         << somaP;

    cout << endl;
    return 0;
}