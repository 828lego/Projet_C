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

void initialisation();
int maladie();

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gama; //probabilité d'être immunisé
int population;

//Initialisation Matrice d'adjacence
void initialisation() {
    individu Matrice_adjacence[population][population];
}

int maladie() {
    int a;
    individu i;
    double aleatoire;
    aleatoire=(double)(rand()%100)/100;
    if (aleatoire<=1-gama) {
        a=0;
    }
    aleatoire=(double)(rand()%100)/100;
    if (a=!0 && aleatoire<=1-beta) {
        a=1;
    }
    else {
        a=2;
    }
    return a;
}

int main() {
    srand(time(NULL)); // permet d'avoir tout le temps des nombres aléatoires
    //initialisation();
    maladie();
    return 0;
}
