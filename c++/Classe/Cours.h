/**
 * Project Untitled
 */


#ifndef _COURS_H
#define _COURS_H

#include "Document.h"


class Cours: public Document {
public: 
    void nom;
    
/**
 * @param nom
 */
void getDevoir(String nom);
};

#endif //_COURS_H