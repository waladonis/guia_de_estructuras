#include <stdio.h>
#include <stdlib.h>

int main (){
	
	system("color 1f");
    	system("title Sala de Cine");


	
						//Variables 
	int f=5, c=5, i1=0, i2=0;
		int sala [f][c];
			int opcion=1,asiento=1,posicion=0,contador;
				double precio1=5.0,precio2=3.50,precio3=2.50,ganancia;
	
	
	
						//llenado de martiz 
	for(i1=0;i1<f;i1++){
		for(i2=0;i2<c;i2++){
			sala[i1][i2]=asiento;
				asiento=asiento+1;
		}
	}
						//MENU
	
	while (opcion==1 || opcion==2 || opcion==3){
		printf ("\n\t\t\t-MENU-\n");
			printf ("\n1. Ventas Asientos.\n");
				printf ("\n2. Estado de Asientos.\n");
					printf ("\n3. Total de Ganancias.\n ");
						printf ("\n\t\t    4. -SALIR-\n\n");
							scanf ("%d",&opcion);
	printf("\n\n");
	
				//Switch de Opciones
	switch (opcion){
		
				//1. Ventas Asientos.
		case 1:
				//Asientos Disponibles y Ocupados.
			for(i1=0;i1<f;i1++){
				for(i2=0;i2<c;i2++){
					printf (" %d\t",sala[i1][i2]);
					}
				    printf("\n");
			}
				//Realizar Venta.
			printf ("\nSeleccione un asiento.\n");
			scanf ("%d",&posicion);
			
			for(i1=0;i1<f;i1++){
				for(i2=0;i2<c;i2++){
					if (sala[i1][i2]==posicion){
						sala[i1][i2]=0;
						if (posicion>=1 & posicion<=5){
						ganancia=ganancia+precio1;
						}
						if (posicion>=6 & posicion<=20){
						ganancia=ganancia+precio2;
						}
						if (posicion>=21 & posicion<=25){
						ganancia=ganancia+precio3;
						}
						
					}
				//Mostrando Asientos Ocupados
						if (sala[i1][i2]==0){
						printf ("\nAsiento numero %d ocupado.\n",posicion);
					}
					
					}
				    
			}break;
		
				//2. Estado de Asientos.
		case 2:
				
			for(i1=0;i1<f;i1++){
				for(i2=0;i2<c;i2++){
				printf (" %d\t",sala[i1][i2]);
					}
				printf("\n");
			}break;
				
				//3. Total de Ganancias.
		case 3: 
				
		
				printf ("\nTotal de Ganancias: %2f.\n",ganancia);
				break;
			
	}		
	}
	return 0;			
}
