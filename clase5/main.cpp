#include <iostream>
#include "vehiculo.h"

using namespace std;

int main() {
    Vehiculo *vehiculo = new Vehiculo();
    cout << vehiculo->tipo << endl;
    vehiculo->pedir_datos();
    vehiculo->mostrar_datos();

    Automovil *automovil = new Automovil();
    cout << automovil->tipo << endl;
    automovil->pedir_datos_auto();
    automovil->mostrar_datos_auto();


    Moto *moto = new Moto(150, 2);
    cout << moto->tipo << endl;
    moto->pedir_datos_moto();
    moto->mostrar_datos_moto();


    cout << "-------------------------" << endl;
    vehiculo->mostrar_datos();
    cout << "-------------------------" << endl;
    automovil->mostrar_datos_auto();
    cout << "-------------------------" << endl;
    moto->mostrar_datos_moto();

    return 0;
}