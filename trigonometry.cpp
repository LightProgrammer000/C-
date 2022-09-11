/// Bibliotecas
#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

/// Funções
void Controle(int opc);
char Menu (char cod);
void Seno();
void Cosseno();
void Tangente();
void Logaritmo_Neperiano();
void Logaritmo_10();
void Potencia();
void Raiz();
void Comprimento_Circunferencia();

/// Programa
int main( int argc, char *argv[] )
{
    // Variável Estratégica
    int opc;
    char cod = 'A';

    // Estrutura de Repetição
    while ( cod != 'n' && cod != 'N' )
    {
        // Sistemas
        setlocale(LC_ALL, "");
        system("cls & color A");

        // Apresentação 1
        cout << " ========================== " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ========================== " << endl;

        // Apresentação 2
        cout << "\n\n =================== " << endl;
        cout << "     Calculadora     " << endl;
        cout << " =================== \n" << endl;

        cout << " - [1] Seno" << endl;
        cout << " - [2] Cosseno" << endl;
        cout << " - [3] Tangente" << endl;
        cout << " - [4] Logaritmo_Neperiano" << endl;
        cout << " - [5] Logaritmo [Base 10]" <<endl;
        cout << " - [6] Potência" << endl;
        cout << " - [7] Raiz" << endl;
        cout << " - [8] Comprimento da Circunferência" << endl;
        cout << " - Opc: ";
        cin >> opc;

        // Chamada de Função
        Controle(opc);

        // Menu Interativo
        cod = Menu(cod);
    }

    return(0);
}

//////////////////// FUNÇÕES ////////////////////

// Controle de Fluxo
void Controle(int opc)
{
    // Escolha
    switch (opc)
    {
        case 1:
            Seno();
            break;

        case 2:
            Cosseno();
            break;

        case 3:
            Tangente();
            break;

        case 4:
            Logaritmo_Neperiano();
            break;

        case 5:
            Logaritmo_10();
            break;

        case 6:
            Potencia();
            break;

        case 7:
            Raiz();
            break;

        case 8:
            Comprimento_Circunferencia();
            break;

        default:
            system("cls & color c");
            cout << "\n\n - Inválido !!!" << endl;
    }
}

// Seno
void Seno()
{
    double sen = 0;

    system("cls & color E");
    cout << "\n - Valor do Ângulo [Graus] : ";
    cin >> sen;

    // Seno
    sen /= 57.295804069049630414;

    cout << "\n - Seno: " << sin(sen);
}

// Cosseno
void Cosseno()
{
    double c = 0;

    system("cls & color E");
    cout << "\n - Valor do Ângulo [Graus] : ";
    cin >> c;

    // Seno
    c /= 57.295804069049630414;

    cout << "\n - Seno: " << cos(c);
}

// Tangente
void Tangente()
{
    double t = 0;

    system("cls & color E");
    cout << "\n - Valor do Ângulo [Graus] : ";
    cin >> t;

    // Cosseno
    t /= 57.295804069049630414;

    cout << "\n - Tangente: " << tan(t);
}

// Logaritmo Neperiano
void Logaritmo_Neperiano()
{
    double l = 0;

    system("cls & color E");
    cout << "\n - Valor: ";
    cin >> l;

    cout << "\n - Logaritmo Neperiano: " << log(l);
}

// Logaritmo na Base [10]
void Logaritmo_10()
{
    double l = 0;

    system("cls & color E");
    cout << "\n - Valor: ";
    cin >> l;

    cout << "\n - Logaritmo Base[10]: " << log10(l);
}

// Potencia
void Potencia()
{
    double e = 0;
    double b = 0;

    system("cls & color E");

    cout << "\n - Base: ";
    cin >> b;

    cout << "\n - Expoente: ";
    cin >> e;

    cout << "\n - Potência ["<<b <<"^" <<e <<"]: " << pow( b , e );
}

// Raiz
void Raiz()
{
    double e = 0;
    double b = 0;

    system("cls & color E");

    cout << "\n - Numero: ";
    cin >> b;

    cout << "\n - Raiz: ";
    cin >> e;

    cout << "\n - Raiz " <<"[" <<e <<"]" <<" de " <<b <<": " << pow( b , pow( e, -1 ) );
}

// Comprimento_Circunferencia
void Comprimento_Circunferencia()
{
    double r = 0;

    system("cls & color E");
    cout << "\n - Raio: ";
    cin >> r;

    cout << "\n - Comprimento da Circunferência: " << 2 * M_PI * r;
}

// Menu
char Menu (char cod)
{
    // Entrada de Dados
    cout << "\n\n - Deseja Retornar ?" << endl;
    cout << " - [s] Sim \n - [n] Não" << endl;
    cout << " - Opc: ";
    cod = getche();
    cout << "" << endl;

    return(cod);
}
