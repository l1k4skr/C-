#include <iostream>
#include "clases.h"

using namespace std;


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



//METODOS VEHICULO
//Metodo Constructor Vehiculo
Vehiculo::Vehiculo(
  int _numero_motor, 
  int _cantidad_ruedas, 
  int _tipo_vehiculo, 
  int _ano_fabricacion ) : numero_motor(_numero_motor), cantidad_ruedas(_cantidad_ruedas), tipo_vehiculo(_tipo_vehiculo), ano_fabricacion(_ano_fabricacion)
{
}
// Metodo Destructor Vehiculo
Vehiculo::~Vehiculo(){}

// Metodo <pedirDatos()> Vehiculo
void Vehiculo::pedirDatos(){
  cout << "\ningresar numero de motor:";
  cin >> this->numero_motor;
  //cout << "\ningresar cantidad de ruedas:";
  //cin >> this->cantidad_ruedas;
  cout << "\ningresar tipo de vehiculo:";
  cin >> this->tipo_vehiculo;
  cout << "\ningresar año de fabricacion:";
  cin >> this->ano_fabricacion;
  }

// Metodo <mostrarDatos()> Vehiculo
void Vehiculo::mostrarDatos(){
  cout << "\nNumero de motor:" << this->numero_motor;
  cout << "\nCantidad de ruedas:" << this->cantidad_ruedas;
  cout << "\nTipo de vehiculo:" << this->tipo_vehiculo;
  cout << "\nAño de fabricacion:" << this->ano_fabricacion;
}

// METODOS AUTO
// Metodo constructor auto
Auto::Auto(
  string _marca, 
  double _precio, 
  int _numero_motor, 
  int _cantidad_ruedas, 
  int _tipo_vehiculo, 
  int _ano_fabricacion ) : Vehiculo(_numero_motor, _cantidad_ruedas, 1, _ano_fabricacion), marca(_marca), precio(_precio){
}

// Metodo destructor auto
Auto::~Auto(){}

// Metodo <pedirDatos()> auto
void Auto::pedirDatos(){
  Vehiculo::pedirDatos();
  cout << "\nIngresar marca del auto:";
  cin >> this->marca;
  cout << "\nIngresar precio del auto:";
  cin >> this->precio;
}


// Metodo <mostrarDatos()> auto
void Auto::mostrarDatos(){
  Vehiculo::mostrarDatos();
  cout << "\nMarca del auto:" << this->marca;
  cout << "\nPrecio del auto:" << this->precio;
}
// METODO <Calcular_Precio()> Auto
double Auto::calcular_precio(){
  if (this->ano_fabricacion < 2000){
    this->precio = this->precio*0.5;
  }
  if (this->ano_fabricacion > 2000 && this->ano_fabricacion < 2017){
    this->precio = this->precio - this->precio*0.3;
  }
  if (this->ano_fabricacion > 2017){
    this->precio = this->precio - this->precio*0.15;
  }
  if (this->tipo_vehiculo != 3){
    this->precio = this->precio + this->precio*0.2;
  }
}

// METODOS MOTO
// Metodo constructor Moto
Moto::Moto(
  string _marca, 
  double _precio, 
  int _numero_motor, 
  int _cantidad_ruedas, 
  int _tipo_vehiculo, 
  int _ano_fabricacion
) : Vehiculo(_numero_motor, _cantidad_ruedas, 2, _ano_fabricacion), marca(_marca), precio(_precio) {
}

// Metodo destructor Moto
Moto::~Moto(){}
// Metodo <pedirDatos()> Moto
void Moto::pedirDatos(){
  Vehiculo::pedirDatos();
  cout << "\nIngresar marca de la moto:";
  cin >> this->marca;
  cout << "\nIngresar precio de la moto:";
  cin >> this->precio;
}
// Metodo <mostrarDatos()> Moto
void Moto::mostrarDatos(){
  Vehiculo::mostrarDatos();
  cout << "\nMarca de la moto:" << this->marca;
  cout << "\nPrecio de la moto:" << this->precio;
}
double Moto::calcular_precio(){
  if (this->ano_fabricacion < 2000){
    this->precio = this->precio*0.5;
  }
  if (this->ano_fabricacion > 2000 && this->ano_fabricacion < 2017){
    this->precio = this->precio - this->precio*0.3;
  }
  if (this->ano_fabricacion > 2017){
    this->precio = this->precio - this->precio*0.15;
  }
  if (this->tipo_vehiculo != 3){
    this->precio = this->precio + this->precio*0.2;
  }
}


// METODOS CAMION
// Metodo constructor Camion
Camion::Camion(
  string _marca, 
  double _precio, 
  int _numero_motor, 
  int _cantidad_ruedas, 
  int _tipo_vehiculo, 
  int _ano_fabricacion
  ) : Vehiculo(_numero_motor, _cantidad_ruedas, 3, _ano_fabricacion), marca(_marca), precio(_precio) {
}
// Metodo destructor Camion
Camion::~Camion(){}
// Metodo <pedirDatos()> Camion
void Camion::pedirDatos(){
  Vehiculo::pedirDatos();
  cout << "\nIngresar marca del camion:";
  cin >> this->marca;
  cout << "\nIngresar precio del camion:";
  cin >> this->precio;
}
// Metodo <mostrarDatos()> Camion
void Camion::mostrarDatos(){
  Vehiculo::mostrarDatos();
  cout << "\nMarca del camion:" << this->marca;
  cout << "\nPrecio del camion:" << this->precio;
}
double Camion::calcular_precio(){
  if (this->ano_fabricacion < 2000){
    this->precio = this->precio*0.5;
  }
  if (this->ano_fabricacion > 2000 && this->ano_fabricacion < 2017){
    this->precio = this->precio - this->precio*0.3;
  }
  if (this->ano_fabricacion > 2017){
    this->precio = this->precio - this->precio*0.15;
  }
  if (this->tipo_vehiculo != 3){
    this->precio = this->precio + this->precio*0.2;
  }
}

// METODOS CLIENTE
// Metodo Constructor Cliente
Cliente::Cliente(string _rut, string _nombre){
  this -> nombre = _nombre;
  this -> rut = _rut;
}

// Metodo Destructor Cliente  
Cliente::~Cliente(){}

// Metodo <pedirDatos()> Cliente
void Cliente::pedirDatos(){
  cout << "\nIngresar nombre del Cliente: ";
  cin >> this->nombre;
  cout << "\nIngresar rut del Cliente: ";
  cin >> this->rut;
}
void Cliente::mostrarDatos(){
  cout << "\nNombre: "<< this->nombre << endl;
  cout << "\nRUT:"<< this->rut << endl;
}

