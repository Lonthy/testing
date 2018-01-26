/*
Autor: Zeus Sarmiento 25/Enero/18

Entradas:
Números con no más de 5 dígitos

Salidas:
La cantidad de dígitos del número entrada

Procedimiento general:
Se calcula la cantidad de dígitos de un número usando un ciclo con 
en el que se identifiquen en qué rango se encuentra el número y así, 
obtener su número de dígitos
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int valor, exponente=1, numeroDigitos, banderaNegativo=0;
	
	/*Entradas*/
	scanf("%d",&valor);
	
	/*Procedimiento*/
	if(valor<0){
		valor = valor * -1;    //Si el valor es negativo, lo convertimos positivo para contar sus digitos
	}
	for(int i=1 ; i<=5 ; i++){
		exponente = exponente * 10;
		if(exponente >= valor){		//Asignamos el valor de digitos cuando lleguemos a este punto
			numeroDigitos = i;
			break;
		}
	}
	
	/*Salidas*/
	printf("El numero tiene %d digito(s)",numeroDigitos);
	return 0;
}
/*QA
EL programa no compila debido al error:
C:\Users\Lonthy\Desktop\Nueva carpeta\testing\Rainbow-sol1.c:26:26: error: C++ style comments are not allowed in ISO C90 */
