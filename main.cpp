#include <iostream>
#include "Arete.h"
#include "Sommet.h"
#include "Graphe.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    Graphe graphe = Graphe();
    graphe.lire_fichier("Donnee.txt");
    graphe.sup_dependances();

    return 0;
}
