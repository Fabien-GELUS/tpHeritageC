/*************************************************************************
                           CollectionTrajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <CollectionTrajet> (fichier CollectionTrajet.h) ----------------
#if ! defined ( COLLECTIONTRAJET_H )
#define COLLECTIONTRAJET_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CollectionTrajet>
//
//
//------------------------------------------------------------------------

class CollectionTrajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Ajouter (const Trajet & tAjouter);
    // Mode d'emploi : Passage en paramètre d'un trajet, qui sera ajouté
    // à tous les trajets actuellement stockés dans la collection, s'il
    // ne s'agit pas d'un doublon bien entendu.
    // Contrat : Le trajet t ne sera pas modifié.
    //

    const Trajet & EnvoyerNiemeTrajet(const unsigned numTrajet) const ;
    // Mode d'emploi : Le trajet placé à la position i sera retourné
    // à l'appelant de cette méthode. Le trajet ainsi que la structure
    // de données contenant les trajets ne sera pas modifiée.
    // Contrat : La valeur numTrajet sera forcément inférieure ou
    // égale à la valeur de cardActuelle


    unsigned EnvoyerCard() const ;
    // Mode d'emploi : Simplement, la cardinalité de la structure de
    // données sera renvoyée.
    // Contrat : La cardinalité n'en est pas pour autant modifiée.
    //

//------------------------------------------------- Surcharge d'opérateurs
    //Xxx & operator = ( const Xxx & unXxx );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CollectionTrajet ( const CollectionTrajet & uneCollectionTrajet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CollectionTrajet (Trajet & t, unsigned cardinaliteMaximale = 10);
    // Mode d'emploi : Construit une structure de données de cardinalité
    // maximale 10 et initialise sa cardinalité actuelle à 0.
    //L'objet nécessite un premier trajet pour être initialisé
    // Contrat : L'objet créé est stable.
    //

    virtual ~CollectionTrajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    const Trajet * * trajets ;
    unsigned cardMax;
    unsigned cardActuelle;
};

//-------------------------------- Autres définitions dépendantes de <CollectionTrajet>

#endif // COLLECTIONTRAJET_H
