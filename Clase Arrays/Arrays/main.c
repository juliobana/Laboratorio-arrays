#include <stdio.h>
#include <stdlib.h>
#include "funcionesArrays.h"
#define QTY_EDADES 5
#define VALOR_EDADES 25
//int imprimirArrayInt(int *pArray , int limite);
int cargarArrayInt(int *pArray , int limite, int valor);


int main()
{

//int edades[QTY_EDADES] = {330,200,300,400,500};
//imprimirArrayInt(edades,QTY_EDADES);
int edades[QTY_EDADES];
cargarArrayInt(edades,QTY_EDADES,VALOR_EDADES);


}

