#include <iostream>
using namespace std;

unsigned int calculoFactorial(unsigned int num);

int main()
{
    unsigned int tam, n, sob;
    unsigned int factTam, factN, factSob, caminos;

    cout<<"Ingrese el tamaño de la cuadricula: ";
    cin>>tam; //Como necesito ordenar los movimientos

    n = 2 * tam; //Cantidad de movimientos
    sob = n - tam; //Aquellos valores que no considero en la permutacion

    factTam = calculoFactorial(tam);
    factN = calculoFactorial(n);
    factSob = calculoFactorial(sob);
    caminos = (factN)/(factTam*factSob);

    cout << "Los posibles caminos que puede recorrer son: " << caminos;

    return 0;
}


unsigned int calculoFactorial(unsigned int num){
    unsigned resultado = 1;

    for(unsigned int i = 1  ; i <= num; ++i){
        resultado *= i;
    }

    return resultado;
}

