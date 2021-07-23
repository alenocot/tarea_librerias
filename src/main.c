#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<utilfecha.h>

int main(int argc, char **argv){
	char opcion;
	int segundos = 0;
	int dias = 0;
	while((opcion=getopt(argc,argv, "s:d:f:"))!=-1){
		switch(opcion){
			case 's':
				segundos = atoi(optarg);
				convertirSegundos(segundos);
				break;
			case 'd':
				dias = atoi(optarg);
				convertirDias(dias);
				break;
			case 'f':
				convertirFecha(optarg);
				break;		
			default:
				break;
		}
	}
}
