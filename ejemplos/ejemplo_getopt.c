#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv){

	char opcion;
	printf("Se recibieron %d argumentos\n", argc);
	//Los argumentos que no reciben argumentos (no seguidos de :),
	//Los pueden poner juntos -ix equivale a -i -x
	while( (opcion = getopt(argc, argv, "ixtf:wp:")) != -1 ){		//argumentos que toman argumento van seguidos de :
										//En este caso f toma argumento. El argumento siempre estara
										//en la variable optarg que es de tipo char * (cadena de caracteres)
		//procesamos argumentos
		
		switch(opcion){
			case 'i':
				printf("Opcion i\n");
				break;
			case 'x':
				printf("Opcion x\n");
				break;
			case 't':
				printf("Opcion t\n");
				break;
			case 'f':
				printf("Opcion f con arguemento %s\n", optarg);
				break;
			case 'w':
				printf("Opcion w\n");
				break;
			case 'p':
				printf("Opcion p con arguemento %s\n", optarg);
				break;
			default:
				break;

		}
	}

	return 0;
}


