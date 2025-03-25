#include <iostream>

using namespace std;

/* Q: Fazer uma função que receba 3 números reais como parâmetros, A, B e C, e os ordene de tal forma que, ao final da função, A contenha o menor número e C o maior. Em seguida, fazer um programa que receba 3 números do usuário, chame a função e mostre os números ordenados.*/

void ordenaNumeros(float a, float b, float c)
{
    float intermediario = 0;

    if (a > b && a > c)
    { // A maior de todos
        if (b > c)
        { // C menor de todos
            intermediario = a;
            a = c;
            c = intermediario;
        }
        else
        { // B menor de todos
            intermediario = b;
            b = c;
            c = intermediario;

            intermediario = a;
            a = c;
            c = intermediario;
        }
    }
    else if (b > a && b > c)
    { // B maior de todos
        if (a > c)
        { // B maior de todos, A valor medio e C menor de todos

            intermediario = c;
            c = b;
            b = intermediario; // C maior de todos, A valor medio e B menor de todos

            intermediario = b;
            b = a;
            a = intermediario; // C maior de todos, B valor medio e A menor de todos
        }
        else
        { // B maior de todos, C valor medio e A menor de todos
            intermediario = b;
            b = c;
            c = intermediario; // C maior de todos, B valor medio e A menor de todos
        }
    }
    else
    { // C maior de todos
        if (a > b)
        { // C maior de todos, A valor medio e B menor de todos
            intermediario = a;
            a = b;
            b = intermediario; // C maior de todos, B valor medio e A menor de todos
        }
    }

    cout << "Menor (A): " << a << endl;
    cout << "Medio (B): " << b << endl;
    cout << "Maior (C): " << c << endl;
}

int main()
{
    int a = 0, b = 0, c = 0;
    cout << "Insira os valores de A, B e C: " << endl;
    cin >> a >> b >> c;

    ordenaNumeros(a, b, c);

    return 0;
}