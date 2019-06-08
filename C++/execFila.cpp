#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct cel{
	struct cel* prox;
	char dado;
	int prioridade;
};

typedef struct cel celula;

celula* inicializa();

celula* cria(char v, int prioridade);

celula* inserir_dado(celula* f, char dado, int prioridade);

celula* retira(celula* f, char v);

int vazia(celula* f);

void imprimir(celula* f);

char prox_da_fila(celula* f);

 celula* inicializa(){
 	return NULL;
 }
 
 int vazia(celula* f){
 	return (f==NULL);
 }
 
 void imprimir(celula* f){
 	celula* t=f;
 	printf("%c(%d) -", t->dado, t->prioridade);
 	
 	while(t->prox!=NULL){
 		t = t->prox;
 		printf("%c(%d) -", t->dado, t->prioridade);
	 };
	 
	 return;
 }
 
 celula* cria(char v, int prioridade){
 	celula* p = (celula*) malloc (sizeof(celula));
 	p->dado = v;
 	p->prioridade = prioridade;
 	return p;
 }
 
 celula* inserir_dado(celula* f, char dado, int prioridade){
 	celula* novo = cria(dado, prioridade);
 	celula* ant = NULL;
 	celula* p = f;
 	
 	while(p!=NULL && p->prioridade<=prioridade){
 		ant = p;
 		p = p->prox;
	 }
	 
	 if(ant == NULL){
	 	novo->prox = f;
	 	f = novo;
	 }
	 else{
	 	novo->prox = ant->prox;
	 	ant->prox = novo;
	 }
 	return f;
 }
 
 celula* retira( celula* f, char v){
 	celula* ant = NULL;
 	celula* p =f;
 	
 	while(p!=NULL && p->dado != v){
 		ant = p;
 		p = p->prox;
	 }
	 
	 if( p == NULL) return f;
	 if( ant == NULL) f= p->prox;
	 else ant->prox = p->prox;
	 
	 free(p);
	 
	 return f;
 }
 
 char prox_da_fila(celula* f){
 	celula* temp = f;
 	return temp->dado;
 }
 
