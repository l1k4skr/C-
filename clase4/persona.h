#include <iostream>

using namespace std;
// Clase - Persona
class Persona {
public:
    Persona(string nombre, int edad, string apellido, string direccion, string telefono, string email);
    ~Persona();

    string getNombre();
    void setNombre(string nombre);
    
    int getEdad();
    void setEdad(int edad);
    
    string getApellido();
    void setApellido(string apellido);
    
    string getDireccion();
    void setDireccion(string direccion);
    
    string getTelefono();
    void setTelefono(string telefono);
    
    string getEmail();
    void setEmail(string email);
    
    void pedir_datos();
    
    void mostrar_datos();

protected:
    string nombre, apellido, direccion, telefono, email;
    int edad;
    
};

// profesor.cpp

class Profesor : public Persona {
public:
    Profesor(string, int, string, string, string, string);
    virtual ~Profesor();
    string getMateria();
    void setMateria(string materia);
    void pedir_datos();
    void mostrar_datos();
private:
    string materia;
};

class Estudiante : public Persona {
public:
    Estudiante(string, int, string, string, string, string, string);
    virtual ~Estudiante();
    string getCarrera();
    void setCarrera(string carrera);
    void pedir_datos();
    void mostrar_datos();
private:
    string carrera;
};



