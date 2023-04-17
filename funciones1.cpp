#include <iostream>
#include <math.h>

using namespace std;

int suma(int num1, int num2){

    return num1 + num2;
}

int resta(int num1, int num2){

    return num1 - num2;
}

int multiplic(int num1, int num2){

    return num1 * num2;
}

float division(float num1, float num2){

    if (num1 && num2 > 0)
    {
        cout << "Calculando....... " << endl;

    }else{

        cout << "No realizar division " << endl;
    }
    
    return num1/num2;
}

int pot(int num1, int num2 ){

    return pow(num1,num2);
}