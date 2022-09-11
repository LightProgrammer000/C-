/// Bibliotecas
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/// Definições
const double pi = M_PI;

/// Funções
void Menu_Area();
char Menu(char cod);
void Area_Circulo();
void Area_Esfera();
void Area_Triangulo();
void Area_Trapezio();
void Area_Cilindro();

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
        Menu_Area();

        // Menu
        cod = Menu(cod);
    }

    return(0);
}
///////////////////////// FUNÇÕES /////////////////////////

// Menu Com Opções
void Menu_Area()
{
    int opc;

    cout << "\n ========================= " << endl;
    cout << " - [1] Área do Círculo " << endl;
    cout << " - [2] Área do Esfera " << endl;
    cout << " - [3] Área do Triângulo " << endl;
    cout << " - [4] Área do Trapézio " << endl;
    cout << " - [5] Área do Cilindro " << endl;
    cout << " ========================= " << endl;
    cout << "\n - Opc.: ";
    cin >> opc;

    // Estrutura Escolha
    switch(opc)
    {
        case 1:
            Area_Circulo();
            break;

        case 2:
            Area_Esfera();
            break;

        case 3:
            Area_Triangulo();
            break;

        case 4:
            Area_Trapezio();
            break;

        case 5:
            Area_Cilindro();
            break;

        default:
            system("cls & color C");
            break;
    }
}

// Procedimento: Area_Circulo
void Area_Circulo()
{
    // Variáveis
    float r;
    float area;

    system("cls & color A");
    cout << " ======================= " << endl;
    cout << "     Área do Círculo     " << endl;
    cout << " ======================= " << endl;

    cout << "\n - Digite o Raio: ";
    cin >> r;

    // Cálculo
    area = pi * pow(r,2);

    // Mensagem
    cout << "\n - Área do Círculo: " << area << endl;
}

// Procedimento: Area_Esfera
void Area_Esfera()
{
    // Variáveis
    float r;
    float area;

    system("cls & color A");
    cout << " ====================== " << endl;
    cout << "     Área da Esfera     " << endl;
    cout << " ====================== " << endl;

    cout << "\n - Digite o Raio: ";
    cin >> r;

    // Cálculo
    area = 4 * pi * pow(r,2);

    // Mensagens
    cout << "\n - Área da Esfera: " << area << endl;
}

// Procedimento: Area_Triangulo
void Area_Triangulo()
{
    // Variáveis
    int i, j;
    float aux, area, alt;
    float lado[3]; // Quantidade de Vetores: 3
    bool analise_1, analise_2, analise_3;

    system("cls & color A");
    cout << " ========================= " << endl;
    cout << "     Área do Triângulo     " << endl;
    cout << " ========================= " << endl;

    // Entrada de Dados
    for ( i = 0; i < 3; i ++ )
    {
        cout<< "\n - Digite " <<(i + 1) <<"º lado: ";
        cin >> lado[i];
    }

    // Existência do Triângulo - Inválida
    analise_1 = lado[0] < lado[1] + lado[2];
    analise_2 = lado[1] < lado[0] + lado[2];
    analise_3 = lado[2] < lado[0] + lado[1];

    if( !(analise_1 && analise_2 && analise_3) )
    {
        cout << " - Existencia de Triângulo Inválida " << endl;
    }

    // Existência do Triângulo - Válida
    else
    {
        // Ordem Crescente
        for ( i = 0; i < 3; i ++ )
        {
            for ( j = 0; j < i ; j ++ )
            {
                if ( lado[j] > lado[i] )
                {
                    aux = lado[i];
                    lado[i] = lado[j];
                    lado[j] = aux;
                }
            }
        }

        // Equilátero
        if ( (lado[0] == lado[1]) && (lado[0] == lado[2]) && (lado[1] == lado[2]) )
        {
            cout << " - Equilatero" << endl;

            // Cálculos
            area = (pow(lado[0],2) * sqrt(3) ) / 4;

            // Mensagens
            cout << "\n - Área do Triângulo: " << area << endl;
        }

        // Escaleno
        else if ( (lado[0] != lado[1]) && (lado[0] != lado[2]) && (lado[1] != lado[2]) )
        {
            cout << "\n - Escaleno" << endl;
            cout<< "\n - Digite a Altura: ";
            cin >> alt;

            // Cálculos
            area = (lado[2] * alt) / 2 ;

            // Mensagens
            cout << "\n - Área do Triângulo: " << area << endl;
        }

        // Isósceles
        else
        {
            cout << "\n - Isósceles" << endl;
            cout<< "\n - Digite a Altura: ";
            cin >> alt;

            // Cálculos
            area = (lado[2] * alt) / 2 ;

            // Mensagens
            cout << "\n - Área do Triângulo: " << area << endl;

            // Mensagens
            cout << "\n - Área do Triângulo: " << area << endl;
        }
    }
}

// Procedimento: Area_Trapezio
void Area_Trapezio()
{
    // Variáveis
    float bM;
    float bm;
    float alt;
    float area;

    system("cls & color A");
    cout << " ======================== " << endl;
    cout << "     Área do Trapézio     " << endl;
    cout << " ======================== " << endl;

    cout << "\n - Digite a Base[Maior]: ";
    cin >> bM;

    cout << "\n - Digite a Base[Menor]: ";
    cin >> bm;

    cout << "\n - Digite a Altura: ";
    cin >> alt;

    // Cálculo
    area = ( ( bM + bm ) / 2 ) * alt ;

    // Mensagens
    cout << "\n - Área do Círculo: " << area << endl;
}

// Procedimento: Area_Cilindro
void Area_Cilindro()
{
    float r;
    float alt;
    float area;

    system("cls & color A");
    cout << " ======================== " << endl;
    cout << "     Área do Cilindro     " << endl;
    cout << " ========================= " << endl;

    cout << "\n - Digite o Raio: ";
    cin >> r;

    cout << "\n - Digite a Altura: ";
    cin >> alt;

    // Cálculo
    area = pi * alt * pow(r,2) * alt ;

    // Mensagens
    cout << "\n - Área do Cilindro: " << area << endl;
}

// Menu
char Menu(char cod)
{
    cout << "\n\n - Deseja Realizar novos Cálculos ? " << endl;
    cout << " - [s] Sim" << endl;
    cout << " - [n] Não " << endl;
    cout << " - Opc.: ";
    cod = getche();
    cout << "" << endl;

    return (cod);
}
