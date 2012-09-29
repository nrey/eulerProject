#include"main.h"


int main()
{

	euler* implement;
	implement = new eu0001();
	implement->solucion(); // time out
	implement->printsolution();
	delete implement;

	cout<<endl<< "Porcentaje terminado: " << (double) 18/328*100;
	
	cout<<endl<<endl;
	return 0;
}