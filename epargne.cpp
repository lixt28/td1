#include <iostream>
#include "epargne.h"

Epargne::Epargne(std::string numeroCompte, Client client, double solde, double tauxEpargne)
    : Compte(numeroCompte, client, solde), tauxEpargne(tauxEpargne) {}

void Epargne::depot(double montant) {
    // Calculer l'intérêt à ajouter
    double interet = montant * (tauxEpargne / 100.0);
    
   // Utilisez le getter pour accéder à _solde
    double solde = GetSolde();

    // Ajouter le dépôt et l'intérêt au solde
    solde += montant + interet;
    SetSolde(solde);
    
    std::cout << "Dépôt de " << montant << " EUR réalisé avec succès." << std::endl;
    std::cout << "Intérêt de " << interet << " EUR ajouté au compte." << std::endl;
}

void Epargne::afficherTauxEpargne() const {
    std::cout << "Taux d'épargne : " << tauxEpargne << "%" << std::endl;
}
