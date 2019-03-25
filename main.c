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
    int date_debut_maladie;
} individu;

void initialisation();
int maladie();

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gama; //probabilité d'être immunisé
int population = 20 * 20;

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
    float p = (float)(rand()%100)/100;
    printf("%f\n",p);
    for(int k; k < (population)*1/2; k++)
    {
        for(int i = 0; i <)
    }
    maladie();
    return 0;
}
