#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct 
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}compu;

void mostarPc(compu *listaPc);

int main(int argc, char const *argv[])
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int i;
    compu arregloPC[5];
    srand(time(NULL));
    printf("Cargando el arreglo de structura compu\n");
    for ( i = 0; i < 5; i++)
    {
        arregloPC[i].velocidad = rand() % 3 + 1;
        arregloPC[i].anio = rand() % 4 + 2017;
        arregloPC[i].cantidad = rand() % 4 + 1;
        arregloPC[i].tipo_cpu = tipos[rand() % 6];
    }

    mostarPc(arregloPC);

    return 0;
}

void mostarPc(compu *listaPc){
    printf("***********Listado de pc cargadas:*************\n");
    for (int i = 0; i < 5; i++)
    {
        printf("-------------------------------------\n");
        printf("Velocidad: %d \n", listaPc[i].velocidad);
        printf("Año: %d \n", listaPc[i].anio);
        printf("cantidad: %d \n", listaPc[i].velocidad);
        printf("tipo cpu:%s\n", listaPc[i].tipo_cpu);
    }
    printf("***********************************************");
}