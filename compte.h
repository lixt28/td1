#ifndef COMPTE_H
#define COMPTE_H

#include <string>
#include "client.h"

class Compte{
    public:
    Compte(std::string numeroCompte, Client client, double solde);

    void depot(double montant);
    void retrait(double montant);
    void virement(double montant, Compte& compte);
    void afficherSolde() const;
    void afficherNumCompte() const;
    double GetSolde() const ;

    private:
    std::string _numeroCompte;
    Client _client;
    double _solde;

    protected:
    void SetSolde(double solde);
};

#endif