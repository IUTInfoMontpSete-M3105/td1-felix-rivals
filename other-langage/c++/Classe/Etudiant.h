/**
 * Project Untitled
 */


#ifndef _ETUDIANT_H
#define _ETUDIANT_H

#include "Personne-Utilisateur.h"


class Etudiant: public Personne-Utilisateur {
public: 
    string numINE;
    
void suivre-cours();
    
void télécharger-cours();
};

#endif //_ETUDIANT_H