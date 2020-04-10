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
#include "variable-locale.h"
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
class Array : public VariableLocale
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  int getSize()
  {
    return this->size;
  }

  string getAddress(int index)
  {
    if (index >= 0 && index < this->size) {
      return to_string(this->address - 4*index) + "(%rbp)";
    }
    else {
      return "";
    }
  }


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // Array (const Array & unArray);
    Array ();


    Array (string name, Type type, int address, int size) : VariableLocale(name, type, address), size(size){}


    virtual ~Array ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  int size;
};

//-------------------------------- Autres définitions dépendantes de <Array>

#endif // VARIABLE_H
