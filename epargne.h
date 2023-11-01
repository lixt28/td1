#ifndef EPARGNE_H
#define EPARGNE_H

#include "compte.h"
#include <string>

class Epargne: public Compte{
    public:

    Epargne(std::string numeroCompte, Client client, double solde, double tauxEpargne);
    void depot(double montant) ;
    void afficherTauxEpargne() const;

private:
    double tauxEpargne;
    
    
};



#endif