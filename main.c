#include<stdlib.h>
#include<stdio.h>
#define ELEMENTOS 5
struct personaje{
    char nombre[20];
    char tipo[20];
    char especie[20];
    int fuerza;
    int salud;
};

struct personaje personajes[ELEMENTOS];

void mostrar(int n, char arreglo[]) {
    for(int a=0;a<n;a++){
        printf("Repetici%cn %i: %s\n",162,a+1,arreglo);
    }
}

int main(){
    int opcion,x,y,w,z,arreglo[5],sumatoria=0,promedio=0;
    char cadena[20];
    printf("SELECCIONE UNA OPCION:\n 1. SUMA Y PROMEDIO\n 2. MOSTRAR ARREGLO\n 3. ESTRUCTURA CON PERSONAJES\n\n");
    printf("Ingrese una de las opciones(1, 2 o 3): ");
    scanf("%i",&opcion);
    printf("\n");
    switch(opcion)
    {
    case 1:
        {
            printf("OPCION 1. SUMA Y PROMEDIO\n");
            printf("INGRESE LOS DATOS PARA EL ARREGLO");
            printf("\n");
            for(x=0;x<=4;x++){
                printf("Ingrese el n%cmero de posici%cn %i:",163,162,x+1);
                scanf("%i",&arreglo[x]);
            }
            printf("\n\nMOSTRANDO DATOS DEL ARREGLO");
            for(x=0;x<=4;x++){
                printf("\nPosici%cn %i: %i",162,x+1,arreglo[x]);
            }
            printf("\n\n\nSUMATORIA Y PROMEDIO DEL ARREGLO");
            for(x=0;x<=4;x++){
                sumatoria=sumatoria+arreglo[x];
            }
            printf("\nSumatoria: %i",sumatoria);
            promedio=sumatoria/5;
            printf("\nPromedio: %i",promedio);
            printf("\n");
            break;
        }
    case 2:
        {
            printf("OPCION 2. MOSTRAR ARREGLO\n");
            printf("INGRESE LOS DATOS DEL ARREGLO:\n");
            printf("Ingrese los datos del arreglo(cadena): ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("\nMOSTRAR DATOS DEL ARREGLO:\n");
            printf("Arreglo(cadena): %s",cadena);
            printf("\n\nMOSTRAR EL ARREGLO N VECES:\n");
            printf("Cuantas veces quieres ver el arreglo: ");
            scanf("%i",&z);
            mostrar(z,cadena);
            break;
        }
    case 3:
        {
            printf("OPCION 3. ESTRUCTURA CON PERSONAJES\n");
            printf("INGRESE LOS DATOS DE LA ESTRUCTURA: \n");
            for(y=0;y<ELEMENTOS;y++){
                printf("PERSONAJE %i\n",y+1);
                printf("Nombre: ");
                scanf("%s",&personajes[y].nombre);
                fflush(stdin);
                printf("Tipo: ");
                scanf("%s",&personajes[y].tipo);
                printf("Especie: ");
                scanf("%s",&personajes[y].especie);
                fflush(stdin);
                printf("Fuerza: ");
                scanf("%i",&personajes[y].fuerza);
                fflush(stdin);
                printf("Salud: ");
                scanf("%i",&personajes[y].salud);
                printf("\n");
                fflush(stdin);
            }
            printf("\n");
            printf("PERSONAJES DENTRO DEL ARREGLO: \n");
            for(y=0;y<ELEMENTOS;y++){
                printf("PERSONAJE %i\n",y+1);
                printf("Nombre: %s\n",personajes[y].nombre);
                printf("Tipo: %s\n",personajes[y].tipo);
                printf("Especie: %s\n",personajes[y].especie);
                printf("Fuerza: %i\n",personajes[y].fuerza);
                printf("Salud: %i\n",personajes[y].salud);
                printf("\n");
            }
            printf("\n");
            break;
        }
    default:
        {
            printf("No hay mas opciones\n");
            break;
        }
    }
    system("pause");
    return 0;
}