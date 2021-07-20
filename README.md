# Tarea1-GeneradorPassword
Estructura de Datos / Tarea 1

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    char random[15];
    srand(time(NULL));
    for(int i=0; i <= 14; i++)
    random[i] = 33 + rand() % (126 - 33);
    cout <<"Contraseña aleatoria generada: "<<random;
    
}
                                                     
    Explicación:
    Primero creamos nuestro arreglo, luego inicializamos la función random, con el for se recorre cada elemento del arreglo y lo va llenando con el código ASCII hasta que llena los 15 espacios. Finalmente mostramos la contraseña aleatoria que se generó.
