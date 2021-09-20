/**
 * Project Untitled
 */


#ifndef _ENSEIGNANT_H
#define _ENSEIGNANT_H

#include "Personne-Utilisateur.h"


class Enseignant: public Personne-Utilisateur {
public: 
    string Numen;
    string Harpege;
    
/**
 * @param Cours
 */
Devoir créer-devoir(void Cours);
    
/**
 * @param Rendu
 */
float attribuer-note(void Rendu);
    
/**
 * @param Rendu
 */
void corriger-devoir(void Rendu);
    
/**
 * @param Rendu
 */
string attribuer-avis(void Rendu);
    
void Operation1();
};

#endif //_ENSEIGNANT_H