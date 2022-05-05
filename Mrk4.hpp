#include "MN.hpp"
#include<cmath>

#ifndef MRK4
#define MRK4

//Funcion sin errores
class Mrk4:public MN{
	
	friend float &operator !(const Mrk4 &);
	
	public:
		//Construstor por defecto
		Mrk4();
		//Constructor
		//Parametros
		/*condicion inicial x0,y0, aprocimacion ax y por ultimo h*/
		Mrk4(float, float, float, float);
		
		//Funciones miembros
		void setX0(const float);
		void setY0(const float);
		void setAx(const float);
		void setH(const float);
		
		
		const float getX0()const;
		const float getY0()const;
		const float getAx()const;
		const float getH()const;
	
		void mostrar();			
		
	private:
		//Miembro de datos
		float x0, y0, ax, h;
};

#endif 
