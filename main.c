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

void initialisation(individu Matrice_adjacence);
void etat_future_malade();

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gama; //probabilité d'être immunisé

int population;

int population = 20 * 20;
int population_longueur = 20;


//Initialisation Matrice d'adjacence
void initialisation(individu Matrice_adjacence) {
    ;
}

void etat_future_malade(individu Individus[20][20]) {
    int a;
    individu i;
    double aleatoire;
    aleatoire=(double)(rand()%100)/100;
    if (aleatoire<=1-gama) {
        a=0;
        i.statut = immunise;
    }
    aleatoire=(double)(rand()%100)/100;
    if (a=!0 && aleatoire<=1-beta) {
        i.statut = mort;
    }
    else {
        i.statut = malade;
    }
}

int main() {
    srand(time(NULL)); // permet d'avoir tout le temps des nombres aléatoires

    //initialisation();

    individu Matrice_adjacence[population][population];
    initialisation(Matrice_adjacence);
    float p = (float)(rand()%100)/100;
    printf("%f\n",p);
    for(int k; k < (population)*1/2; k++)
    {
        for(int i = 0; i < population_longueur; i++)
        {
            if(Matrice_adjacence[i][k].statut == sain)
                Matrice_adjacence[i][k].statut == etat_future_malade
        }

    etat_future_malade();
    return 0;
}
