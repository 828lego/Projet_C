#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "graph.h"
#include "tas.h"
#include "pFile.h"

enum etat {sain, immunisé, malade, mort}; //états possibles des individus

typedef struct Individu{ //création d'une nouvelle structure
    int ticket;
    int heure_arrivee;
    int duree_attente;
    int debut_service;
    int duree_service;
    int fin_service;
    struct Individu *suiv;
} individu;

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gamma; //probabilité d'être immunisé

int main() {
    printf("Hello, World!\n");
    return 0;
}