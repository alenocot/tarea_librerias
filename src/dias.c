#include<stdio.h>
#include<utilfecha.h>
#include<stdlib.h>
#include<math.h>

void convertirDias(int dias){
	double calcularAnos = (double) dias/dias_ANO;
	double parteDecimalA, parteEnteraA;
	int ano;
	parteDecimalA = modf(calcularAnos, &parteEnteraA);
	ano = (int) parteEnteraA;


	double calcularMeses = parteDecimalA * CANT_MESES;
	double parteDecimalM, parteEnteraM;
	int meses;
	parteDecimalM = modf(calcularMeses, &parteEnteraM);
	meses = (int) parteEnteraM;

	double calcularDias = parteDecimalM * dias_MES;
	int dia = (int) calcularDias;

	printf("AÑOS\t MESES\t DIAS \n");
	printf("%d \t%d \t%d \n",ano, meses, dia);
	
}
