#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int OPCION_SUMA = 1;
	const int OPCION_RESTA = 2;
	const int OPCION_MULTIPLICACION = 3;
	const int OPCION_DIVISION = 4;
	
	int seleccionUsuario;
	int numero1;
	int numero2;
	
	printf("Bienvenido, ingresa un numero: ");
	scanf("%i", &numero1);
	printf("Ingresa otro numero: ");
	scanf("%i", &numero2);
	printf("\n1)Sumar.");
	printf("\n2)Restar.");
	printf("\n3)Multiplicar.");
	printf("\n4)Dividir.");
	printf("\n ");
	printf("\nElige una opcion: ");
    scanf("%i", &seleccionUsuario);
	
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoDivision;
	
	
	switch(seleccionUsuario){
	
		case 1:
			resultadoSuma = numero1 + numero2;
			printf("El resultado de sumar los numeros es: %i.", resultadoSuma);
		break;
		
		case 2:
			resultadoResta = numero1 - numero2;
			printf("El resultado de restar los numeros es: %i.", resultadoResta);
		break;
		
		case 3:
			resultadoMultiplicacion = numero1 * numero2;
			printf("El resultado de multiplicar los numeros es: %i.", resultadoMultiplicacion);
		break;
		
		case 4:
			resultadoDivision = numero1/ numero2;
			printf("El resultado de dividir los numeros es: %i.", resultadoDivision);
		break;
		
		default:
			printf("Operacion no disponible.");
		break;
	
	}
	
	return 0;
}
