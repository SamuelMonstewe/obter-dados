
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <locale>
#include <string>
using namespace std;


int encontrarMediaNumerosInteiros(int NumerosInteiros[5]);

int main()
{
    int NumerosInteiros[5];
    int MaiorNumero = -99;
    int SomaDosNumeros = 0;
    int MenorNumero = 1000000;
    int ContadorDeZeros = 0;
    int ContadorDeNegativos = 0;
    double PercentualDeZeros;
    unsigned short int PosicaoMenorNumero;


    for (int i = 0; i < 5; i++) 
    {
        cout << "Digite um numero: ";
        cin >> NumerosInteiros[i];

        SomaDosNumeros += NumerosInteiros[i];

        if (NumerosInteiros[i] > MaiorNumero )
        {
            MaiorNumero = NumerosInteiros[i];
        }
        if (NumerosInteiros[i] < MenorNumero)
        {
            MenorNumero = NumerosInteiros[i];
            PosicaoMenorNumero = i;
        }
        if (NumerosInteiros[i] == 0)
        {
            ContadorDeZeros++;
        }
        if (NumerosInteiros[i] < 0)
        {
            ContadorDeNegativos++;
        }
        if (NumerosInteiros[i] >= 100 && NumerosInteiros[i] <= 200) 
        {
            cout << "Posicao do numero entre 100 e 200: " << i << endl;
        }

        PercentualDeZeros = (ContadorDeZeros * 100) / 5;
    }   
    cout << "Soma dos numeros fornecidos: " << SomaDosNumeros << endl
        << "Maior numero fornecido: " << MaiorNumero << endl
        << "Menor numero: " << MenorNumero << endl
        << "Posicao do menor numero: " << PosicaoMenorNumero << endl
        << "Media dos numeros: " << encontrarMediaNumerosInteiros(NumerosInteiros) << endl
        << "Quantidade de vezes que foi digitado zero: " << ContadorDeZeros << endl
        << "Percentual de zeros: " << PercentualDeZeros << "%" <<  endl
        << "Quantos numeros negativos foram fornecidos: " << ContadorDeNegativos << endl
        

        
}

    

int encontrarMediaNumerosInteiros(int NumerosInteiros[5])
{
    int SomaDosNumeros = 0;
    double ResultadoDaMedia;

    for (int i = 0; i < 5; i++) 
    {
        SomaDosNumeros += NumerosInteiros[i];
    }
    ResultadoDaMedia = SomaDosNumeros / 5;

    return ResultadoDaMedia;
}

