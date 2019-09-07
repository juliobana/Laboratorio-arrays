#include <stdio.h>
#include <stdlib.h>
void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[]);
void ordenarDesc(int parametroArray[],int cant);
void ordenarAsc(int parametroArray[],int cant);
int main()
{
  cargaSecuencialUnArray(miArray,CANTIDAD,"ingrese edad");

}
int DameElMaximo(int parametrosArray[indice];int cant)
 int indice;
 int maximo;
// sacar el maximo
 for(indice=0;indice<cant;indice++){
    if(indice ==0 || parametrosArray[indice]>maximo){
        maximo=parametrosArray[indice];
    }
 }
return maximo;

/**************************************************/
int DameElIndiceMaximo(int parametrosArray[];int cant){
 int indice;
 int IndiceDelMaximo;
for(indice=0;indice<cant;indice++){
    if(indice ==0 || parametrosArray[indice]>maximo){
        maximo=parametrosArray[indice];
        IndiceDelMaximo=indice;
    }
 }
return IndiceDelMaximo;

/***************************/
int DameElIndiceMaximo(int parametrosArray[];int cant){
 int indice;
 int IndiceDelMaximo;
 int maximo;
 maximo=DameElIndiceMaximo(parametrosArray,cant);
for(indice=0;indice<cant;indice++){
    if(parametrosArray[indice]==maximo){
        maximo=parametrosArray[indice];
        IndiceDelMaximo=indice;
    }
 }
return IndiceDelMaximo;
/*****************************/
void inicializarUnArray(int parametroArray[],int cant){
int indice;
for(indice=0;indice<cant;indice++){
    parametrosArray[indice]=0
    }
}

/********************************/
void mostrarUnArray(int parametroArray[],int cant){
int indice;
for(indice=0;indice<cant;indice++){
    printf("\n numero: %d"parametrosArray[indice]);
    }
}
/**********************************/
void cargaSecuencialUnArray(int parametroArray[],int cant){
    int indice;
    for(indice=0;indice<cant;indice++){
        printf("\n ingrese numero");
        scanf("%d",&parametroArray[indice]);
        {
    }
}
/**********************************/
void inicializarUnArray(int parametroArray[],int cant, int inicilizacion){
int indice;
for(indice=0;indice<cant;indice++){
    parametrosArray[indice]=0
    }
}
/******************Cargar mensaje array por char******************/
void cargaSecuencialUnArray(int parametroArray[],int cant, char mensaje[]){
    int indice;
    for(indice=0;indice<cant;indice++){
        printf("\n%s"mensaje);
        scanf("%d",&parametroArray[indice]);
        {
    }
}

/************************Ordenar Array por burbujeo********************************/

void ordenarDesc(int parametroArray[],int cant){
    int indice;
    int Siguiente;
    int aux;
    for(indice=0;indice<cant-1;indice++){
        for(Siguiente=indice+1;Siguiente < cant;Siguiente++){

            if(parametroArray[indice]>parametroArray[Siguiente]>)){

                aux=parametroArray[indice];
                parametroArray[indice]=parametroArray[Siguiente];
                parametroArray[Siguiente]=aux;
            }
        }

}


}
