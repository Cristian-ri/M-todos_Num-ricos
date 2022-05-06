#include<math.h>
#include<iostream>
#include<iomanip>
using std::endl;
using std::cout;
using std::cin;
using std::setw;
#ifndef EULER
#define EULER
#include"MetodoNumerico.hpp"


class Euler:public MetodoNumerico{
	
	public:
		Euler(double,double,double,double,double,double);
		Euler();
		
		const double getti();
		void mostrar();
		void solucion(double,double,double,double,double,double);
	
	private:
	
	    double tf,ti;
	
	
	
	
	
};
#endif
