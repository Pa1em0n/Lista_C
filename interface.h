#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

struct node_struct{
	int valor;
	struct node_struct* sig;
};

struct node_struct * newNode(int v);

void deleteNode(struct node_struct *n);

void print_list(struct node_struct *l);

int longitud_iter(struct node_struct *l);

int longitud_rec(struct node_struct *l);

int maximo(struct node_struct *l);

struct node_struct * inversa(struct node_struct *l);
