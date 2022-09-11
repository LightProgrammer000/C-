/// Bibliotecas
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/// Funções
void Peso();
char Menu(char cod);
string Analise(float imc);
float Calc_IMC(float pes, float alt);

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

        cout << "\n\n ================== " << endl;
        cout << "     RESULTADOS     " << endl;
        cout << " ================== " << endl;

        // Chamada de Procedimento
        Peso();

        // Menu
        cod = Menu(cod);
    }

    return(0);
}
///////////////////////// FUNÇÕES /////////////////////////

// Peso
void Peso()
{
    // Variáveis
    float alt;
    float pes;

    // Entrada de Dados
    cout << "\n - Digite seu Peso: ";
    cin >> pes;

    cout << "\n - Digite a Altura: ";
    cin >> alt;

    cout << "\n ======================================= " << endl;
    cout << " - IMC [" << Calc_IMC(pes, alt) <<"]: " << Analise(Calc_IMC(pes, alt)) << endl;
    cout << " ======================================= " << endl;
}

// Cálculo de IMC
float Calc_IMC( float pes, float alt )
{
    // Variáveis
    float imc;

    // Cálculos
    imc = pes / pow(alt, 2) ;

    // Retorno
    return(imc);
}

// Análise
string Analise( float imc )
{
    if (imc < 0 )
    {
        return " - Inválido";
    }

    else
    {
        if ( imc < 17 )
        {
            return "Muito Abaixo do Peso";
        }

        if ( imc >= 17 && imc < 18.49 )
        {
            return "Abaixo do Peso";
        }

        if ( imc > 18.5 && imc <= 24.99 )
        {
            return "Abaixo do Peso";
        }

        if ( imc >= 25 && imc <= 29.99 )
        {
            return "Acima do Peso";
        }

        if ( imc >= 30 && imc <= 34.99 )
        {
            return " - Obesidade I";
        }

        if ( imc >= 35 && imc <= 39.99 )
        {
            return " - Obesidade II (Severa)";
        }

        if ( imc >= 40 )
        {
            return " - Obesidade III (Mórbida)";
        }
    }

    return(0);
}

// Menu
char Menu(char cod)
{
    cout << "\n\n - Deseja Voltar ao Programa ? " << endl;
    cout << " - [s] Sim" << endl;
    cout << " - [n] Não " << endl;
    cout << " - Opc.: ";
    cod = getche();
    cout << "" << endl;

    return (cod);
}
