/*
Autor: Zeus Sarmiento 25/Enero/18

Entradas:
Números con no más de 5 dígitos

Salidas:
La cantidad de dígitos del número entrada

Procedimiento general:
Se calcula la cantidad de dígitos de un número usando un ciclo con 
divisiones hasta que el número llegue a 0
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int valor, numeroDigitos;
	
	/*Entradas*/
	scanf("%d",&valor);
	
	/*Procedimiento*/
	if(valor<0){
		valor = valor * -1;    //Si el valor es negativo, lo convertimos positivo para contar sus digitos
	}
	while(1){
		numeroDigitos++;    //Aumentamos el contador cada vez que hagamos una division
		valor = valor / 10;
		if(valor==0){
			break;   //Cuando acabemos con los digitos, salimos del ciclo
		}
	}
	
	/*Salidas*/
	printf("El numero tiene %d digito(s)",numeroDigitos);
	
	return 0;
}

/*QA
EL programa no compila debido al error:
C:\Users\Lonthy\Desktop\Nueva carpeta\testing\Rainbow-sol1.c:26:26: error: C++ style comments are not allowed in ISO C90 */
