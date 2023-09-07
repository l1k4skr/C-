#include <iostream>
#include "Persona.h"

using namespace std;

int main ()
{
	Persona *arturo = new Persona("Arturo", "20967995-7", "Nansen 945");
	arturo->MostrarDatos();
	return 0;
}
