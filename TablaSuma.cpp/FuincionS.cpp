
#include <iostream>
#include <string>

using namespace std;

void Bienvenida(){
    string NomE= "Carlos Talavera";
    string nombre;
    string usuario;
    cout << "Dime tu nombre " << endl;
    cin >> nombre;
    cout << "Dime tu usuario " << endl;
    cin >> usuario;
    cout << "Bienvenido a este programa " << nombre << "Ha accedido con el usuario " << usuario << endl;
    cout << "Este programa ha sido hecho con el obejtivo de demostrar las habilidades del estudiante de ing en sistemas " << NomE << endl;
}