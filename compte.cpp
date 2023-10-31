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

void Compte::afficherSolde() const {
    std::cout << "Solde du compte " << _numeroCompte << " : " << _solde << " EUR." << std::endl;
}

// void Compte::virement(std::string numeroCompte, double montant){
//     if (montant <= _solde) {
//         _solde -= montant;
//         std::cout << "Virement de " << montant << " réalisé avec succès vers le compte " << numeroCompte << std::endl
//                   << "Nouveau solde : " << _solde << std::endl;
//     }
//     else {
//         std::cout << "Fonds insuffisants pour effectuer le virement de " << montant << std::endl;
//     }
// }