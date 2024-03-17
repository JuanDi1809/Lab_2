#include <iostream>
using namespace std;

const unsigned int tam = 5;
void modMatriz(unsigned int matriz1[][tam], unsigned int matriz2[][tam]);
void mostrarMatriz(unsigned int matriz[][tam]);

int main()
{
    unsigned int matOriginal[tam][tam], mat90[tam][tam], mat180[tam][tam], mat270[tam][tam];
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


void modMatriz(unsigned int matriz1[][tam], unsigned int matriz2[][tam]){

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

void mostrarMatriz(unsigned int matriz[][tam]){
    for(unsigned int k = 0; k < 25; ++k){
        cout<<*(*matriz+k)<<" ";
    }
    cout<<endl;
}
