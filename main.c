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

void jour_suivant(individu Matrice_adjacence);
void etat_future_malade(individu i);
void etat_future_sain(individu i, int voisin_malade);


double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gama; //probabilité d'être immunisé

int population = 20 * 20;
int population_longueur = 20;


//Initialisation Matrice d'adjacence
void initialiasation(individu Matrice_adjacence[population_longueur][population_longueur]) {
    for(int k = 0; k < population_longueur; k++){
        for(int i = 0; i < population_longueur; i++){
            Matrice_adjacence[k][i].statut == sain;
        }
    };
}

void jour_suivant(individu Matrice_adjacence[population_longueur][population_longueur]) {
    for (int k; k < population_longueur; k++) {
        for (int i = 0; i < population_longueur; i++) {
            if (Matrice_adjacence[i][k].statut == sain) {
                int voisin_malade=0;
                if (i<population-1 && Matrice_adjacence[i+1][k].statut == malade) {
                    voisin_malade=voisin_malade+1;
                }
                if (i>0 && Matrice_adjacence[i-1][k].statut == malade) {
                    voisin_malade=voisin_malade+1;
                }
                if (k<population-1 && Matrice_adjacence[i][k+1].statut == malade) {
                    voisin_malade=voisin_malade+1;
                }
                if (k>0 && Matrice_adjacence[i][k-1].statut == malade) {
                    voisin_malade=voisin_malade+1;
                }
                etat_future_sain(Matrice_adjacence[k][i],voisin_malade);
            }
            if (Matrice_adjacence[i][k].statut == malade)
                etat_future_malade(Matrice_adjacence[k][i]);
        }
    }
}

void etat_future_malade(individu i) {
    int a;
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

void etat_future_sain(individu i, int voisin_malade) {
    double aleatoire;
    aleatoire=(double)(rand()%100)/100;
    if (aleatoire<=1-pow(lambda,voisin_malade)) {
        i.statut = malade;
    }
    else {
        i.statut = sain;
    }
}


int main() {
    srand(time(NULL)); // permet d'avoir tout le temps des nombres aléatoires

    //initialisation();
    individu Matrice_adjacence[population_longueur][population_longueur];

    initialisation(Matrice_adjacence[population_longueur][population_longueur]);

    jour_suivant(Matrice_adjacence[population_longueur][population_longueur]);


    return 0;
}
