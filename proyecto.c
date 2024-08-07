// gestion_contactos.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTOS 100
#define NOMBRE_LEN 50
#define TELEFONO_LEN 15

typedef struct {
    char nombre[NOMBRE_LEN];
    char telefono[TELEFONO_LEN];
} Contacto;

Contacto contactos[MAX_CONTACTOS];
int total_contactos = 0;

void agregar_contacto() {
    if (total_contactos < MAX_CONTACTOS) {
        printf("Ingrese nombre: ");
        scanf("%s", contactos[total_contactos].nombre);
        printf("Ingrese telefono: ");
        scanf("%s", contactos[total_contactos].telefono);
        total_contactos++;
        printf("Contacto agregado.\n");
    } else {
        printf("No se pueden agregar más contactos.\n");
    }
}

void listar_contactos() {
    printf("Lista de contactos:\n");
    for (int i = 0; i < total_contactos; i++) {
        printf("%d. %s - %s\n", i + 1, contactos[i].nombre, contactos[i].telefono);
    }
}

int main() {
    int opcion;

    do {
        printf("\n1. Agregar contacto\n2. Listar contactos\n3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregar_contacto();
                break;
            case 2:
                listar_contactos();
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 3);

    return 0;
}