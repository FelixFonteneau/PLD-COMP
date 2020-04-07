/*************************************************************************
                           Variable  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Array> (fichier array.h) ----------------
#if ! defined ( ARRAY_H )
#define ARRAY_H

//--------------------------------------------------- Interfaces utilisées
#include "variable.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <Array>
//
// Cette classe correspond a l'objet representant toues les informations d'un
// tableau. Elle hérite de la classe Variable.
//
//------------------------------------------------------------------------
class Array : public Variable
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  int getSize()
  {
    return this->size;
  }

  int getAddress(int index)
  {
    if (index >= 0 && index < this->size) {
      return this->address + 4*index;
    }
    else {
      return -1;
    }
  }


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // Array (const Array & unArray);
    Array ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    Array (string name, Type type, int address, int size) : Variable(name, type, address), size(size){}
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Array ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  int size;
};

//-------------------------------- Autres définitions dépendantes de <Array>

#endif // VARIABLE_H
