#include <iostream>
#include<math.h>
using std :: endl;
using std::cout;
using std::cin;
 #include "Euler.hpp"
 #include"Ecuacion.h"
Euler::Euler(float mixi,float mixf,float miy,int mii ){
	
	
	this->xi=mixi;
	this->xf=mixf;
	this->y=miy;
	this->i=mii;
	
	
} 

Euler::Euler(){
this->xi=0;
this->xf=0;
this->y=0;
this->i=0;	
	
	
	
	
}







float Euler::setvalorinicialx(const float mixi){
	
	
	this-> xi=mixi;
}

float Euler::setvalorfinalx(const float mixf){
	
	
	
	this-> xf=mixf;
	
	 
}
float Euler::setvalorinicialy(const float miy){
	
	
	
	this->y=miy;
}
int Euler::setnumiteraciones(const int mii){
	
	
	
	 this->i=mii;
	
	
}
const float Euler:: getxi()const{

return xi;
}
const float Euler:: getxf()const{


return xf;
}
const float Euler::gety()const{


return y;
}
const int Euler::getiteracion()const{

return i;
}

float Euler:: solucion(){
	
int i,a;
	float xi,xf,h,k,y,f;

	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0\t|x = "<<xi<<"\ty = "<<y;
	f = (xi*y);
	cout<<"\tf(x,y) = "<<f<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + (h*f);
		f = (k*y);
		cout<<a<<"\t|x = "<<k<<"\ty = "<<y<<"\tf(x,y) = "<<f<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
	
	
}


void Euler::mostrarfuncion(){
	
	
	

	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	
	

	
	
	
}
