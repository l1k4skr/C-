#include <iostream>

using namespace std;
// Clase Vehiculo
class Vehiculo 
{
  protected:
    int numero_motor, cantidad_ruedas, tipo_vehiculo, ano_fabricacion;

  public:
    Vehiculo(int, int, int, int);
    virtual ~Vehiculo();
    virtual void pedirDatos();
    virtual void mostrarDatos();
    
};

// Clase Auto
class Auto : public Vehiculo {
  private:
    string marca;
    double precio;

  public:
    // Constructor de la clase Auto
    Auto(
    string _marca, 
    double _precio, 
    int _numero_motor, 
    int _cantidad_ruedas, 
    int _tipo_vehiculo, 
    int _ano_fabricacion
    );

    ~Auto() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcular_precio();

};

//Clase Moto 
class Moto : public Vehiculo {
  protected:
    string marca;
    double precio;

  public:
    Moto(
    string _marca, 
    double _precio, 
    int _numero_motor, 
    int _cantidad_ruedas, 
    int _tipo_vehiculo, 
    int _ano_fabricacion
    );
    ~Moto() override;
    virtual void pedirDatos() override;
    virtual void mostrarDatos() override;
    double calcular_precio();
};

// Clase Camion
class Camion : public Vehiculo {
  protected:
    string marca;
    double precio;

  public:
    Camion(
    string _marca, 
    double _precio, 
    int _numero_motor, 
    int _cantidad_ruedas, 
    int _tipo_vehiculo, 
    int _ano_fabricacion
    );
    ~Camion() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcular_precio();
};

// Clase cliente
class Cliente {
  private: 
    string nombre, rut;

  public:
    int cantidad_Autos = 0; 
    int cantidad_Motos = 0; 
    int cantidad_Camiones = 0;
    Cliente(string, string);
    ~Cliente();
    void pedirDatos();
    void mostrarDatos();
};  