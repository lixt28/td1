#include "compte.h"
#include <iostream>

Compte::Compte(std::string numeroCompte, Client client, double solde):
_numeroCompte{numeroCompte}, _client{client}, _solde{solde}{}

void Compte::depot(double montant){
    _solde += montant;
    std::cout << "Dépôt de " << montant << " EUR réalisé avec succès." << std::endl;
}

void Compte::retrait(double montant){
    if (montant <= _solde) {
        _solde -= montant;
        std::cout << "Retrait de " << montant << " EUR réalisé avec succès." << std::endl;
    }
    else {
        std::cout << "Solde insuffisant pour effectuer le retrait de " << montant << " EUR." << std::endl;
    }
}

void Compte::virement(double montant, Compte& compte){
    if (montant <= _solde) {
        _solde -= montant;
        std::cout << "Virement de " << montant << " EUR réalisé avec succès vers numero de compte : " << std::endl;
        compte.afficherNumCompte();
        compte.depot(montant);
    }
    else {
        std::cout << "Fonds insuffisants pour effectuer le virement de " << montant << " EUR vers numero de compte :" << std::endl;
        compte.afficherNumCompte();
    }
}

void Compte::afficherSolde() const {
    std::cout << "Solde du compte  " << _numeroCompte << " : " << _solde << " EUR." << std::endl;
}

void Compte::afficherNumCompte() const {
    std::cout <<"Numero de compte :"<< _numeroCompte << std::endl;
}

 double Compte::GetSolde() const {
        return _solde;
    }

    void Compte::SetSolde(double solde) {
        _solde = solde;
    }
