#include <iostream>
#include "persona.h"

// persona.cpp
using namespace std;


Persona::Persona(string _nombre, int _edad, string _apellido, string _direccion, string _telefono, string _email) {
    this->nombre = _nombre;
    this->edad = _edad;
    this->apellido = _apellido;
    this->direccion = _direccion;
    this->telefono = _telefono;
    this->email = _email;

}

Persona::~Persona() {}

string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

string Persona::getApellido() {
    return apellido;
}

void Persona::setApellido(string apellido) {
    this->apellido = apellido;
}
string Persona::getDireccion() {
    return direccion;
}

void Persona::setDireccion(string direccion) {
    this->direccion = direccion;
}

string Persona::getTelefono() {
    return telefono;
}

void Persona::setTelefono(string telefono) {
    this->telefono = telefono;
}

string Persona::getEmail() {
    return email;
}

void Persona::setEmail(string email) {
    this->email = email;
}

void Persona::pedir_datos() {
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese apellido: ";
    cin >> apellido;
    cout << "Ingrese direccion: ";
    cin >> direccion;
    cout << "Ingrese telefono: ";
    cin >> telefono;
    cout << "Ingrese email: ";
    cin >> email;
    cout << "Ingrese edad: ";
    cin >> edad;
}

void Persona::mostrar_datos() {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;
    cout << "Direccion: " << this->direccion << endl;
    cout << "Telefono: " << this->telefono << endl;
    cout << "Email: " << this->email << endl;
    cout << "Edad: " << this->edad << endl;
}

Profesor::Profesor(string _nombre, int _edad, string _apellido, string _direccion, string _telefono, string _email) : Persona(_nombre, _edad, _apellido, _direccion, _telefono, _email) {
    this->materia = materia;    
}

Profesor::~Profesor() {}

string Profesor::getMateria() {
    return materia;
}

void Profesor::setMateria(string materia) {
    this->materia = materia;
}

void Profesor::pedir_datos() {
    Persona::pedir_datos();
    cout << "Ingrese materia: ";
    cin >> materia;
}

void Profesor::mostrar_datos() {
    Persona::mostrar_datos();
    cout << "Materia: " << this->materia << endl;
}


Estudiante::Estudiante(string _nombre, int _edad, string _apellido, string _direccion, string _telefono, string _email,  string _carrera) : Persona(_nombre, _edad, _apellido, _direccion, _telefono, _email) {
    this->carrera = _carrera;
}

Estudiante::~Estudiante() {}

string Estudiante::getCarrera() {
    return carrera;
}

void Estudiante::setCarrera(string carrera) {
    this->carrera = carrera;
}

void Estudiante::pedir_datos() {
    Persona::pedir_datos();
    cout << "Ingrese carrera: ";
    cin >> carrera;
}

void Estudiante::mostrar_datos() {
    Persona::mostrar_datos();
    cout << "Carrera: " << this->carrera << endl;
}
