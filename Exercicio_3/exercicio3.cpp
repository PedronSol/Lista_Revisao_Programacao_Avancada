#include <iostream>
#include <cstdlib>

using namespace std;

/* Q: Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário (sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa deve imprimir uma mensagem informando
se o número sorteado é maior ou menor que a tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade de tentativas feitas.*/

int main()
{

    srand(time(0));

    int numeroAleatorio;

    int chute = 101;

    int tentativas = 0;

    numeroAleatorio = rand() % 101;

    while (chute != numeroAleatorio)
    {
        tentativas++;

        cout << "Insira um valor entre 0 e 100" << endl;

        cin >> chute;

        if (chute > numeroAleatorio)
        {
            cout << "O numero inserido eh maior do que o numero aleatorio, tente novamente!" << endl;
        }
        else if (chute < numeroAleatorio)
        {
            cout << "O numero inserido eh menor do que o numero aleatorio, tente novamente!" << endl;
        }
        else {
            cout << "Parabens, voce acertou em " << tentativas << " tentativas!";
        }
    }

    return 0;
}
