#include <iostream>
using namespace std;

void modMatriz(unsigned int matriz1[5][5], unsigned int matriz2[5][5]);
void mostrarMatriz(unsigned int matriz[5][5]);


int main()
{
    unsigned int matOriginal[5][5], mat90[5][5], mat180[5][5], mat270[5][5];
    unsigned int valor = 1;

    for(unsigned int i = 0; i < 5; ++i){
        for(unsigned int j = 0; j < 5; ++j){
            matOriginal[i][j] = valor;
            ++valor;
        }
    }

    modMatriz(matOriginal, mat90);
    modMatriz(mat90, mat180);
    modMatriz(mat180, mat270);

    mostrarMatriz(matOriginal);
    mostrarMatriz(mat90);
    mostrarMatriz(mat180);
    mostrarMatriz(mat270);

    return 0;
}


void modMatriz(unsigned int matriz1[5][5], unsigned int matriz2[5][5]){

    unsigned int fil = 4, col = 0;

    for(unsigned int i = 0; i < 5; ++i){
        for(unsigned int j = 0; j < 5; ++j){
            matriz2[i][j] = matriz1[fil][col];
            --fil;
        }
        fil = 4;
        ++col;
    }

}

void mostrarMatriz(unsigned int matriz[5][5]){
    for(unsigned int k = 0; k < 25; ++k){
        cout<<*(*matriz+k)<<" ";
    }
    cout<<endl;
}
