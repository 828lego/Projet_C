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
double gamma; //probabilité d'être immunisé
int population;

//Initialisation Matrice d'adjacence
void initialisation() {
    individu Matrice_adjacence[population][population];
}

int maladie() {
    double aleatoire;
    aleatoire=(double)(rand()%100)/100;
    printf("%f", aleatoire);
    return 0;
}

int main() {
    srand(time(NULL)); // permet d'avoir tout le temps des nombres aléatoires
    //initialisation();
    printf("%d",rand(100));
    maladie();
    return 0;
}
