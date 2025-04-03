#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "Auth.h"  !

Auth::Auth() {
    LoadCredentials();
}

void Auth::LoadCredentials() {
    std::ifstream file(CREDENTIALS_FILE);
    if (file.is_open()) {
        std::string email, password;
        while (file >> email >> password) {
            users[email] = password;
        }
        file.close();
    }
}

void Auth::SaveCredentials(const std::string& email, const std::string& password) {
    std::ofstream file(CREDENTIALS_FILE, std::ios::app);
    if (file.is_open()) {
        file << email << " " << password << "\n";
        file.close();
    }
}

void Auth::Signup() {
    std::string email, password;
    std::cout << "Introdu un email: ";
    std::cin >> email;

    if (users.find(email) != users.end()) {
        std::cout << "Eroare: Emailul este deja folosit de un alt cont!\n";
        return;
    }

    std::cout << "Alege o parola: ";
    std::cin >> password;

    users[email] = password;
    SaveCredentials(email, password);

    std::cout << "Cont creat cu succes!\n";
}

bool Auth::Login() {
    std::string email, password;
    std::cout << "Introdu emailul: ";
    std::cin >> email;
    std::cout << "Introdu parola: ";
    std::cin >> password;

    if (users.find(email) != users.end() && users[email] == password) {
        std::cout << "Autentificare reusita!" << "\n";
        return true;
    }
    else {
        std::cout << "Eroare: Email sau parola greaita!\n";
        return false;
    }
}
