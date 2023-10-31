//#ifndef CLIENT_H
//#define CLIENT_H

#include <string>
#include "client.h"

class Compte{
    public:
    Compte(std::string numeroCompte, Client client, double solde);

    void depot(double montant);
    void retrait(double montant);
    void afficherSolde() const;
    //void virement(std::string numeroCompte, double montant);

    private:
    std::string _numeroCompte;
    Client _client;
    double _solde;
};

//#endif