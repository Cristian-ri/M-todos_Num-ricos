#include "Mrk4.hpp"

Mrk4::Mrk4(float _xi, float _xf, float _y, float _a){
	
	this->xi = _xi;
	this->xf = _xf;
	this->y = _y;
	this->a = _a;
	
}

Mrk4::Mrk4(){
	
	this->xi = 0;
	this->xf = 0;
	this->y = 0;
	this->a = 0;
}

void Mrk4::setXi(const float XI){
	
	this->xi = XI;	
}

void Mrk4::setXf(const float XF){
	
	this->xf = XF;	
}

void Mrk4::setY(const float YY){
	
	this->y = YY;
	
}
void Mrk4::setI(const float II){
	
	this->i = II;	
}

const float Mrk4::getXi()const{
	return xi;
}
const float Mrk4::getXf()const{
	return xf;
}
const float Mrk4::getY()const{
	return y;
}
const float Mrk4::getI()const{
	return i;
}

void Mrk4::solucion(){
	
	float k1,k2,k3,k4, h, a, k, i;
	a = getI();
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0  |x= "<<xi<<"  y= "<<y;
	k1 = (xi*y);
	k2 = (xi+(h/2))*(y+((h/2)*k1));
	k3 = (xi+(h/2))*(y+((h/2)*k2));
	k4 = (xi+h)*(y+(h*k3));
	
	cout<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
	k = xi+h;
	for(a=1; a<=i ; a++)
	{
		y = y + ((h/6)*(k1+(2*k2)+(2*k3)+k4));
		k1 = (k*y);
		k2 = (k+(h/2))*(y+((h/2)*k1));
		k3 = (k+(h/2))*(y+((h/2)*k2));
		k4 = (k+h)*(y+(h*k3));
		
		cout<<a<<"  |x= "<<k<<"  y= "<<y<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
	
}

void Mrk4::mostrar(){
	
	cout<<"Ingrese valor inicial de x : \nx0 = "<<xi<<endl;
	cout<<"Ingrese valor final de x : \nxf ="<<xf<<endl;
	cout<<"Ingrese valor inicial de y : \ny ="<<y<<endl;
	cout<<"Ingrese numero de iteraciones : \ni ="<<a<<endl;
}






