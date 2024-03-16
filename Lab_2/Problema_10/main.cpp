#include <iostream>
using namespace std;

int valorPorLetra(char letras[], unsigned int valorLetras[], char letra);

int main()
{
    char letras[] = {'M','D','C','L','X','V','I'};
    unsigned int valorLetras[] = {1000, 500, 100, 50, 10, 5, 1};
    unsigned int pos = 0, numArabigo = 0, num1, num2;
    char numRomano[15];

    cout<<"Ingrese un numero romano: ";
    cin.getline(numRomano, 15);

    while( numRomano[pos] != '\0'){

        //Hago esta validacion porque la comparacion de si se restan o se suman es cada 2 numeros y la posicon de el segundo numero cada 2 es impar
        if(pos % 2 != 0){
            num1 = valorPorLetra(letras, valorLetras, numRomano[pos-1]);
            num2 = valorPorLetra(letras, valorLetras, numRomano[pos]);

            if(num2 <= num1){
                numArabigo += num1 + num2;
            }
            else{
                //En este caso volteo la opreacion ya que num2 va a ser mas grande que num1
                numArabigo += num2 - num1;
            }
        }

        pos++;
    }

    if(pos % 2 == 0){
        cout<<numArabigo;
    }
    else{
        //En caso de que el numero romano no sea una cantidad de letras pares, haria falta sumar el valor de la ultima letra
        //Cont-1 lo hago porque en el cont va a ser una posicion mas de la utlima en el numero romano
        cout<<numArabigo +  valorPorLetra(letras, valorLetras, numRomano[pos-1]);
    }

    return 0;
}

int valorPorLetra(char letras[], unsigned int valorLetras[], char letra){
    unsigned int valor = 0;

    for(unsigned int i = 0; i < 7; i++){
        if(letras[i] == letra){
            valor = valorLetras[i];
            break;
        }
    }

    return valor;
}






