// Bibliotecas
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/// Definições
#define TAM 50

/// Variáveis Globais
float cadastro[TAM];

/// Funções
char Menu(char cod);
void Entrada_Dados();
void Ordem_Crescente();
void Ordem_Decrescente();

/// Programa
int main( int argc, char *argv [] )
{
    // Variável Estratégica
    char cod = 'A';

    // Estrutura de Repetição
    while( cod != 'n' && cod != 'N' )
    {
        // Sistemas
        setlocale(LC_ALL, "");
        system("cls & color E");

        // Apresentação
        cout << " ========================== " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ========================== " << endl;

        // Chamda de Procedimento
        Entrada_Dados();

        system("cls & color A");

        cout << "\n ======================= " << endl;
        cout << " ======== ORDEM ======== " << endl;
        cout << " ======================= " << endl;

        cout << "\n ===== Ordem Crescente ===== " << endl;
        Ordem_Crescente();

        cout << "\n ===== Ordem Decrescente ===== " << endl;
        Ordem_Decrescente();

        // Menu Interativo
        cod = Menu(cod);
    }

    return(0);
}
/////////////////////////// FUNÇÕES ///////////////////////////

// Entrada de Dados
void Entrada_Dados()
{
    int i;

    //system("cls & color A");
    cout << "\n ===== Cadastro ===== \n" << endl;

    for ( i = 0; i < TAM ; i++ )
    {
        cout << " - Digite ["<< (i + 1) <<"]: ";
        cin >>  cadastro[i];
    }
    cout << " ===================== " << endl;
}

// Ordem Crescente
void Ordem_Crescente()
{
    int i, j;
    float aux;

    for ( i = 0; i < TAM; i++ )
    {
        for ( j = 0; j < i; j++ )
        {
            if ( cadastro[j] > cadastro[i] )
            {
                aux = cadastro[i];
                cadastro[i] = cadastro[j];
                cadastro[j] = aux;
            }
        }
    }

    cout << "\n -------------------- " << endl;
    for ( i = 0; i < TAM; i++ )
    {
        cout << " - " << cadastro[i] << endl;
    }
    cout << " -------------------- " << endl;
}

// Ordem Decrescente
void Ordem_Decrescente()
{
    int i, j;
    float aux;

    for ( i = 0; i < TAM; i++ )
    {
        for ( j = 0; j < i; j++ )
        {
            if ( cadastro[j] < cadastro[i] )
            {
                aux = cadastro[i];
                cadastro[i] = cadastro[j];
                cadastro[j] = aux;
            }
        }
    }

    cout << "\n -------------------- " << endl;
    for ( i = 0; i < TAM; i++ )
    {
        cout << " - " << cadastro[i] << endl;
    }
    cout << " -------------------- " << endl;
}

// Menu
char Menu(char cod)
{
    cout << "\n\n - Deseja Realizar novas Tarefas ? " << endl;
    cout << " - [s] Sim" << endl;
    cout << " - [n] Não " << endl;
    cout << " - Opc.: ";
    cod = getche();
    cout << "" << endl;

    return (cod);
}
