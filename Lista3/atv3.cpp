#include <iostream>
#include <windows.h>

using namespace std;

typedef struct
{
  char titulo[30], categoria[15], autor[20], editora[15];
  float paginas, ano;
} livros;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  char titulo[30];
  livros livros[5];

  for (int i = 0; i < 5; i++)
  {
    strcpy(livros[i].titulo, "alice pais");
    strcpy(livros[i].categoria, "NULL");
    strcpy(livros[i].autor, "NULL");
    strcpy(livros[i].editora, "NULL");
    livros[i].paginas = 0;
    livros[i].ano = 0;
  }

  for (int i = 0; i < 5; i++)
  {
    system("cls");
    cout << endl;
    cout << "\nDigite o titulo do livro: ";
    cin.ignore();
    cin.getline(livros[i].titulo, 30);

    cout << endl;
    cout << "\nDigite a categoria do livro: ";
    cin.getline(livros[i].categoria, 15);

    cout << endl;
    cout << "\nDigite o autor do livro: ";
    cin.getline(livros[i].autor, 20);

    cout << endl;
    cout << "\nDigite o nome da editora: ";
    cin.getline(livros[i].editora, 15);

    cout << endl;
    cout << "\nDigite a quantidade de paginas tem no livro: ";
    cin >> livros[i].paginas;

    cout << endl;
    cout << "\nDigite o ano do livro: ";
    cin >> livros[i].ano;
    cout << endl;
  }

  system("cls");
  cout << "\nDigite o titulo do livro que deseja procurar: ";
  cin.ignore();
  cin.getline(titulo, 30);

  for (int i = 0; i < 5; i++)
  {

    int resultado = strcmp(livros[i].titulo, titulo);
    cout << resultado;
    if (resultado == 0)
    {

      cout << endl;
      cout << "\nO titulo do livro é: " << livros[i].titulo;

      cout << endl;
      cout << "\nA categoria do livro é: " << livros[i].categoria;

      cout << endl;
      cout << "\nO autor do livro é: " << livros[i].autor;

      cout << endl;
      cout << "\nO nome da editora é: " << livros[i].editora;

      cout << endl;
      cout << "\nA quantidade de paginas é de: " << livros[i].paginas << " paginas.";

      cout << endl;
      cout << "\nO ano do livro é: " << livros[i].ano;
    }
  }

  cout << endl;
  return 0;
}