#include <iostream>
#include <windows.h>
#include <cstring>
 
using namespace std;

typedef struct Banco
{
    int num;
    char titular[35];
    double saldo;
};

 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  Banco contas[5];
  int cont = 0;

  contas[0].saldo = 1000;
  contas[1].saldo = 1200;
  contas[2].saldo = 2500;
  contas[3].saldo = 3500;
  contas[4].saldo = 7000;

  for(int i = 0; i < 5; i++){
    cont++;
    contas[i].num = cont;
    cout<<"Informe seu nome: ";
    cin.getline(contas[i].titular,35);
  }

  float maior = 0.0, menor = 999999999999999;
  int contNumMax=0, contNumMin=0;

  for(int i = 0; i < 5; i++){
    if(contas[i].saldo > maior){
        contNumMax = contas[i].num;
        maior = contas[i].saldo;
    }
    if(contas[i].saldo < menor){
        contNumMin = contas[i].num;
        menor = contas[i].saldo;
    }
  }
  contNumMax--;
  contNumMin--;

  cout<<"Maior"<<endl;
  cout<< "Numero: "<< contas[contNumMax].num;
  cout<< " Titular: "<<contas[contNumMax].titular;
  cout<< " Saldo: "<<contas[contNumMax].saldo << endl;

  cout<<"Menor"<<endl;
  cout<< "Numero: "<<contas[contNumMin].num ;
  cout<< " Titular: "<<contas[contNumMin].titular ;
  cout<< " Saldo: "<<contas[contNumMin].saldo;
  

  cout << endl;
  return 0;
}