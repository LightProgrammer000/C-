/// Bibliotecas
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Variáveis Globais
float nota[3];

/// Funções
void Ordenamento();
char Menu(char cod);
void Entrada_Dados();

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

        // Apresentação 1
        cout << " ========================== " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ========================== " << endl;

        cout << "\n\n ================== " << endl;
        cout << "     RESULTADOS     " << endl;
        cout << " ================== " << endl;

        // Chamada de Procedimentos
        Entrada_Dados();
        Ordenamento();

        // Menu
        cod = Menu(cod);
    }

    return(0);
}
//////////////////// FUNÇÕES ////////////////////

// Entrada_Dados
void Entrada_Dados()
{
    int i;

    for ( i = 0; i < 3 ; i++ )
    {
        cout << "\n - Digite o valor: ";
        cin >> nota[i];
    }
}

// Ordernamento
void Ordenamento()
{
    int i, j;
    float aux;

    system("cls & color B");
    cout << "\n\n ======== DADOS ======== " << endl;
    cout << " - Valor [x] = " << nota[0] << endl;
    cout << " - Valor [y] = " << nota[1] << endl;
    cout << " - Valor [z] = " << nota[2] << endl;
    cout << " ======================= " << endl;

    // Ordem Crescente
    for ( i = 0; i < 3; i ++ )
    {
        for ( j = 0; j < i ; j ++ )
        {
            if ( nota[j] > nota[i] )
            {
                aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
            }
        }
    }

    cout << "\n\n ===== ORDENAMENTO ===== " << endl;
    cout << " - Valor [x] = " << nota[0] << endl;
    cout << " - Valor [y] = " << nota[1] << endl;
    cout << " - Valor [z] = " << nota[2] << endl;
    cout << " ======================= " << endl;
}

// Menu
char Menu( char cod )
{
    cout << "\n - Deseja Voltar ao Programa ? " << endl;
    cout << " - [s] Sim" << endl;
    cout << " - [n] Não " << endl;
    cout << " - Opc.: ";
    cod = getche();
    cout << "" << endl;

    return (cod);
}
