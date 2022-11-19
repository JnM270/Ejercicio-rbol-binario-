//Ejercicio árbol binario. Juan Bauza

#include<stdio.h>
#include<stdlib.h>

struct Nd{
	
struct Nd *Ndpadre;
struct Nd *Ndizquierdo;
struct Nd *Ndderecho;
int valor;
// Nd significa nodo	
};

struct Nd *CrearNd(struct Nd*Ndpadre, int valor);
void InsertarV(struct Nd * arbol, int valor);
void preorden(Nd*arbol);
	
int main(){
	
struct Nd *arbol;
arbol = CrearNd(NULL,71);
InsertarV(arbol,58);
InsertarV(arbol,89);
InsertarV(arbol,26);
InsertarV(arbol,27);
InsertarV(arbol,63);
}

//Crear nodo

struct Nd *CrearNd(struct Nd*Ndpadre, int valor){
	
struct Nd*Ndc = (struct Nd*) calloc(sizeof(struct Nd), 1);
Ndc ->Ndpadre = Ndpadre;
Ndc ->valor = valor;
return Ndc;	
}

//Insertar un valor:

void InsertarV(struct Nd*arbol, int valor){

struct Nd *j, *m;
int Ndderecho = 0;
if(arbol){
j = arbol;

while(j != NULL){
m = j;
if(valor > j ->valor){
j = j ->Ndderecho;
Ndderecho = 1;

}
else{

j = j->Ndizquierdo;
Ndderecho = 0;
}
}

j = CrearNd(m, valor);
if(Ndderecho){
printf("El nodo %d se encuentra del lado derecho de %d \n\n", valor, m->valor);
m->Ndderecho = j;

}
else{
printf("El nodo %d se encuentra del lado izquierdo de %d \n\n", valor, m->valor);
m->Ndizquierdo = j;
}
}
else{
printf("Intenta nuevamente");
}
}
//Recorrido del árbol (Preorden):

void preorden(Nd*arbol){

if(arbol == NULL){
return;
}
else{
printf(" \n\n\n ", arbol -> valor);
preorden(arbol -> Ndizquierdo);
preorden(arbol -> Ndderecho);
}
}
