#include <iostream>

using namespace std;

int main()
{
    char caracteres[20];
    int pos = 0;

    cout<<"Ingrese un cadena de caracteres: ";
    cin.getline(caracteres,20);

    //Por defecto cuando inicializamos un tipo de dato que almacena caracteres, este finaliza con el caracter null \0
    while(caracteres[pos] != '\0'){
        //Hago comparciones con sus valores en la tabla ascii
        if(caracteres[pos] >= 'a' && caracteres[pos] <= 'z'){
            //Le resto 32 ya que es la realcion que hay entre una letra minuscula y mayuscula de acuerdo a su valor en la tabla ascii
            caracteres[pos] = caracteres[pos]-32;
        }
        pos++;
    }

    cout<<caracteres;


    return 0;
}
