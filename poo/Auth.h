#ifndef AUTH_H
#define AUTH_H


#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "Utilizator.h"
#include "MainPage.h" 

class Auth {
private:
    std::map<std::string, Utilizator> users;
    const std::string CREDENTIALS_FILE = "users.txt";
    void LoadCredentials();
    void SaveCredentials(const Utilizator& user);

public:
    Auth();
    void Signup();
    bool Login();
};

#endif //AUTH_H