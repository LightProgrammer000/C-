/// Bibliotecas
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

/// Funções
float Celsius();
float Fahrenheit();
char Menu (char cod);

/// Programa
int main( int argc, char *argv[] )
{
    // Variável Estratégica
    char cod;

    cod = 'A';
    while ( cod != 'n' && cod != 'N' )
    {
        // Variáveis
        int res;

        // Sistemas
        setlocale(LC_ALL, "");
        system("cls & color A");

        // Apresentação
        cout << " ========================== " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ========================== " << endl;

        // Entrada de Dados
        cout << "\n ==================== " << endl;
        cout << "     TEMPERATURAS     " << endl;
        cout << " ==================== " << endl;
        cout << "\n - Converter Temperatura: " << endl;
        cout << "\n - [1] Celsius \n - [2] Fahrenheit " << endl;
        cout << " - Opc: ";
        cin >> res;

        // Estrutura de Escolha
        switch (res)
        {
            // Celsius
            case 1:
                cout << "\n - Celsius: " << Celsius() << " ºC" << endl;
                break;

            // Fahrenheit
            case 2:
                cout << "\n - Fahrenheit: " << Fahrenheit() << " °F" << endl;
                break;

            default:
                system("cls & color C");
                cout << "\n - Inválido" << endl;
                break;
        }

        // Menu Interativo
        cod = Menu(cod);
    }

    return(0);
}

///////////////////// FUNÇÕES /////////////////////

// Celsius
float Celsius()
{
    float temp;

    system("cls & color E");
    cout << "\n - Digite a Temperatura [Fahrenheit]: ";
    cin >> temp;

    // Conversão: Celsius
    return ( ( temp - 32 ) * 5 / 9 );
}

// Fahrenheit
float Fahrenheit()
{
    float temp;

    system("cls & color E");
    cout << "\n - Digite a Temperatura [Celsius]: ";
    cin >> temp;

    // Conversão: Fahrenheit
    return ( temp * 1.8 + 32 );
}

// Menu
char Menu (char cod)
{
    cout << "\n - Deseja Retornar ?" << endl;
    cout << " - [s] Sim \n - [n] Não" << endl;
    cout << " - Opc: ";
    cod = getche();
    cout << "" << endl;

    return(cod);
}
