// Calculadora
#include <iostream>
#include "funciones1.cpp"
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])

{
    int opcion;
    int num1, num2;

    do
    {
        system("cls");
        system("Color 02");
        cout << "-------------------------- " << endl;
        cout << "Bienvenido a tu calculadora de prueba " << endl;
        cout << "---------------------------------- " << endl;
        cout << "¿Que operacion te gustaria hacer? " << endl;
        cout << "---------------------------- " << endl;
        cout << "1. calcular suma" << endl;
        cout << "2. calcular resta" << endl;
        cout << "3. calcular multiplicacion" << endl;
        cout << "4. calcular division" << endl;
        cout << "5. calcular potencia " << endl;
        cout << "6. salir de calculadora " << endl;
        cout << "Elige tu opcion " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ha seleccionado calcular suma " << endl;
            cout << "Dime un numero " << endl;
            cin >> num1;
            cout << "Dime otro numero " << endl;
            cin >> num2;
            cout << "La respuesta es " << suma(num1, num2) << endl;

            break;

        case 2:
            cout << "Ha seleccionado calcular resta " << endl;
            cout << "Dime un numero " << endl;
            cin >> num1;
            cout << "Dime el otro numero " << endl;
            cin >> num2;
            cout << "La respuesta es " << resta(num1, num2) << endl;
            break;

        case 3:
            cout << "Ha seleccionado calcular multiplicacion " << endl;
            cout << "Dime un numero " << endl;
            cin >> num1;
            cout << "Dime otro numero " << endl;
            cin >> num2;
            cout << "la respuesta es " << multiplic(num1, num2) << endl;
            
        case 4:
            cout << "Ha seleccionado calcular division " << endl;
            cout << "Dime un numero " << endl;
            cin >> num1;
            cout << "Dime otro numero " << endl;
            cin >> num2;
            cout << "La respuesta es " << division(num1, num2) << endl;
            break;

        case 5:
            cout << "Ha seleccionado calcular potencia " << endl;
            cout << "Dime un numero " << endl;
            cin >> num1;
            cout << "Dime la potencia " << endl;
            cin >> num2;
            cout << "La respuesta es " << pot(num1, num2) << endl;
        case 6:
            cout << "Gracias por probar esta calculadora " << endl;

        default:
            break;
        }
        system("Pause");
    } while (opcion != 6);

    return 0;
}
