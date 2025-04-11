#include "AuthPage.h"  

void AuthPage::Start() {
    int optiune;
    while (true) {
        std::cout << "\n1. Inregistrare\n2. Autentificare\n3. Iesire\nAlege o optiune: ";
        std::cin >> optiune;

        switch (optiune) {
        case 1: auth.Signup(); break;
        case 2: auth.Login(); break;
        case 3: return;
        default: std::cout << "Optiune invalida! Incearca din nou.\n";
        }
    }
}