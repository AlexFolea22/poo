#include <iostream>
#include "Auth.h"
#include <fstream>
#include "Administrator.h"
#include <map>
int main() {
    Auth auth;
    int optiune;

    while (true) {
        std::cout << "\n1. Inregistrare\n2. Autentificare\n3. Iesire\nAlege o optiune: ";
        std::cin >> optiune;

        switch (optiune) {
        case 1: auth.Signup(); break;
        case 2: auth.Login(); break;
        case 3: return 0;
        default: std::cout << "Optiune invalida! Incearca din nou.\n";
        }
    }
}