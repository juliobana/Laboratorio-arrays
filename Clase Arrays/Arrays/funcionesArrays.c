#include <stdio.h>
#include <stdlib.h>
#include "funcionesArrays.h"


int imprimirArrayInt(int *pArray , int limite)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			printf(" %i",pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}


int cargarArrayInt(int *pArray , int limite, int valor)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{

            pArray[i]= valor;
			printf("\n %i",pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}




int ordernar(int* pArray,int len)
{
    int i;

    int aux;

    int flagEstaDesordenado=0;

    for(i=0; i<(len - 1); i++){
    if(pArray[i]> pArray[i+1]){
    //swap
    aux = pArray[i];
    pArray[i] = pArray[i+1];
    pArray[i+1]=aux;
    flagEstaDesordenado=1;
    }

    }


}


