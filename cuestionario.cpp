#include <iostream>
#include <string>
#include <conio.h>
#include "funciones2.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    string resp1, resp2;
    char resp3;

    do
    {
        system("cls");
        system("color 04 ");
        cout << "------------------------ " << endl;
        cout << "Bienvenido a este cuestionario de Cultura general " << endl;
        cout << "-------------------------------- " << endl;
        cout << "Seleccione que pregunta gustaria responder " << endl;
        cout << "----------------------------------- " << endl;
        cout << "1. Quien es el poeta mas reconocido de Nicaragua? " << endl;
        cout << "2. Cual fue la pelicula de animacion basada en videojuegos fue estrenada recientemente? " << endl;
        cout << "3. America fue descubierta por cristobal Colon (V o F) " << endl;
        cout << "4. salir de cuestionario " << endl;
        cout << "Seleccione su opcion " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ha selccionado pregunta 1 " << endl;
            cout << "Porfavor escriba su respuesta " << endl;
            cin >> resp1;
            cout << "La respuesta es " << preg1(resp1) << endl;

        case 2:
            cout << "Ha seleccionado pregunta 2 " << endl;
            cout << "Porfavor escriba su respuesta " << endl;
            cin >> resp2;
            preg2(resp2);

        case 3:
            cout << "Ha seleccionado pregunta 3 " << endl;
            cout << "Dime tu respuesta " << endl;
            cin >> resp3;
            cout << preg3(resp3) << endl;

        case 4:
            cout << "Adios " << endl;

            break;

        default:
            break;
        }
        system("pause");

    } while (opcion != 4);

    cout << "Gracias por responder el cuestionario " << endl;

    return 0;
}
