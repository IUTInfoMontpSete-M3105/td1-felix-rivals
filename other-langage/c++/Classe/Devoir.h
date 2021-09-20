/**
 * Project Untitled
 */


#ifndef _DEVOIR_H
#define _DEVOIR_H

#include "Document.h"


class Devoir: public Document {
public: 
    string nom;
    string description;
    string deadline;
    
void createRendu();
};

#endif //_DEVOIR_H