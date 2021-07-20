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
