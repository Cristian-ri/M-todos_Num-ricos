#include <iostream>
#include<math.h>
#include<iomanip>
using std::endl;
using std::cout;
using std::cin;
using std::setw;
#ifndef METODONUMERICO
#define METODONUMERICO

class MetodoNumerico{
	
	public:
	
	
	MetodoNumerico(double,double,double,double);
	MetodoNumerico();
	 double setxi();
	 double setxf();
	 double sety();
	 double setiteracion();
	 void mostrar();
	 	
	 const double getxi()const;
	 const double getxf()const;
	 const double getyi()const;
	 const double getiteracion()const;
	 	
	 	
	
	
	
	private:
		double xi,xf,yi,h;
	
	
	
};
#endif
