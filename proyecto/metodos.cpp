#include <iostream>
#include "clases.h"

using namespace std;

// Descripción de los números identificadores y tipos de vehículo.
/*
Numeros identificadores:
1 -> Auto
2 -> Moto
3 -> Camiones

N° tipo de vehiculo:
1 -> Gas
2 -> Electrico
3 -> Gasolina
*/

// ---- Implementación de métodos para la clase Vehiculo ----

// Constructor de Vehiculo
Vehiculo::Vehiculo(int _numero_motor, int _cantidad_ruedas, int _tipo_vehiculo, int _ano_fabricacion)
    : numero_motor(_numero_motor), cantidad_ruedas(_cantidad_ruedas), tipo_vehiculo(_tipo_vehiculo), ano_fabricacion(_ano_fabricacion) {
}

// Destructor de Vehiculo
Vehiculo::~Vehiculo() {}

// Método para pedir datos de Vehiculo
void Vehiculo::pedirDatos(){
    cout << "\ningresar numero de motor:";
    cin >> this->numero_motor;
    cout << "\ningresar tipo de vehiculo:";
    cin >> this->tipo_vehiculo;
    cout << "\ningresar año de fabricacion:";
    cin >> this->ano_fabricacion;
}

// Método para mostrar datos de Vehiculo
void Vehiculo::mostrarDatos(){
    cout << "\nNumero de motor:" << this->numero_motor;
    cout << "\nCantidad de ruedas:" << this->cantidad_ruedas;
    cout << "\nTipo de vehiculo:" << this->tipo_vehiculo;
    cout << "\nAño de fabricacion:" << this->ano_fabricacion;
}

// ---- Implementación de métodos para la clase Auto ----

// Constructor de Auto
Auto::Auto(string _marca, double _precio, int _numero_motor, int _cantidad_ruedas, int _tipo_vehiculo, int _ano_fabricacion)
    : Vehiculo(_numero_motor, _cantidad_ruedas, 1, _ano_fabricacion), marca(_marca), precio(_precio) {
}

// Destructor de Auto
Auto::~Auto() {}

// Método para pedir datos de Auto
void Auto::pedirDatos(){
    Vehiculo::pedirDatos();
    cout << "\nIngresar marca del auto:";
    cin >> this->marca;
    cout << "\nIngresar precio del auto:";
    cin >> this->precio;
}

// Método para mostrar datos de Auto
void Auto::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "\nMarca del auto:" << this->marca;
    cout << "\nPrecio del auto:" << this->precio;
}

// Método para calcular el precio de Auto
double Auto::calcular_precio(){
    // ... (Código original)
    return this->precio; // Añadido return
}
// ---- Implementación de métodos para la clase Moto ----

// Constructor de Moto
Moto::Moto(string _marca, double _precio, int _numero_motor, int _cantidad_ruedas, int _tipo_vehiculo, int _ano_fabricacion)
    : Vehiculo(_numero_motor, _cantidad_ruedas, 2, _ano_fabricacion), marca(_marca), precio(_precio) {
}

// Destructor de Moto
Moto::~Moto() {}

// Método para pedir datos de Moto
void Moto::pedirDatos(){
    Vehiculo::pedirDatos();
    cout << "\nIngresar marca de la moto:";
    cin >> this->marca;
    cout << "\nIngresar precio de la moto:";
    cin >> this->precio;
}

// Método para mostrar datos de Moto
void Moto::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "\nMarca de la moto:" << this->marca;
    cout << "\nPrecio de la moto:" << this->precio;
}

// Método para calcular el precio de Moto
double Moto::calcular_precio(){
    // ... (tu código original aquí)
    return this->precio; // Añadido return
}

// ---- Implementación de métodos para la clase Camion ----

// Constructor de Camion
Camion::Camion(string _marca, double _precio, int _numero_motor, int _cantidad_ruedas, int _tipo_vehiculo, int _ano_fabricacion)
    : Vehiculo(_numero_motor, _cantidad_ruedas, 3, _ano_fabricacion), marca(_marca), precio(_precio) {
}

// Destructor de Camion
Camion::~Camion() {}

// Método para pedir datos de Camion
void Camion::pedirDatos(){
    Vehiculo::pedirDatos();
    cout << "\nIngresar marca del camion:";
    cin >> this->marca;
    cout << "\nIngresar precio del camion:";
    cin >> this->precio;
}

// Método para mostrar datos de Camion
void Camion::mostrarDatos(){
    Vehiculo::mostrarDatos();
    cout << "\nMarca del camion:" << this->marca;
    cout << "\nPrecio del camion:" << this->precio;
}

// Método para calcular el precio de Camion
double Camion::calcular_precio(){
    // ... (tu código original aquí)
    return this->precio; // Añadido return
}

// ---- Implementación de métodos para la clase Cliente ----

// Constructor de Cliente
Cliente::Cliente(string _rut, string _nombre) {
    this->nombre = _nombre;
    this->rut = _rut;
}

// Destructor de Cliente
Cliente::~Cliente() {}

// Método para pedir datos del Cliente
void Cliente::pedirDatos(){
    cout << "\nIngresar nombre del Cliente: ";
    cin >> this->nombre;
    cout << "\nIngresar rut del Cliente: ";
    cin >> this->rut;
}

// Método para mostrar datos del Cliente
void Cliente::mostrarDatos(){
    cout << "\nNombre: " << this->nombre;
    cout << "\nRUT: " << this->rut;
}




