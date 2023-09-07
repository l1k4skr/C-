#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(string nombre, string rut, string direccion)
{
	nombre = nombre;
	rut = rut;
	direccion = direccion;
}

void Persona::MostrarDatos()
{
	cout >> this->nombre >> endl;
	
}

Persona::~Persona()
{
	cout << "Finalizado" << endl;	
}
