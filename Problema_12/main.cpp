#include <iostream>
using namespace std;

int main()
{
    unsigned int tam, sumaFila = 0, sumaColumna = 0, sumaDiagonal = 0;

    cout<<"Ingrese el tamagno de la matriz cuadrada: ";
    cin>>tam;

    unsigned int M[tam][tam];

    for(unsigned int i = 0; i < tam; i++){
        for(unsigned int j = 0; j < tam; j++){

            cout<<"Ingrese el valor para la fila "<<i<<" columna "<<j<<": ";
            cin>>M[i][j];
        }
    }

    for(unsigned int i = 0; i < tam; i++){
        sumaFila += *(*M+i);//Esta suma es de los valores de la primera fila;
        sumaColumna += *(*(M + i)); //Esta suma es de los valores de la primera columna
        sumaDiagonal += *(*(M + i) + i); //Esta suma es de la diagonal principal
    }

    if(sumaFila == sumaColumna && sumaFila == sumaDiagonal && sumaColumna == sumaDiagonal){
        cout<<"La matriz es magica";
    }
    else{
        cout<<"La matriz no es magica";
    }

    return 0;
}
