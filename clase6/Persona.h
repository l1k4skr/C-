#include <iostream>


using namespace std;
class Persona
{

	private:
		string nombre;
		string rut;
		string direccion;
	public:
		Persona(string, string, string);
		~Persona();
		void pedirDatos();
		void MostrarDatos();

};

class Profesor : public Persona
{
	private:
		Profesor();
		string cargo;

};
