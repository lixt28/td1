#include <iostream>
#include "client.h"
#include "compte.h"

int main() {
    Client clientJohn("John", "Doe", "Mr", "123 Main St", 1980);
    Compte compteJohn("12345", clientJohn, 1000);
    Client clientJack("Jack", "Doe", "Mr", "123 Main St", 1980);
    Compte compteJack("12354", clientJack, 1000);

    compteJack.afficherSolde();
    compteJohn.afficherSolde();
    compteJack.virement(100, compteJohn);
    compteJack.afficherSolde();
    compteJohn.afficherSolde();


    return 0;
}