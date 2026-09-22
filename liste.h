typedef struct list list;
struct list {
    int valeur;
    list* elementSuivant;
};
list creerListe(int valeur);
void printfList(list* liste);
void append(list* liste, int valeurAjoute);