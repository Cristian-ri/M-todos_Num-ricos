#include<iostream>
#include<math.h>
using std::endl;
using std::cout;
using std::cin;







void Euler(){
	int i,a;
	float xi,xf,h,k,y,f;

	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
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

int main(){



Euler();





return 0;
}
