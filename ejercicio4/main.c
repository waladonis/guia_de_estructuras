#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz [3][3];
	int inicio1=0;
	int inicio2=0;
	int suma=0;
	
	for (inicio1=0;inicio1<3;inicio1++){
		for (inicio2=0;inicio2<3;inicio2++){
			
			matriz[inicio1][inicio2]= rand ()%10;
			
		}	
	}
	
	for (inicio1=0;inicio1<3;inicio1++){
		for (inicio2=0;inicio2<3;inicio2++){
			
			printf ("%i ", matriz[inicio1][inicio2] );
			
		}
		printf ("\n");	
		
	}

	for (inicio2=0;inicio2<3;inicio2++){
			suma = suma + matriz[0][inicio2];
		}
		printf( "%i es la sumatoria de la primera fila.\n",suma);
		suma=0;
		
	for (inicio2=0;inicio2<3;inicio2++){
			suma = suma + matriz[1][inicio2];
		}
		printf( "%i es la sumatoria de la segunda fila.\n",suma);
		suma=0;
	for (inicio2=0;inicio2<3;inicio2++){
			suma = suma + matriz[2][inicio2];
		}
		printf( "%i es la sumatoria de la tercera fila.\n",suma);
		suma=0;
		
	for (inicio1=0;inicio1<3;inicio1++){
			suma = suma + matriz[inicio1][0];
		}
		printf( "%i es la sumatoria de la primera columna.\n",suma);
		suma=0;
	for (inicio1=0;inicio1<3;inicio1++){
			suma = suma + matriz[inicio1][1];
		}
		printf( "%i es la sumatoria de la segunda columna.\n",suma);
		suma=0;
	for (inicio1=0;inicio1<3;inicio1++){
			suma = suma + matriz[inicio1][2];
		}
		printf( "%i es la sumatoria de la tercera columna.\n",suma);
		suma=0;
		
	
	suma= matriz[0][0] + matriz[1][1] + matriz[2][2];
	printf( "%i es la sumatoria de la diagonal.\n",suma);
	system("PAUSE");     
    return 0;

	
}
