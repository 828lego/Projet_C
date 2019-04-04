#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "graph.h"
#include "tas.h"
#include "pFile.h"

enum etat {sain, immunise, malade, mort}; //états possibles des individus

typedef struct Individu{ //création d'une pour chaque individu
    etat statut;
    int date_debut_maladie;
} individu;

void initialisation(individu Matrice_adjacence);
int maladie();

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gama; //probabilité d'être immunisé
<<<<<<< HEAD
int population;
=======
int population = 20 * 20;
int population_longueur = 20;
>>>>>>> origin/master

//Initialisation Matrice d'adjacence
void initialisation(individu Matrice_adjacence) {

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
<<<<<<< HEAD
    //initialisation();
=======
    individu Matrice_adjacence[population][population];
    initialisation(Matrice_adjacence);
    float p = (float)(rand()%100)/100;
    printf("%f\n",p);
    for(int k; k < population_longueur; k++)
    {
        for(int i = 0; i < population_longueur; i++)
        {
            if(Matrice_adjacence[i][k].statut == sain){
                Matrice_adjacence[i][k] = etat_futur_sain(Matrice_adjacence);
            }
        }
    }
>>>>>>> origin/master
    maladie();
    return 0;
}
