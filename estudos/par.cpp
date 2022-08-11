#include <iostream>
#include <windows.h>

using namespace std;
int num(int a);

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int a = 8;
    cout << num(a);

    cout << endl;
    return 0;
}

int num(int a)
{
    if (a % 2 == 0)
    {
        return a;
    }
}