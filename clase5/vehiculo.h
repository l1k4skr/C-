#include <iostream>

using namespace std;

// Clase Vehiculo
class Vehiculo {
    public:
        string tipo = "Vehiculo";
        Vehiculo(int = 0, int = 0); // Constructor
        ~Vehiculo(); // Destructor
        void mostrar_datos(); // Metodo
        void pedir_datos();
    protected: 
        int velocidadMax;
        int numeroRuedas;
};
class Automovil : public Vehiculo {
    public:
        string tipo = "Automovil";
        Automovil(int=0, int=0, int=0);
        ~Automovil();
        void mostrar_datos_auto();
        void pedir_datos_auto();
    private:
        int puertas;
};

class Moto : public Vehiculo {
    public:
        string tipo = "Moto";
        Moto(int=0, int=0);
        void mostrar_datos_moto();
        void pedir_datos_moto();
        ~Moto();
        
};