#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "graph.h"
#include "tas.h"
#include "pFile.h"

enum etat {sain, immunise, malade, mort}; //états possibles des individus

typedef struct Individu{ //création d'une pour chaque individu
    enum etat statut;
} individu;

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gamma; //probabilité d'être immunisé

int main() {
    //Initialisation Matrice d'adjacence
    int taille_population;
    printf("Quelle taille de population voulez vous?");
    scanf("%d",taille_population);
    individu Matrice_adjacence[taille_population][taille_population];


    for(int k; k < )
    return 0;
}

