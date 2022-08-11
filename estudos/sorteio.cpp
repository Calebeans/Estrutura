#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int m[3][5];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            m[i][j] = rand() % 12;
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}