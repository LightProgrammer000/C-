/// Bibliotecas
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

/// Programa
int main ( int argc , char *argv[] )
{
    while(1)
    {
        int n = 1;
        int i, j, qtd;

        // Sistemas
        setlocale(LC_ALL, "");
        system("cls & color E");

        // Apresentação
        cout << " ========================== " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ========================== \n" << endl;

        cout << " - Digite a Quantidade de Tabuadas que deseja: ";
        cin >> qtd;

        system("cls & color A");
        for ( j = 1; j <= qtd; j++ )
        {
            cout << "\n ---------- Tabuada " << n << " ---------- " << endl;
            for ( i = 1 ; i <= 10; i++ )
            {
                cout << " -> " << n <<" x " << i << " = " << (n * i) << endl;
            }
            n++;
        }
        cout << "\n";
        system("pause");
    }
    return(0);
}
