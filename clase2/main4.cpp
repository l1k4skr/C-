#include <iostream>
#include <math.h>
using namespace std;
/*Ecuacion cuadratica (-b + ((b)**2 - 4ac)*1/2)/2a*/
int main(){
    double b, a, c, x1, x2;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    while (2*a == 0){
        cout << "No se puede dividir entre 0" << endl;
        cout << "Ingrese el valor de a: ";
        cin >> a;
    }
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;
    if (b*b - 4*a*c < 0){
        if (b*b - 4*a*c == 0){
            //x1 = (-b + sqrt((b*b - 4*a*c), 2))/2*a;
            cout << "El valor de x1 es: " << x1 << endl;
        }
        else{
            cout << "No tiene solución" << endl;
        }
    }
    if (2*a != 0 && b*b - 4*a*c >= 0){
        x1 = (-b + sqrt((b*b - 4*a*c)))/2*a;
        x2 = (-b - sqrt((b*b - 4*a*c)))/2*a;
        cout << "El valor de x1 es: " << x1 << endl;
        cout << "El valor de x2 es: " << x2 << endl;
    }
    return 0;
}