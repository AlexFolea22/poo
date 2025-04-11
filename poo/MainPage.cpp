#include "MainPage.h"

MainPage::MainPage(std::map<std::string, Utilizator>& users) : users(users) {}

void MainPage::Run() {
    std::cout << "\n--- Pagina Principala ---" << std::endl;
    std::cout << "Bine ai venit!" << std::endl;
    std::cout << "Optiuni:" << std::endl;
    std::cout << "1. Afiseaza informatii utilizator" << std::endl;
    std::cout << "2. Iesire" << std::endl;

    int optiune;
    std::cin >> optiune;

    if (optiune == 1) {
        std::string email;
        std::cout << "Introdu emailul pentru a afisa informatiile: ";
        std::cin >> email;

        auto it = users.find(email);
        if (it != users.end()) {
            std::cout << "Nume: " << it->second.GetNume() << std::endl;
            std::cout << "Prenume: " << it->second.GetPrenume() << std::endl;
            std::cout << "Email: " << it->second.GetEmail() << std::endl;
            std::cout << "Numar de telefon: " << it->second.GetNrTel() << std::endl;
        }
        else {
            std::cout << "Utilizatorul nu a fost gasit" << std::endl;
        }
    }
    else if (optiune == 2) {
        return;
    }
    else {
        std::cout << "Optiune invalida" << std::endl;
    }
}