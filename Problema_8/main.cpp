#include <iostream>

using namespace std;

int main()
{
    char cadenaCaracteres[30];
    char numeros[15];
    char letras[15];
    unsigned int posCaracteres = 0, posLetras = 0, posNumeros = 0;

    cout<<"Escribe una cadena de caracteres: ";
    cin.getline(cadenaCaracteres, 30);

    while(cadenaCaracteres[posCaracteres] != '\0'){

        if(cadenaCaracteres[posCaracteres] >= '0' && cadenaCaracteres[posCaracteres] <='9'){
            numeros[posNumeros] = cadenaCaracteres[posCaracteres];
            posNumeros++;
        }
        else{
            letras[posLetras] = cadenaCaracteres[posCaracteres];
            posLetras++;
        }
        posCaracteres++;

    }

    //Agrego el elemento nulo en numeros y letras
    numeros[posNumeros] = '\0';
    letras[posLetras] = '\0';

    cout<<"Original: "<<cadenaCaracteres<<endl;
    cout<<"Texto: "<<letras<<" "<<"Numeros: "<<numeros;

    return 0;
}
