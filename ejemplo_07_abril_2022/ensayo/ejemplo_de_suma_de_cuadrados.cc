#include <iostream>

int main () {
	
	int suma, pares, cuadrados;
	cuadrados=suma=0;
	
	for(pares=2; pares<=100; pares+=2 )
	{
		cuadrados = pares*pares;
		suma = suma + cuadrados;
        }

	
	std::cout<< "\n La suma de los cuadrados del 0 al cien es:" << suma <<std::endl;

return 0;
}
