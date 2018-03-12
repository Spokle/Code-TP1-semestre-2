#ifndef SOMMET_H
#define SOMMET_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Sommet
{
    public:
        Sommet();
        ~Sommet();
        Sommet(string nom);
        string getNom();
        int getIntersection();
        void setNom(string nom);
        void ajouter_dependances(string nom);

    private:
        string m_nom;
        int m_intersection;
        vector <string> m_dependances;
};

#endif
