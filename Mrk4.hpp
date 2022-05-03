#include "MN.hpp"
#include<cmath>

#ifndef MRK4
#define MRK4

//Funcion sin errores
class Mrk4:public MN{
	
	public:
		//Construstor por defecto
		Mrk4();
		//Constructor
		Mrk4(float, float, float, float);
		
		//Funciones miembros
		void setXi(const float);
		void setXf(const float);
		void setY(const float);
		void setI(const float);
		
		
		const float getXi()const;
		const float getXf()const;
		const float getY()const;
		const float getI()const;
	
		void mostrar();	
		void solucion();
		
		
		
	private:
		//Miembro de datos
		float xi,xf,y;	
		int i, a;
};

#endif 
