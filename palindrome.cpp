/// Bibliotecas
#include <string>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/// Funções
void Palidromo( string a);

/// Programa
int main( int argc, char *argv [] )
{
    // Sistemas
    setlocale(LC_ALL, "");

    // Variáveis
    string a;
    int loop = 1;

    while(loop == 1)
    {
        // Apresentação
        cout << endl;
        system("cls & color B");
        system(" echo  ==============================");
        system(" echo  - Usuario: %username%");
        system(" echo  - Computador: %computername%");
        system(" echo  - Hota: %time:~0,-3%");
        system(" echo  - Data: %date%");
        system(" echo  ==============================");
        cout << endl;

        cout << "\n ========== Programa das Frases ========== " << endl;

        // Procedimentos
        cout << "\n - Digite uma Frase : ";
        getline(cin, a);
        Palidromo(a);

        cout << "\n ========================================= \n\n" << endl;
        system("pause");
    }

    return(0);
}

////////////////////////////// FUNÇÕES //////////////////////////////
void Palidromo( string a )
{
    int i;
    string b = "";
    string c = "";

    for ( i = 0; i < a.size(); i++ )
    {
        b += a[i];
    }

    for( i = a.size() - 1 ; i >= 0; i-- )
    {
        c += a[i];
    }

    if ( b == c )
    {
        system("color A");
        cout << " - Palavra [Sentido Correto]: " << b << endl;
        cout << " - Palavra [Sentido Reverso]: " << c << endl;
        cout << " - Resultado: Palíndromo" << endl;
    }

    else
    {
        system("color C");
        cout << " - Palavra [Sentido Correto]: " << b << endl;
        cout << " - Palavra [Sentido Reverso]: " << c << endl;
        cout << " - Resultado: Não é Palíndromo" << endl;
    }
}
