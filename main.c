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
int population;

//Initialisation Matrice d'adjacence
void initialisation() {
    individu Matrice_adjacence[population][population];
}

int maladie() {
    double aleatoire;
    aleatoire=(double)(rand()%100)/100;
    printf('%d', aleatoire);
    return 0;
}

int main() {
    srand(time(NULL)); // permet d'avoir tout le temps des nombres aléatoires
    //initialisation();
    maladie();
    return 0;
}
