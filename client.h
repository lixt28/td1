#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client{
    public:
    Client(std::string nom, std::string prenom, std::string genre, std::string adresse, int dateNaissance);
    
    std::string getNom() const;
    std::string getPrenom() const;
    std::string getAdresse() const;
    int getDateNaissance() const;
    
    private:
    std::string _nom;
    std::string _prenom;
    std::string _genre;
    std::string _adresse;
    int _dateNaissance;
};

#endif