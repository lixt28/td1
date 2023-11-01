#include "client.h"

Client::Client(std::string nom, std::string prenom, std::string genre, std::string adresse, int dateNaissance):
_nom{nom}, _prenom{prenom}, _genre{genre}, _adresse{adresse}, _dateNaissance{dateNaissance}{}

std::string Client::getNom() const {
    return _nom;
}

std::string Client::getPrenom() const {
    return _prenom;
}

std::string Client::getAdresse() const {
    return _adresse;
}

int Client::getDateNaissance() const {
    return _dateNaissance;
}