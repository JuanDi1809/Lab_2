#include <iostream>
using namespace std;

int converNumero(char arr[]);

int main()
{
    char caracteres[10];
    int unsigned numero;

    cout<<"Ingrese una cadena numerica: ";
    cin.getline(caracteres,10);

    numero = converNumero(caracteres);

    cout<<"El valor numerico es: "<<numero;


    return 0;
}

int converNumero(char arr[]){
    int unsigned pos = 0, num=0;

    while(arr[pos]!='\0'){
        //El valor de '0' es el numero al que equivale el cero en ascii y el valor de caracteres[cont] tambien es el valor del caracter en ascii
        //La resta entre caracteres es la resta entre los valores en ascii y en este caso me da su valor a entero
        num = num*10 + arr[pos]-'0';
        pos++;
    }

    return num;

}
