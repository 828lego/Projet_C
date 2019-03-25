#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "graph.h"
#include "tas.h"
#include "pFile.h"

enum eType {sain, immunisé, malade, mort};

double lambda; //probabilité de tomber malade
double beta; //probabilité de mourir
double gamma; //probabilité d'être immunisé

int main() {
    printf("Hello, World!\n");
    return 0;
}