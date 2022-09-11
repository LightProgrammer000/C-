/// Bibliotecas
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
 
/// Funções
void Vida();
char Menu (char cod);
 
/// Programa
int main( int argc, char *argv[] )
{
    // Variável Estratégica
    char cod = 'A';
 
    // Estrutura de Repetição
    while ( cod != 'n' && cod != 'N' )
    {
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
 
        Vida();
 
        // Menu Interativo
        cod = Menu(cod);
    }
 
    return(0);
}
 
// Menu
char Menu (char cod)
{
    // Entrada de Dados
    cout << "\n - Deseja Retornar ?" << endl;
    cout << " - [s] Sim \n - [n] Não" << endl;
    cout << " - Opc: ";
    cod = getche();
    cout << "" << endl;
 
    return(cod);
}
 
// Vida
void Vida()
{
    // Variáveis
    int ida;
    int seg, mit, hor, dia, sem, mes;
 
    // Entrada de Dados
    cout << "\n ============== " << endl;
    cout << "      VIDA      " << endl;
    cout << " ============== " << endl;
 
    cout << "\n - Digite a sua Idade: ";
    cin >> ida;
 
    // Cálculos
    seg = ida * 365 * 24 * 60 * 60;
    mit = ida * 365 * 24 * 60;
    hor = ida * 365 * 24;
    dia = ida * 365;
    sem = ida * 365 / 52;
    mes = ida * 365 / 12;
 
    // Entrada de Dados
    system("cls & color B");
    cout << "\n =================== " << endl;
    cout << "      RESULTADO      " << endl;
    cout << " =================== " << endl;
    cout << "\n - Segundos: " << seg << endl;
    cout << "\n - Minutos: " << mit << endl;
    cout << "\n - Horas: " << hor << endl;
    cout << "\n - Dias: " << dia << endl;
    cout << "\n - Semanas: " << sem << endl;
    cout << "\n - Meses: " << mes << endl;
}
