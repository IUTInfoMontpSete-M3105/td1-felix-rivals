/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

#include "Personne-Utilisateur.h"


class Admin: public Personne-Utilisateur {
public: 
    
/**
 * @param Enseignant
 */
Cours créer-cours(void Enseignant);
    
/**
 * @param Cours
 */
void supprimer-cours(void Cours);
};

#endif //_ADMIN_H