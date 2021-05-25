#include <stdio.h>
float edo(float x, float y){
	return -2*x*y*y;             //calcula los valores segun la EDO dada, retornando el resultado
}

int main(){
	float salto;
	float y_0, x_0, m_k, n_k, y_n, t=2;      //inicializa los valores necesarios para resolver la edo
	y_0 = 1;								 //son aquellos que se ocupan en los pasos puestos en el enunciado
	x_0 = 0;
	printf("Ingrese un numero para el salto: ");
	scanf("%f", &salto);
	while(x_0 < t){							  //se almacena lo que el usuario ingresa en la variable salto
		m_k = edo(x_0, y_0);
		y_n = y_0 + m_k*salto;					//estas lineas que se encuentran dentro del loop(while) tienen como objetivo
		x_0 = x_0 + salto;						//realizar las operaciones matematicas que llevan a la resolucion de la EDO.
		n_k = edo(x_0, y_n);					//son los pasos que se mencionan en el enunciado
		y_0 = y_0 + ((m_k + n_k)/2)*salto;
	}
	printf("Con salto: %f\n", salto);			//printea el salto ocupado-el valor ingresado por el usuario-
	printf("el resultado es: %f\n", y_0);       //printea el resultado de la EDO
	return 0;
}