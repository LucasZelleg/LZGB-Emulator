#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

list creerListe(int valeur) {
    list* liste = NULL;
    liste = malloc(sizeof(list));
    liste->valeur = valeur;
    return *liste;
}

/*list parcoursList(list* liste) {
    while (liste->elementSuivant) {
        liste = liste->elementSuivant;
    }
    return *liste;
}*/

void printfList(list* liste) {
    printf("[");
    while (liste) {
        if (liste->elementSuivant) {
            printf("%d, ", liste->valeur);
        }
        else {
            printf("%d", liste->valeur);
        }
        liste = liste->elementSuivant;
    }
    printf("]\n");
}

void append(list* liste, int valeurAjoute) {
    list* nouvelElement = NULL;
    nouvelElement = malloc(sizeof(list));
    nouvelElement->valeur = valeurAjoute;
    while (liste->elementSuivant) {
        liste = liste->elementSuivant;
    }
    liste->elementSuivant = nouvelElement;
};