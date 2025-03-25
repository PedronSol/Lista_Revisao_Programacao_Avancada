#include <iostream>

using namespace std;

/* Q: Faça um programa que, dado um valor em reais (sem centavos), mostre a menor combinação existente de notas (R$ 200, 100, 50, 20, 10, 5 e 2) para esse valor. */
/* Nota: A questão não solicitou, mas eu adicionei também o número de notas de 1 real para que qualquer valor pudesse ser aceito */

int main()
{
    int valorEmReal = 0, N200 = 0, N100 = 0, N50 = 0, N20 = 0, N10 = 0, N5 = 0, N2 = 0, N1 = 0, valorInserido = 0;

    cout << "Insira um valor em reais (sem centavos): ";

    cin >> valorEmReal;

    valorInserido = valorEmReal;

    while (valorEmReal > 0)
    {
        if (valorEmReal % 200 == 0)
        {
            N200++;
            valorEmReal -= 200;
        }
        else if (valorEmReal % 100 == 0)
        {
            N100++;
            valorEmReal -= 100;
        }
        else if (valorEmReal % 50 == 0)
        {
            N50++;
            valorEmReal -= 50;
        }
        else if (valorEmReal % 20 == 0)
        {
            N20++;
            valorEmReal -= 20;
        }
        else if (valorEmReal % 10 == 0)
        {
            N10++;
            valorEmReal -= 10;
        }
        else if (valorEmReal % 5 == 0)
        {
            N5++;
            valorEmReal -= 5;
        }
        else if (valorEmReal % 2 == 0)
        {
            N2++;
            valorEmReal -= 2;
        }
        else
        {
            N1++;
            valorEmReal -= 1;
        }
    }

    cout << "O menor numero de cedulas que resulta no valor " << valorInserido << " eh: " << endl;
    cout << "Cedulas de 200: " << N200 << endl;
    cout << "Cedulas de 100: " << N100 << endl;
    cout << "Cedulas de 50: " << N50 << endl;
    cout << "Cedulas de 20: " << N20 << endl;
    cout << "Cedulas de 10: " << N10 << endl;
    cout << "Cedulas de 5: " << N5 << endl;
    cout << "Cedulas de 2: " << N2 << endl;
    cout << "Cedulas de 1: " << N1 << endl;

    return 0;
}