#include <iostream>
class Triangulo {
    public:
    float altura;
    float base;

    Triangulo(float alt, float bas){
        altura = alt;
        base = bas;
    }
    ~Triangulo(){};
    int calcular_area(){
        float area = (this->altura * this->base)/2;
        std::cout << "El area de tu triangulo es ";
        std::cout << area << std::endl; 
    }
    int calcular_perimetro(){
        float perimetro = ;
        std::cout << "El perimetro de tu triangulo es ";
        std::cout << perimetro << std::endl; 
    }
};
