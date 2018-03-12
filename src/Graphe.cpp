#include "Graphe.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Graphe::Graphe()
            :m_nbsommets(0)
{

}

Graphe::~Graphe()
{
    for(unsigned int i=0; i<m_sommets.size(); i++)
    {
        m_sommets[i]->~Sommet();
    }
    m_sommets.clear();
}

const int Graphe::getNbsommets()
{
    return m_nbsommets;
}

void Graphe::matrice_adjacence(int ordre)
{
    m_matrice=new int*[ordre];
    for(int i=0; i<ordre; i++)
        m_matrice[i]=new int[ordre];
    m_sommets.resize(0);
}

void Graphe::lire_fichier(string nom_fichier)
{
        string nom;
        ifstream fichier(nom_fichier, ios::in);
        if(fichier)
        {
            fichier >> m_nbsommets;
            cout << "Le nombre de sommets est : " << m_nbsommets << endl;
            matrice_adjacence(m_nbsommets);
            cout << endl << "La matrice d'adjacence est :" << endl;
            for(int i=0; i<m_nbsommets; i++)
            {
                for(int j=0; j<m_nbsommets; j++)
                {
                    fichier >> m_matrice[i][j];
                    cout << m_matrice[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
            fichier.ignore(1);
            for(int i=0; i<m_nbsommets; i++)
            {
                getline(fichier,nom);
                m_sommets.push_back(new Sommet(nom));
                cout << "Sommet numero " << m_sommets[i]->getIntersection() << " : " << m_sommets[i]->getNom() << endl;
            }
            fichier.close();
            cout << endl;
        }
        else
            cerr << " Erreur " << endl;
}

void Graphe::sup_dependances()
{
    for (unsigned int i=0;i<m_sommets.size(); i++)
    {
        for(unsigned int j=0; j<m_sommets.size(); j++)
        {
            if(m_matrice[i][j]==1)
            {
                cout << m_sommets[i]->getNom() << " agit sur " << m_sommets[j]->getNom() << endl;
            }
        }
    }
}
