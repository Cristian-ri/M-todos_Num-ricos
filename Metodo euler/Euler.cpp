#include<math.h>
#include<iostream>
#include<iomanip>
using std::endl;
using std::cout;
using std::cin;
using std::setw;
#include"MetodoNumerico.hpp"
#include"Euler.hpp"


Euler::Euler(double xi,double xf,double yi,double h,double miti,double mitf):MetodoNumerico(xi,xf,yi,h){
	
	
	this->ti=miti;
	this->tf=mitf;
	
}


const double Euler::getti(){
	
	
	return this->ti;
}

void Euler::solucion(double xi,double xf,double yi,double h,double ti,double tf){
	
    int n,a,i;
    double k,f;
    n=(tf-ti)/h;
    f = (xi*yi);
	cout<<"\tf(x,y) = "<<f<<endl;
	k = xi+h;
	for(i = 0; i<n+1 ; i++)
	{
		yi = yi + (h*f);
		f = (k*yi);
		cout<<a<<"\t|x = "<<k<<"\ty = "<<yi<<"\tf(x,y) = "<<f<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<yi<<endl;
    	
    	
    	
	}
    
Euler::Euler(){

	
	
}
void Euler::mostrar(){
	
	cout<<"hola"<<endl;
	
	
}
	
	


