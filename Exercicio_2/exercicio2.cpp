#include <iostream>

using namespace std;

/* Q: Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números. Este funcionamento deve ser repetido até que o símbolo seja algo que não corresponda a nenhuma das quatro operações reconhecidas. */

int main()
{

    char operacao = '+';

    float r1 = 0, r2 = 0;

    while (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/')
    {
        cout << "Insira o simbolo da operacao desejada (+, -, *, /): " << endl;
        cin >> operacao;

        if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/')
        {

            cout << "Insira agora os dois valores a serem operados (em sequencia): " << endl;
            cin >> r1 >> r2;

            switch (operacao)
            {
            case '+':
                cout << "Resultado da operacao: " << r1 + r2 << endl;
                break;

            case '-':
                cout << "Resultado da operacao: " << r1 - r2 << endl;
                break;

            case '*':
                cout << "Resultado da operacao: " << r1 * r2 << endl;
                break;

            default:
                cout << "Resultado da operacao: " << r1 / r2 << endl;
                break;
            }
        }
        else
        {
            cout << "Operacao nao encontrada, finalizando o programa!" << endl;
        }
    }

    return 0;
}