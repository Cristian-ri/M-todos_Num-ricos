#include<iostream>
#include<iomanip>
#include<math.h>

#include"MetodoNumerico.hpp"
#include"Euler.hpp"


int main(){
	


Euler p1;
 p1.solucion(1,2,3,0.05,1,4);
p1.mostrar();

	return 0;
}
