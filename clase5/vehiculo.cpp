#include <iostream>
#include "vehiculo.h"

using namespace std;


// Constructor - Vehiculo
Vehiculo::Vehiculo(int _velocidadMax, int _numeroRuedas) {
    velocidadMax = _velocidadMax;
    numeroRuedas = _numeroRuedas;
}

// Destructor - Vehiculo
Vehiculo::~Vehiculo() {
    cout << "Destructor de "<< this-> tipo << endl;
}

// Mostrar datos - Vehiculo
void Vehiculo::mostrar_datos() {
    cout << "Velocidad maxima: " << velocidadMax << endl;
    cout << "Numero de ruedas: " << numeroRuedas << endl;
}

// Pedir datos - Vehiculo
void Vehiculo::pedir_datos() {
    cout << "Ingrese la velocidad maxima: ";
    cin >> velocidadMax;
    cout << "Ingrese el numero de ruedas: ";
    cin >> numeroRuedas;
}

// Constructor - Automovil
Automovil::Automovil(int _velocidadMax, int _numeroRuedas, int _puertas) : Vehiculo(_velocidadMax, _numeroRuedas) {
    Vehiculo(_velocidadMax, _numeroRuedas);
    puertas = _puertas;
}

// Destructor - Automovil
Automovil::~Automovil() {
    cout << "Destructor de "<< this-> tipo << endl;
}

// Pedir datos - Automovil
void Automovil::pedir_datos_auto() {
    Vehiculo::pedir_datos();
    cout << "Ingrese el numero de puertas: ";
    cin >> puertas;
}

// Mostrar datos - Automovil
void Automovil::mostrar_datos_auto() {
    Vehiculo::mostrar_datos();
    cout << "Numero de puertas: " << puertas << endl;
}


// Constructor - Moto
Moto::Moto(int _velocidadMax, int _numeroRuedas): Vehiculo(_velocidadMax, _numeroRuedas) {
    Vehiculo(_velocidadMax, _numeroRuedas);
}

// Destructor - Moto
Moto::~Moto() {
    cout << "Destructor de "<< this-> tipo << endl;
}

// Pedir datos - Moto
void Moto::pedir_datos_moto() {
    Vehiculo::pedir_datos();
}

// Mostrar datos - Moto
void Moto::mostrar_datos_moto() {
    Vehiculo::mostrar_datos();   
}

