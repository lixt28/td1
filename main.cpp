#include <iostream>
#include "client.h"
#include "compte.h"

int main() {
    Client clientJohn("John", "Doe", "Mr", "123 Main St", 1980);
    Compte compteJohn("12345", clientJohn, 1000);

    compteJohn.afficherSolde();
    compteJohn.depot(500);
    compteJohn.afficherSolde();
    compteJohn.retrait(300);
    compteJohn.afficherSolde();

    return 0;
}