#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main() {
    list maListe;
    maListe = creerListe(0);
    for (int i=1; i <= 10; i++) {
        printfList(&maListe);
        append(&maListe, i);
    }
}