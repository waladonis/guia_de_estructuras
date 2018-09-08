#include <stdio.h>
#include <stdlib.h>

int main (){
		system("color 1f");
 		   	system("title Sala de Cine");
    	
    	// Variables 
	int tamano,i,opcion=1,posicion;	
		printf ("\n \tla dimencion del vector.\n");
			scanf ("%d",&tamano);
				int vector [tamano],numero,eliminado;
	 printf("\n");
		//Llenado de Vector 
	for (i=0;i<tamano;i++){
		printf ("\n \tIngrese La Pocicion %d\n\n", i+1);
			scanf ("%d",&numero);
				vector[i]=numero;
	}
	
		// opcion de borrado.
	printf ("\n\tIngrese La Posicion Que Desea Eliminar\n\n");
			scanf ("%d",&posicion);
				printf("\n");
		if (posicion>tamano){
			printf("\tLa Posicion No Existe");
			}
		else {
			eliminado=vector[posicion];
			for (i=0;i<tamano;i++){
				if (i==posicion){
					while (i<tamano){
						vector[i]=vector[i+1];
						i++;
					}break;
				}
				
			}
		tamano=tamano-1;
		for(i=0;i<tamano;i++){
			printf("\t%d  ",vector[i]);
			printf("\n\n");
		}	
		
			//Mensaje de ELiminado
		printf("\n");
		printf("\tEl Valor Eliminado Es %d",eliminado);
			
		}
		return 0;	
		}
	



