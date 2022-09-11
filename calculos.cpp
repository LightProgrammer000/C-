/// Bibliotecas
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/// Funções
char Menu(char cod);
void Menu_Completo();
void Alfabeto_Completo();
void Alfabeto_Especifico();
void Multiplos_3();
void Multiplos_N();
void Tabuada();
void Fibonacci();

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
        Menu_Completo();

        // Menu Interativo
        cod = Menu(cod);
    }

    return(0);
}
/////////////////////////// FUNÇÕES ///////////////////////////

// Menu Completo
void Menu_Completo()
{
    // Variáveis
    int opc;

    // Apresentação 1
    cout << "\n\n ================== " << endl;
    cout << "     RESULTADOS     " << endl;
    cout << " ================== \n" << endl;
    cout << " - [1] Alfabeto Completo " << endl;
    cout << " - [2] Alfabeto Específico " << endl;
    cout << " - [3] Multiplos de 3" << endl;
    cout << " - [4] Multiplos de N" << endl;
    cout << " - [5] Tabuada" << endl;
    cout << " - [6] Sequência de Fibonacci" << endl;
    cout << " - Opc.: ";
    cin >> opc;

    // Proteção Inicial
    while( opc < 1 || opc > 6 )
    {
        system("cls");
        cout << "\n\n ================== " << endl;
        cout << "     RESULTADOS     " << endl;
        cout << " ================== \n" << endl;
        cout << " - [1] Alfabeto Completo " << endl;
        cout << " - [2] Alfabeto Específico " << endl;
        cout << " - [3] Multiplos de 3" << endl;
        cout << " - [4] Multiplos de N" << endl;
        cout << " - [5] Tabuada" << endl;
        cout << " - [6] Sequência de Fibonacci" << endl;
        cout << " - Opc.: ";
        cin >> opc;
    }

    // Estrutura de Escolha
    switch(opc)
    {
        case 1:
            Alfabeto_Completo();
            break;

        case 2:
            Alfabeto_Especifico();
            break;

        case 3:
            Multiplos_3();
            break;

        case 4:
            Multiplos_N();
            break;

        case 5:
            Tabuada();
            break;

        case 6:
            Fibonacci();
            break;

        default:
            break;
    }
}

// Alfabeto_Completo: Alfabeto A - Z
void Alfabeto_Completo()
{
    // Variáveis
    int i;

    // Variável Lista
    char a[] = {'a','b','c','d','e','f','g','h','i',
                'j','k','l','m','n','o','p','q','r',
                's','t','u','v','w','x','y','z'
               };

    system("cls & color A");
    cout << " ===== Alfabeto Completo ===== " << endl;

    // Apresentação
    for ( i = 0; i < 26 ; i ++ )
    {
        cout << "\n - Letra["<< (i+1) <<"]: " << a[i];
    }
    cout << "\n ============================= " << endl;
}

// Letras do Alfabeto a partir de uma Letra Digitada
void Alfabeto_Especifico()
{
    // Variáveis
    int i;
    int inicio;
    char letra;

    // Variável Lista
    char a[] = {'a','b','c','d','e','f','g','h','i',
                'j','k','l','m','n','o','p','q','r',
                's','t','u','v','w','x','y','z'
               };

    system("cls & color A");
    cout << "\n ===== Alfabeto Específico ===== " << endl;

    // Entrada de Dados
    cout << "\n - Digite uma Letra: ";
    cin >> letra;

    // Apresentação
    for ( i = 0; i < 26 ; i ++ )
    {
        if( letra == a[i] )
        {
            // Posição do Número Escolhido
            inicio = i;

            // Saídad do Loop
            break;
        }
    }

    cout << "\n ===================== " << endl;
    // Estrutura de Repetição: Começando pela Posição do Número Escolhido
    for ( inicio = i ; inicio < 26 ; inicio ++ )
    {
        cout << " - Letra["<< (inicio + 1) <<"]: " << a[inicio] << endl;
    }
    cout << " ============================= " << endl;
}

// Múltiplos de 3: Entre 0 - 100
void Multiplos_3()
{
    // Variável
    int i;

    system("cls & color A");
    cout << " ===== Múltiplos de 3 ===== " << endl;

    // Estrutura de Repetição: Números Divísíveis por 3 com Resto 0
    for ( i = 1; i <= 100; i ++ )
    {
        // Módulo
        if ( ( i % 3 ) == 0 )
        {
            cout << " - " << i << endl;
        }
    }
    cout << " ========================== " << endl;
}

// Múltiplos de N Entre 0 - 100.
void Multiplos_N()
{
    // Variáveis
    int i;
    int n;

    system("cls & color A");
    cout << "\n ===== Múltiplos ===== " << endl;

    // Entrada de Dados
    cout << "\n - Digite um Número: ";
    cin >> n;

    cout << "\n ===================== " << endl;
    // Estrutura de Repetição: Resto da Divisão = 0
    for ( i = 1; i <= n; i ++ )
    {
        // Módulo
        if ( (n % i) == 0 )
        {
            cout << " - " << i << endl;
        }
    }
    cout << " ===================== " << endl;
}

// Tabuada
void Tabuada()
{
    // Variáveis
    int i;
    int n;

    system("cls & color A");
    cout << "\n ===== Tabuada ===== " << endl;

    // Entrada de Dados
    cout << "\n - Digite um Número: ";
    cin >> n;

    cout << "\n ===================== " << endl;
    // Estrutura de Repetição: Multiplicação
    for ( i = 1; i <= 10; i ++ )
    {
        cout << " - " <<n <<" x " <<i <<" = " <<(n * i) << endl;
    }
    cout << " ===================== " << endl;
}

// Fibionacci: ( 1, 1, 2, 3, 5, 8, 13, 21… )
void Fibonacci()
{
    // Variáveis de Controle
    int qtd;
    int i = -1;

    // Variáveis de Resultado
    double a = 1;
    double b = 0;

    system("cls & color A");
    cout << "\n ===== FiboNacci ===== " << endl;

    // Entrada de Dados
    cout << "\n - Digite a Quantidade de Elementos da Sequência FiboNacci: ";
    cin >> qtd;

    cout << "\n ===================== " << endl;
    // Estrutura em Loop: Controle de Fluxo
    while ( i < qtd )
    {
        // Analisar se Contador = Quantidade de Números Escolhida
        i++; // Incrementador
        if ( i == qtd )
        {
            // Quebra do Fluxo
            break;
        }

        // Apresentação do A
        cout << " - " << a << endl;

        // Incrementado o Valor de B com A
        b += a;

        // Analisar se Contador = Quantidade de Números Escolhida
        i++; // Incrementador
        if ( i == qtd )
        {
            // Quebra do Fluxo
            break;
        }

        // Incrementado o Valor de A em B;
        cout << " - " << b << endl;
        a += b;
    }
    cout << " ======================= " << endl;
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
