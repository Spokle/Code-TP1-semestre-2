#ifndef GRAPHE_H
#define GRAPHE_H
#include "Arete.h"
#include "Sommet.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Graphe
{
    public:
        Graphe();
        ~Graphe();
        const int getNbsommets();
        void matrice_adjacence(int ordre);
        void lire_fichier(string nom_fichier);
        void sup_dependances();

    private:
        int** m_matrice;
        int m_nbsommets;
        vector <Sommet*> m_sommets;
};

#endif
