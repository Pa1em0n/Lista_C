#include "interface.h"

//Crea un nuevo nodo de la lista.
struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	//(*n).value = v;
	n->valor = v;
	n->sig = NULL;
	return n;
}
//Elimina un nodo de la lista.
void deleteNode(struct node_struct *n){
	free(n);
}

//Imprime la lista original.
void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l = l->sig){
		printf("%d%c ", l->valor, l->sig != NULL ? ',': ']');
	}
}

//Calcula la longitud de la lista de forma iterativa.
int longitud_iter(struct node_struct* l){
    int cont = 0;
    for(; l != NULL; l = l->sig){
	 	cont++;
        }
	return cont;
}

//Calcula la longitud de la lista de forma recursiva.
int longitud_rec(struct node_struct *l){
	int cont = 0;
	if (l != NULL){
		 l = l->sig;
		cont = 1 + longitud_rec(l);
	}else{
		return 0;
	}
	return cont;
}

//obtiene el valor maximo de los elementos de la lista.
int maximo(struct node_struct *l){
	int m;
	if (l != NULL){
		//l = l;
		m = l->valor;
		return m;
	}else{
		return 0;  
}
}

//Crea la reversa de la lista compiando la misma lista
struct node_struct * inversa(struct node_struct * ls){
	struct node_struct *l = NULL;
	for(; ls != NULL; ls = ls->sig){
		struct node_struct *nuevo;
		nuevo = newNode(ls->valor);
		nuevo->sig = l;
		l = nuevo;
	}
	return l;
}
