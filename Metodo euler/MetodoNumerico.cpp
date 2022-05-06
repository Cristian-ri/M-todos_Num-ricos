#include<math.h>
#include<iostream>
#include<iomanip>
using std::endl;
using std::cout;
using std::cin;
using std::setw;
#include"MetodoNumerico.hpp"

MetodoNumerico::MetodoNumerico(double mixi,double mixf,double miyi,double mih){
	
	this->xi=mixi;
	this->xf=mixf;
	this->yi=miyi;
    this->h=mih;
	
	
	
	
	
}
MetodoNumerico::MetodoNumerico(){
 this->	xi=0;
 this->xf=0;
 this->yi=0;
 this->h=0;
	
}

const double MetodoNumerico::getxi( )const{
	
	
	return this->xi;
} 

const double MetodoNumerico::getxf( )const{
	
	
	return this->xf;
} 

const double MetodoNumerico::getyi( )const{
	
	
	return this->yi;
} 

const double MetodoNumerico::getiteracion( )const{
	
	
	return this->h;
} 


