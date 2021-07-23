#include<stdio.h>
#include<utilfecha.h>
#include<math.h>

void convertirSegundos(int segundos){

	double calcularHora = (double)segundos/(SEGUNDOS_a_MIN*MIN_a_HORA);
	double parteDecimalH;	
	int hora = (int) calcularHora;
	parteDecimalH = calcularHora - hora;

	double calcularMinutos = parteDecimalH * MIN_a_HORA;
	double parteEnteraM, parteDecimalM;
	int minutos;
	parteDecimalM = modf(calcularMinutos, &parteEnteraM);
	minutos = (int) parteEnteraM;	

	double calcularSegundos = parteDecimalM * SEGUNDOS_a_MIN;
	int seg = (int) calcularSegundos;
	printf("HORAS \tMINUTOS\tSEGUNDOS\n");
	printf("%d \t%d \t%d\n",hora, minutos,seg);
	
	
}
