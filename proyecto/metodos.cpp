#include <iostream>
#include "clases.h"

using namespace std;

// Descripción de los números identificadores y tipos de vehículo.
/*
Numeros identificadores:
1 -> Auto
2 -> Moto
3 -> Camiones

N° tipo de combustible:
1 -> Gas
2 -> Electrico
3 -> Gasolina
*/

// ---- Implementación de métodos para la clase Vehiculo ----

// Constructor de Vehiculo
Vehiculo::Vehiculo(
    int _numeroMotor,
    int _cantidadRuedas,
    int _anoFabricacion,
    int _tipoVehiculo,
    int _tipoCombustible,
    double _precioBase)
    : numeroMotor(_numeroMotor), cantidadRuedas(_cantidadRuedas), anoFabricacion(_anoFabricacion), tipoVehiculo(_tipoVehiculo), tipoCombustible(_tipoCombustible), precioBase(_precioBase)
{
}

// Destructor de Vehiculo
Vehiculo::~Vehiculo() {}

// Método para pedir datos de Vehiculo
void Vehiculo::pedirDatos()
{
    cout << "\nIngresar numero de motor: ";
    cin >> this->numeroMotor;
    cout << "\nIngresar cantidad de ruedas: ";
    cin >> this->cantidadRuedas;
    cout << "\nIngresar año de fabricacion: ";
    cin >> this->anoFabricacion;
    cout << "\n1 -> Auto\n2 -> Moto\n3 -> Camiones\nIngresar tipo de vehiculo: ";
    cin >> this->tipoVehiculo;
    cout << "\n1 -> Gas\n2 -> Electrico\n3 -> Gasolina\nIngresar tipo de combustible: ";
    cin >> this->tipoCombustible;
    cout << "\nIngresar precio base: ";
    cin >> this->precioBase;
}

// Método para mostrar datos de Vehiculo
void Vehiculo::mostrarDatos()
{
    cout << "\nNumero de motor:" << this->numeroMotor;
    cout << "\nCantidad de ruedas:" << this->cantidadRuedas;
    cout << "\nAño de fabricacion:" << this->anoFabricacion;
    switch (this->tipoVehiculo)
    {
    case 1:
        cout << "\nTipo de vehiculo: Auto";
        break;
    case 2:
        cout << "\nTipo de vehiculo: Moto";
        break;
    case 3:
        cout << "\nTipo de vehiculo: Camion";
        break;

    default:
        cout << "\nTipo de vehiculo: No definido";
        break;
    }
}
// Método para calcular el precio de Vehiculo

double Vehiculo::calcularPrecio()
{
    int precioFinal = 0;
    if (this->anoFabricacion < 2000)
    {
        precioFinal = this->precioBase * 0.5;
    }
    else if (this->anoFabricacion >= 2000 && this->anoFabricacion <= 2017)
    {
        precioFinal = this->precioBase - this->precioBase * 0.3;
    }
    else if (this->anoFabricacion > 2017)
    {
        precioFinal = this->precioBase - this->precioBase * 0.15;
    }
    if (this->tipoCombustible == 1 || this->tipoCombustible == 2)
    {
        precioFinal = precioFinal + precioFinal * 0.2;
    }
    return precioFinal;
}

// ---- Implementación de métodos para la clase Auto ----

// Constructor de Auto
Auto::Auto(std::string _marca,
        int _numeroMotor,
        int _cantidadRuedas,
        int _anoFabricacion, 
        int _tipoVehiculo,
        int _tipoCombustible,
        double _precioBase)
: Vehiculo(_numeroMotor,
        _cantidadRuedas,
        _anoFabricacion,
        _tipoVehiculo,
        _tipoCombustible,
        _precioBase
        ),
        marca(_marca)
{
    this->precioBase = _precioBase;
}

// Derstuctor de Auto
Auto::~Auto() {}

// Método para pedir datos de Auto
void Auto::pedirDatos()
{
    Vehiculo::pedirDatos();
    cout << "\nIngresar marca del auto:";
    cin >> this->marca;
}

// Método para mostrar datos de Auto
void Auto::mostrarDatos()
{
    Vehiculo::mostrarDatos();
    cout << "\nMarca del auto:" << this->marca;
    cout << "\nPrecio final del auto:" << this->precioFinal;
}

double Auto::calcularPrecio()
{
    this->precioFinal = Vehiculo::calcularPrecio();
    return this->precioFinal;
}

// ---- Implementación de métodos para la clase Moto ----

// Constructor de Moto
Moto::Moto(
    std::string _marca, 
    int _numeroMotor, 
    int _cantidadRuedas, 
    int _anoFabricacion, 
    int _tipoVehiculo, 
    int _tipoCombustible, 
    double _precioBase
)
: Vehiculo(
    _numeroMotor,
    _cantidadRuedas,
    _anoFabricacion,
    _tipoVehiculo,
    _tipoCombustible,
    _precioBase
),  marca(_marca)
{
    this->precioBase = _precioBase;
}

// Derstuctor de Moto
Moto::~Moto() {}

// Método para pedir datos de Moto
void Moto::pedirDatos()
{
    Vehiculo::pedirDatos();
    cout << "\nIngresar marca de la moto:";
    cin >> this->marca;
}

// Método para mostrar datos de Moto
void Moto::mostrarDatos()
{
    Vehiculo::mostrarDatos();
    cout << "\nMarca de la moto:" << this->marca;
    cout << "\nPrecio final de la moto:" << this->precioFinal;
}

double Moto::calcularPrecio()
{
    this->precioFinal = Vehiculo::calcularPrecio();
    return this->precioFinal;
}
// ---- Implementación de métodos para la clase Camion ----

// Constructor de Camion
Camion::Camion(std::string _marca, int _numeroMotor, int _cantidadRuedas, int _anoFabricacion, int _tipoVehiculo, int _tipoCombustible, double _precioBase)
    : Vehiculo(_numeroMotor,
               _cantidadRuedas,
               _anoFabricacion,
               _tipoVehiculo,
               _tipoCombustible,
               _precioBase),
      marca(_marca)
{
    this->precioBase = _precioBase;
}

// Derstuctor de Camion
Camion::~Camion() {}

// Método para pedir datos de Camion
void Camion::pedirDatos()
{
    Vehiculo::pedirDatos();
    cout << "\nIngresar marca de la Camion:";
    cin >> this->marca;
}

// Método para mostrar datos de Camion
void Camion::mostrarDatos()
{
    Vehiculo::mostrarDatos();
    cout << "\nMarca de la Camion:" << this->marca;
    cout << "\nPrecio final de la Camion:" << this->precioFinal;
}

double Camion::calcularPrecio()
{
    this->precioFinal = Vehiculo::calcularPrecio();
    return this->precioFinal;
}

// ---- Implementación de métodos para la clase Cliente ----

// Constructor de Cliente
Cliente::Cliente(string _rut, string _nombre)
    : rut(_rut), nombre(_nombre)
{
}
// Destructor de Cliente
Cliente::~Cliente() {}

// Método para pedir datos del Cliente
void Cliente::pedirDatos()
{
    cout << "\nIngresar nombre del Cliente: ";
    cin >> this->nombre;
    cout << "\nIngresar rut del Cliente: ";
    cin >> this->rut;
}

// Método para mostrar datos del Cliente
void Cliente::mostrarDatos()
{
    cout << "\nRUT: " << this->rut;
    cout << "\nNombre: " << this->nombre << endl;
}

// Método para agregar un vehículo al cliente
