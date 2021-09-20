/**
 * Project Untitled
 */


#ifndef _RENDU_H
#define _RENDU_H

#include "Document.h"


class Rendu: public Document {
public: 
    float note;
    
void uploadDocument();
    
void assignerEnseignant();
};

#endif //_RENDU_H