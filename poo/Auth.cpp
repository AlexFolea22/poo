#include "Auth.h"
#include <iostream>
#include <fstream>
#include <sstream>

Auth::Auth() {
    LoadCredentials();
}

void Auth::LoadCredentials() {
    std::ifstream file(CREDENTIALS_FILE);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string email, parola, nume, prenume, nrtel;
            if (ss >> email >> parola >> nume >> prenume >> nrtel) {
                Utilizator user(nume, prenume, email, parola, nrtel);
                users[email] = user;
            }
        }
        file.close();
    }
}

void Auth::SaveCredentials(const Utilizator& user) {
    std::ofstream file(CREDENTIALS_FILE, std::ios::app);
    if (file.is_open()) {
        file << user.GetEmail() << " " << user.GetParola() << " " << user.GetNume() << " " << user.GetPrenume() << " " << user.GetNrTel() << "\n";
        file.close();
    }
}

void Auth::Signup() {
    std::string email, password, nume, prenume, nrtel;

    std::cout << "Introdu un email: ";
    std::cin >> email;

    if (users.find(email) != users.end()) {
        std::cout << "Eroare: Emailul este deja folosit de un alt cont!\n";
        return;
    }

    std::cout << "Alege o parola: ";
    std::cin >> password;

    std::cout << "Introdu numele: ";
    std::cin >> nume;

    std::cout << "Introdu prenumele: ";
    std::cin >> prenume;

    std::cout << "Introdu numarul de telefon: ";
    std::cin >> nrtel;

    Utilizator user(nume, prenume, email, password, nrtel);
    users[email] = user;
    SaveCredentials(user);

    std::cout << "Cont creat cu succes!\n";
}

bool Auth::Login() {
    std::string email, password;
    std::cout << "Introdu emailul: ";
    std::cin >> email;
    std::cout << "Introdu parola: ";
    std::cin >> password;

    auto it = users.find(email);
    if (it != users.end() && it->second.GetParola() == password) {
        std::cout << "Autentificare reusita!" << "\n";
        MainPage mainPage(users);
        mainPage.Run();
        return true;
    }
    else {
        std::cout << "Eroare: Email sau parola gresita!\n";
        return false;
    }
}