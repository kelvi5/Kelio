#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define NUM_DOCS 10

typedef struct {
float W; //Weight
int doc_id; //Document identifier
} TipoItem; 

typedef struct {
TipoItem *I;
int doc_p; //Last document pointer
} TipoLista; 

void preenche(TipoLista *L){
int i;
TipoItem Aux;
for(i=0; i<NUM_DOCS; i++){
Aux.doc_id = random() % NUM_DOCS;
Aux.W = (float) (random() % NUM_DOCS);
L->I[L->doc_p++] = Aux;
}
}

/* Comparacao para o tipo int (inteiros) */
int compInt (const TipoItem *c1, const TipoItem *c2){
return (c1->doc_id - c2->doc_id);
}

/* Comparacoes para o tipo float (numeros em ponto flutuante) */
//Be careful when comparing floating-point types!!
int compFloat1(const TipoItem *a, const TipoItem *b){
if (b->W - a->W > 0.0)
return 1;
else if (a->W - b->W > 0.0)
return -1;
return 0; //equals
}
//I think the cost of this function is more expensive...
int compFloat2 (const TipoItem *a, const TipoItem *b){
return (10000*(b->W - a->W));
}


int main(){
TipoLista A;
int i, nDocs = NUM_DOCS;

A.I = malloc(nDocs*sizeof(TipoItem));
if (!A.I) {printf ("Erro: Memoria Insuficiente");exit;}

A.doc_p = 0;
preenche(&A);


printf("Antes (numeros aleatorios):\n");
for(i=0; i<NUM_DOCS; i++){
printf("(%d, %.2f)", A.I[i].doc_id, A.I[i].W);
}

//Ordenacao pelo doc_id (int):
qsort (A.I, NUM_DOCS, sizeof (TipoItem), (void *) compInt);
printf("\n\nDepois (Ordenacao pelo doc_id (int)): \n");
for(i=0; i<NUM_DOCS; i++){
printf("(%d, %.2f)", A.I[i].doc_id, A.I[i].W);
}

//Ordenacao pelo W (float):
qsort (A.I, NUM_DOCS, sizeof (TipoItem), (void *) compFloat1);
//OU:
//qsort (A.I, NUM_DOCS, sizeof (TipoItem), (void *) compFloat2);
printf("\n\nDepois (Ordenacao pelo W (float) - ordem decrescente): \n");
for(i=0; i<NUM_DOCS; i++){
printf("(%d, %.2f)", A.I[i].doc_id, A.I[i].W);
}
printf ("\n");

return 0;
}

