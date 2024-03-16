#include <iostream>
using namespace std;

unsigned int cantLetra (char letra, char arr[]);

int main()
{
    char arr[20];
    char letra;

    //Este for me genera el arreglo aleatorio
    for(unsigned int i = 0; i < 20; ++i){
        //El 65 representa el valor de 'A' en ascii
        letra = rand() % 26 + 65;
        arr[i] = letra;
    }

    //Este for me muestra los valores en el arreglo
    for(unsigned int j = 0; j < 20; ++j){
        cout<<arr[j];
    }

    cout<<endl;

    for(char letra = 'A'; letra <= 'Z'; ++letra){
        cout<<letra<<": "<<cantLetra(letra, arr)<<endl;
    }

    return 0;
}


unsigned int cantLetra (char letra, char arr[]){
    unsigned int cont = 0;

    for(unsigned int i = 0; i < 20; ++i){
        if(arr[i] == letra) cont++;
    }

    return cont;

}
