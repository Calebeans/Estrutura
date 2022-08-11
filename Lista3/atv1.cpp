#include <iostream>
#include <windows.h>

using namespace std;

typedef struct Dados
{
  char nome[100], sexo[20], cpf[15];
  int idade, cod_s, salario;
};

typedef struct Dado
{
  int dia, ano;
  char mes[10], cargo[50];
  Dados dados;
} Dado;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  Dados dados;
  Dado dado;

  cout << "\nDigite o seu nome: ";
  cin.ignore();
  cin.getline(dados.nome, 100);
  cout << endl;

  cout << "\nDigite a sua idade: ";
  cin >> dados.idade;
  cout << endl;

  cout << "\nDigite o seu sexo: ";
  cin.ignore();
  cin.getline(dados.sexo, 20);
  cout << endl;

  cout << "\nDigite o seu CPF: ";
  cin.getline(dados.cpf, 15);
  cout << endl;

  cout << "\nDigite o dia do seu nascimento: ";
  cin >> dado.dia;
  cout << endl;

  cout << "\nDigite o mês do seu nascimento: ";
  cin.ignore();
  cin.getline(dado.mes, 10);
  cout << endl;

  cout << "\nDigite o ano do seu nascimento: ";
  cin >> dado.ano;
  cout << endl;

  cout << "\nDigite o código do seu setor: ";
  cin >> dados.cod_s;
  cout << endl;

  cout << "\nDigite o seu cargo: ";
  cin.ignore();
  cin.getline(dado.cargo, 50);
  cout << endl;

  cout << "\nDigite o seu salario: ";
  cin >> dados.salario;
  cout << endl;

  system("cls");

  cout << "\nRegistro armazenado com sucesso!";

  cout << endl;
  return 0;
}