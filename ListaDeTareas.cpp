/*Hacer un menu para hacer distintas actividades
Obtener la tabla de un numero
Verificar una edad
Calcular temperatura*/
#include <iostream>

using namespace std;

void ObtenerTabla()
{
    int num;
    cout << "Dime un numero " << endl;
    cin >> num;

    for (int i = 1; i <= 12; i++)
    {

        cout << num << " * " << i << " = " << num * i << endl;
    }
}

void VerificarEdad()
{

    int edad;
    cout << "Dime la edad de Juanito Alcachofa " << endl;
    cin >> edad;
    if (edad <= 12 && edad >= 0)
    {
        cout << "Juanito es un niño " << endl;
    }
    else if (edad >= 13 && edad <= 17)
    {

        cout << "Juanito es adolecente " << endl;
    }
    else if (edad >= 18 && edad <= 29)
    {

        cout << "Juanito es un adulto joven " << endl;
    }
    else if (edad >= 30)
    {

        cout << "Juanito es un adulto " << endl;
    }
    else
    {

        cout << "Juanito no existe " << endl;
    }
}

void temperatura()
{

    int temperatura;
    cout << "Dime la temperatura de tu ciudad " << endl;
    cin >> temperatura;
    cout << "La temperatura de tu ciudad en grados Fahrenheit es " << (temperatura * 1.8) + 32 << endl;
}
void Menu()
{
    int opcion;
    do
    {
        system("cls");
        system("color 02");
        cout << "--------Biernvenido a tu lista de tareas------------ " << endl;
        cout << "Tiene tareas pendientes: " << endl;
        cout << "1 . Calcula una tabla de multiplicar de un # " << endl;
        cout << "2. Verificar la edad de Juanito Alcachofa " << endl;
        cout << "3. Calcular la temperatura de tu ciudad en Fahrenheit " << endl;
        cout << "Que le gustaria realizar " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ObtenerTabla();
            break;
        case 2:
            VerificarEdad();
            break;
        case 3:
            temperatura();

        default:
            cout << "Ya no hay tareas disponibles " << endl;
            break;
        }
        system("pause");
    } while (opcion != 3);
}

int main(int argc, char const *argv[])
{
    Menu();
    
    return 0;
}
