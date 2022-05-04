
#include <iostream>
#include<math.h>
using std :: endl;
using std::cout;
using std::cin;
#include"Ecuacion.h" 
#ifndef EULER
#define EULER
class Euler{
	
	public: 
	Euler(float,float,float,int );
	Euler();
	void mostrarfuncion();
	 float setvalorinicialx(const float);
	 float setvalorfinalx(const float);
 float 	setvalorinicialy(const float);
 
 const float getxi()const;
		const float getxf()const;
		const float gety()const;
		const int getiteracion()const;
	
		void mostrar();	
		float solucion();
int	setnumiteraciones(const int);
	private:
	 float xi,xf,y;
	 int i;
	
	
	
	
	
	
	
	
	
};

#endif
