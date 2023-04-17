#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string respuesta = "";
    cout << "Quien es Ruben Dario " << endl;
    cin >> respuesta;
    if (respuesta == "Poeta")
    {
        cout << "Respuesta correcta " << endl;
    }else{

        cout << "Intenta denuevo " << endl;
    }
    

    return 0;
}
