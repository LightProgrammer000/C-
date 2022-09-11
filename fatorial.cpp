/// Bibliotecas
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

/// Funções
char Menu(char r);

/// Programa
int main ( int argc , char *argv[] )
{
    // Variável Estratégica
    char r = 'A';

    for ( r != 'n'; r != 'n'; )
    {
        // Variáveis
        int i, n, fat = 1, aux;

        // Sistemas
        setlocale(LC_ALL, "");
        system("cls & color F");

        // Apresentação
        cout << " ========================== " << endl;
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Hora: %time:~0,-3%");
        system("echo  - Data: %date:/=-%");
        cout << " ========================== " << endl;

        cout << "\n - Digite um Valor: ";
        cin >> n;

        if ( (n < 0 || n > 13) )
        {
            system("cls");
            cout << "\n\n";
            cout << " - Somente Valores entre 1 e 12\n";
            cout << " - Somente Valores entre 1 e 12\n";
            cout << " - Somente Valores entre 1 e 12\n";
            system("color C & timeout /t 5");
            cout << "\n" <<endl;
        }

        else
        {
            // Controle
            aux = n;

            // Forma 1
            cout << "\n - Forma de Cálculo 1" << endl;
            for ( ; n > 0; n-- )
            {
                if ( n == 1 )
                {
                    cout << "\n - Resultado ["<< n <<"]:  " << (fat *= n) << endl;
                    break;
                }

                else
                {
                    cout << " - [" << n <<"]: " << (fat *= n) << endl;
                }
            }
            cout << " ------------------------------------- \n" << endl;


            // Controle
            fat = 1;

            // Forma 2
            cout << "\n - Forma de Cálculo 2" << endl;
            for ( i = 1; i <= aux; i++ )
            {
                if ( i == aux )
                {
                    cout << "\n - Resultado ["<< i <<"]: " << (fat *= i) << endl;
                    break;
                }

                else
                {
                    cout << " - [" << i <<"]: " << (fat *= i) << endl;
                }
            }

            cout << " ------------------------------------- \n\n" << endl;
            //system("pause");
        }

        r = Menu(r);
    }
    return(0);
}

////////////////////// FUNÇÕES //////////////////////

char Menu(char r)
{
    cout << "\n - Deseja Continuar a Calcular ?" << endl;
    cout << " - [s] Sim" << endl;
    cout << " - [n] Não" << endl;
    cout << " - Opc.: ";
    r = getche();

    return(r);
}
