/// Bibliotecas
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h> // Sistemas do Windows
using namespace std;

/// Funções
char Menu(char cod);
void Sexo(char sexo);

/// Programa
int main ( int argc, char *argv [] )
{
    char cod = 'A';

    while( cod != 'n' && cod != 'N' )
    {
        // Sistema
        setlocale(LC_ALL, "");
        system("cls & color B");

        // Variáveis
        int idade;
        char sexo, nome[15];
        float imc, peso, altura;

        // Apresentação
        cout << " ============================ " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ============================" << endl;

        // Entrada de Dados
        cout << "\n - Digite seu Nome: ";
        cin >> nome;

        cout << "\n - Digite sua Idade: ";
        cin >> idade;

        cout << "\n - Digite o Sexo " << endl;
        cout << " - [m] : Masculino " << endl;
        cout << " - [f] : Feminino " << endl;
        cout << " - Opc: ";
        cin >> sexo;

        cout << "\n - Digite seu 'Peso' e sua 'Altura': ";
        cin >> peso >> altura;

        // Cálculo
        imc = ( peso / pow(altura, 2) );

        // Relatório
        system("cls");
        cout << "\n ================== " << endl;
        cout << " - Nome: " << nome << endl;
        cout << " - Idade: " << idade << endl;
        Sexo(sexo); // Chamada de Função
        cout << " - Peso : " << peso << endl;
        cout << " - Altura : " << altura << endl;
        cout << " - IMC: " << imc << endl;
        cout << " ================== \n" << endl;

        // Chamada de Função
        cod = Menu(cod);
    }

    return (0);
}

/////////////////// Funções ///////////////////

// Menu
char Menu( char cod )
{
    cout << "\n - Deseja Preencher Novamente ?" << endl;
    cout << "- [s] Sim " << endl;
    cout << "- [n] Não " << endl;
    cout << "\n - Opc.: ";
    cin >> cod;

    return(cod);
}

// Sexo
void Sexo(char sexo)
{
    if ( sexo == 'M' || sexo == 'm')
    {
        cout << " - Masculino" << endl;
    }

    else if ( sexo == 'F' || sexo == 'f' )
    {
        cout << " - Feminino" << endl;
    }

    else
    {
        cout << "Inválido !" << endl;
    }
}
