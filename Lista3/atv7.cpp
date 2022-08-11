#include <iostream>
#include <string.h>

using namespace std;

typedef struct Endereco
{
    char rua[30];
    char bairro[30];
    char cidade[30];
    char estado[30];
    char cep[30];
};

typedef struct Cadastro
{
    char nome[30];
    Endereco endereco;
    float salario;
    char identidade[15];
    char cpf[15];
    char estadoCivil[8];
    char telefone[15];
    int idade;
    char sexo;
};

int main()
{
    Cadastro cadastros[2];
    int maiorIdade;
    char maior[30];
    char identidade[15];
    for (int i = 0; i < 2; i++)
    {
        cout << "Nome: ";
        cin.getline(cadastros[i].nome, 30);
        cout << "Rua: ";
        cin.getline(cadastros[i].endereco.rua, 30);
        cout << "Bairro: ";
        cin.getline(cadastros[i].endereco.bairro, 30);
        cout << "Cidade: ";
        cin.getline(cadastros[i].endereco.cidade, 30);
        cout << "Estado: ";
        cin.getline(cadastros[i].endereco.estado, 30);
        cout << "CEP: ";
        cin.getline(cadastros[i].endereco.cep, 30);
        cout << "Salario: ";
        cin >> cadastros[i].salario;
        cin.ignore();
        cout << "Identidade: ";
        cin.getline(cadastros[i].identidade, 15);
        cout << "CPF: ";
        cin.getline(cadastros[i].cpf, 15);
        cout << "Estado Civil: ";
        cin.getline(cadastros[i].estadoCivil, 15);
        cout << "Telefone: ";
        cin.getline(cadastros[i].telefone, 15);
        cout << "Idade: ";
        cin >> cadastros[i].idade;
        cout << "Sexo: ";
        cin >> cadastros[i].sexo;
        cin.ignore();
    }

    cin.getline(identidade, 15);

    maiorIdade = cadastros[0].idade;

    for (int i = 0; i < 2; i++)
    {
        if (cadastros[i].idade > maiorIdade)
        {
            maiorIdade = cadastros[i].idade;
            cout << "Maior idade: ";
            strcpy(maior, cadastros[i].nome);
        }
        if (cadastros[i].sexo == 'm' || cadastros[i].sexo == 'M')
        {
            cout << "Sexo Masculino: ";
            cout << cadastros[i].nome << endl;
        }
        if (cadastros[i].salario > 1212.0)
        {
            cout << "Salario maior que 1212,00: ";
            cout << cadastros[i].nome << endl;
        }
        if (strcmp(cadastros[i].identidade, identidade) == 0)
        {
            cout << "Identidade igual: ";
            cout << cadastros[i].nome << endl;
        }
    }
    cout << maior;

    return 0;
}