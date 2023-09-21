#include <iostream>
#include <string>

// Clase base Vehiculo
class Vehiculo {
private:
    int numeroMotor;
    int cantidadRuedas;
    int capacidadTanque;
    int anoFabricacion;

public:
    Vehiculo(int numeroMotor, int cantidadRuedas, int capacidadTanque, int anoFabricacion);
    virtual ~Vehiculo() = 0;
    virtual void pedirDatos();
    virtual void mostrarDatos();
    virtual double calcularPrecio() = 0;  // Método virtual puro
};

// Clase derivada Auto
class Auto : public Vehiculo {
private:
    std::string marca;
    double precioBase;

public:
    Auto(std::string marca, double precioBase, int numeroMotor, int cantidadRuedas, int capacidadTanque, int anoFabricacion);
    ~Auto() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
};

// Clase derivada Moto
class Moto : public Vehiculo {
private:
    std::string marca;
    double precioBase;

public:
    Moto(std::string marca, double precioBase, int numeroMotor, int cantidadRuedas, int capacidadTanque, int anoFabricacion);
    ~Moto() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
};

// Clase derivada Camion
class Camion : public Vehiculo {
private:
    std::string marca;
    double precioBase;

public:
    Camion(std::string marca, double precioBase, int numeroMotor, int cantidadRuedas, int capacidadTanque, int anoFabricacion);
    ~Camion() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
};

// Clase Cliente
class Cliente {
private:
    std::string nombre;
    std::string rut;

public:
    int cantidadAutos = 0;
    int cantidadMotos = 0;
    int cantidadCamiones = 0;
    Cliente(std::string nombre, std::string rut);
    ~Cliente();
    void pedirDatos();
    void mostrarDatos();
};
