/*
 * Anulacion Funcion Polimorfismo
 */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class base
{
	public:
		virtual void print()
		{cout << "Print base class" << endl;}

		void show()
		{cout << "show base class" << endl;}
};

class derived : public base 
{
	public:
		void print() 
		{
		cout << "Clase derivada" << endl;	
		}
};


int main ()
{
	base * var1;
	derived var2;
	var1 = &var2;
	var1->print();
	var1->show();

}
