/**
 * Project Untitled
 */


#ifndef _DOCUMENT_H
#define _DOCUMENT_H

class Document {
public: 
    void nom;
    void format;
    
Document getDocument();
private: 
    
/**
 * @param user
 */
boolean isAccessible(Utilisateur user);
};

#endif //_DOCUMENT_H