#include <stdlib.h>
#include <stdio.h>
#include "interface.h"

int main(void){
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 10; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->sig = l;
		l = nuevo;
	}
	printf("\nLista original\n");
	print_list(l);

	printf("\n\nLongitud de forma iterativa\n");
	printf("%d\n",longitud_iter(l));

	printf("\nongitud de forma recursica\n");
	printf("%d\n",longitud_rec(l));

	printf("\nSaca el valor maximo\n");
	printf("%d\n",maximo(l));

	printf("\nLista invertida\n");
	print_list(inversa(l));
	printf("\n\n");


	// liberamos memoria
	struct node_struct * sig;
	while(l != NULL){
		sig = l->sig;
		free(l);
		l = sig;
	}

	return 0;
}