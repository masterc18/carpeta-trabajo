#include <iostream>

using namespace std;

//Prototipo de funciones

void saludo();
void fecha();
void cumpl();

//Definicion de funcion

void saludo(){
    cout << "Hola, te invito a jugar una partida de fortnite en mi cumpleanos" << endl;
}

void fecha(){
    cout << "El dia 18 de octubre del 2023 " << endl;
}

void cumpl(){
    int anios = 19;
    cout << " para celebrar mis " << anios << " anios" << endl;
}

int main(int argc, char const *argv[])
{
    saludo();
    fecha();
    cumpl();

    return 0;
}
