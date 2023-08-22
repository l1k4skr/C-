#include <iostream>

class Mensaje {
    public:
        std::string linea;
        void Display(){
            std::cout << linea << std::endl;
        }
};