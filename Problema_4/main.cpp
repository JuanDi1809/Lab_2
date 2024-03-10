#include <iostream>
using namespace std;

int converNumero(char arreglo[]);

int main()
{
    char caracteres[10];
    int unsigned numero;

    cout<<"Ingrese una cadena: ";
    cin.getline(caracteres,20);

    numero = converNumero(caracteres);

    cout<<"El valor numerico es: "<<numero;


    return 0;
}

int converNumero(char caracteres[]){

    int unsigned cont = 0, num=0;

    while(caracteres[cont]!='\0'){
        num = num*10 + caracteres[cont]-'0';
        cont++;
    }

    return num;

}
