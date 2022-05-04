#include "Mrk4.hpp"
#include "Ecuacion.h"

Mrk4::Mrk4(float _x0, float _y0, float _ax, float _h){
	
	this->x0 = _x0;
	this->y0 = _y0;
	this->ax = _ax;
	this->h = _h;
		
}

Mrk4::Mrk4(){
	
	this->x0 = 0;
	this->y0 = 0;
	this->ax = 0;
	this->h = 0;
		
}

void Mrk4::setX0(const float _X0){
	
	this->x0 = _X0;	
}

void Mrk4::setY0(const float _Y0){
	
	this->y0 = _Y0;	
}

void Mrk4::setAx(const float _Ax){
	
	this->ax = _Ax;
	
}
void Mrk4::setH(const float _H){
	
	this->h = _H;	
}

const float Mrk4::getX0()const{
	return x0;
}
const float Mrk4::getY0()const{
	return y0;
}
const float Mrk4::getAx()const{
	return ax;
}
const float Mrk4::getH()const{
	return h;
}

void Mrk4::solucion(){
	
	float k1,k2,k3,k4, h, a, k, i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0  |x= "<<x0<<"  y= "<<y0;
	k1 = (x0*y0);
	k2 = (x0+(h/2))*(y0+((h/2)*k1));
	k3 = (x0+(h/2))*(y0+((h/2)*k2));
	k4 = (x0+h)*(y0+(h*k3));
	
	cout<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
	k = x0+h;
	for(a=1; a<=i ; a++)
	{
		y0 = y0 + ((h/6)*(k1+(2*k2)+(2*k3)+k4));
		k1 = (k*y0);
		k2 = (k+(h/2))*(y0+((h/2)*k1));
		k3 = (k+(h/2))*(y0+((h/2)*k2));
		k4 = (k+h)*(y0+(h*k3));
		
		cout<<a<<"  |x= "<<k<<"  y= "<<y0<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y0<<endl;
	
}

void Mrk4::mostrar(){
	
	cout<<"Ingrese valor inicial de x : \nx0 = "<<x0<<endl;
	cout<<"Ingrese valor final de x : \nxf ="<<y0<<endl;
	cout<<"Ingrese valor inicial de y : \ny ="<<ax<<endl;
	cout<<"Ingrese numero de iteraciones : \ni ="<<h<<endl;
}






