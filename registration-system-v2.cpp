// Sistema de cadastro
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main () {
    cout << "Bem-vindo ao sistema de cadastro" << endl;

    // Uma variavel CAD é criada e atribuida como um arquivo aberto
    FILE *CAD;

    // Acessa o arquivo .txt, com o 'w' ele cria caso não exista
    CAD = fopen("cadastro.txt", "w");

    // Checa caso de algum erro ao abrir o arquivo
    if (CAD == NULL) {
        cout << "Erro ao abrir o arquivo" << endl;
        return 0;
    }
    cout << "Digite seu nome: ";
    string nome;
    cin >> nome;

    // Salva variavel nome como um printf no arquivo .txt
    fprintf(CAD, "Nome: %s\n", nome.c_str());
    cout << "Digite sua idade: ";
    int idade;
    cin >> idade;

    // Salva variavel idade como um printf no arquivo .txt
    fprintf(CAD, "Idade: %d\n", idade);
    cout << "Digite seu email: ";
    string email;
    cin >> email;

    // Salva variavel CPF como um printf no arquivo .txt
    fprintf(CAD, "CPF: %s\n", email.c_str());
    cout << "Digite seu CPF: ";
    string CPF;
    cin >> CPF;
    
    // Salva variavel cnpj como um printf no arquivo .txt
    fprintf(CAD, "CNPJ: %s\n", email.c_str());
    cout << "Digite seu CNPJ: ";
    string cnpj;
    cin >> cnpj;
    
    // Salva variavel email como um printf no arquivo .txt
    fprintf(CAD, "Email: %s\n", email.c_str());
    cout << "Digite seu telefone: ";
    string telefone;
    cin >> telefone;

    // Salva variavel telefone como um printf no arquivo .txt
    fprintf(CAD, "Telefone: %s\n", telefone.c_str());
    cout << "Os dados foram salvos no arquivo 'cadastro.txt'" << endl;

    // Fecha o arquivo .txt"
    system ("pause");
}