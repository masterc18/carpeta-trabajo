#include <iostream>

using namespace std;

struct Compras{
    char nombreProducto[50];
    float precio;
};

void agregarProducto(float& credito, Compras *arregloDeCompras, int& tamanio){
    Compras productoPorAgregar;
    cout<<"Nombre del producto"<<endl;
    cin >> productoPorAgregar.nombreProducto;
    cout<<"Precio del producto"<<endl;
    cin>> productoPorAgregar.precio;

    if(productoPorAgregar.precio > credito){
        cout<<"No se pudo aniadir el producto pot falta de credito"<<endl;
    }else{
        credito = credito - productoPorAgregar.precio;
        arregloDeCompras[tamanio] = productoPorAgregar;
        tamanio = tamanio + 1;
    }
}

void mostrarFactura(float& credito, Compras *arregloDeCompras, int& tamanio){
    float totalcompra = 0;

    cout<<"Tienda Catalina"<<endl;
    cout<<"Credito disponible C$1600"<<endl;
    cout<<"----------------------"<<endl;

    for(int i = 0; i <= tamanio-1; i++){
        cout<<arregloDeCompras[i].nombreProducto<<"     "<<arregloDeCompras[i].precio<<endl;
        totalcompra =  totalcompra + arregloDeCompras[i].precio;
    }
    cout<<"-------------------------"<<endl;
    cout<<"Cantidad de productos = "<<tamanio<<endl;
    cout<<"Total de la compra = "<<totalcompra<<endl;
    cout<<"Credito disponible = "<<credito<<endl;
}

void mostrarMenu(){
    cout<<"Hola!"<<endl;
    cout<<"1. Agregar Producto"<<endl;
    cout<<"2. Mostrar factura"<<endl;
    cout<<"3. Salir"<<endl;
}

void menu(float credito, Compras *arregloDeCompras, int& tamanio){
    int opcion = 0;
    do{
        mostrarMenu();
        cout<<"Selecciona una opcion"<<endl;
        cin>> opcion;

        switch (opcion)
        {
        case 1:
            agregarProducto(credito, arregloDeCompras, tamanio);
            break;
        case 2:
            mostrarFactura(credito, arregloDeCompras, tamanio);
            break;
        case 3:
            cout<<"Chao chao"<<endl;
            break;

        default:
            break;
        }
    }while(opcion!=3);
}

int main(){
    int tamanio = 0;
    Compras arregloDeCompras[20];
    float credito = 1600;
    menu(credito, arregloDeCompras, tamanio);
    
}