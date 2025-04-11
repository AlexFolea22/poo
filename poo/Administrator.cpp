#include "Administrator.h"
#include <iostream>

Administrator::Administrator(const std::string & nume, const std::string & prenume,
    const std::string & email, const std::string & parola, const std::string& nrtel,
    int nivelAcces)
    : Utilizator(nume, prenume, email, parola, nrtel), nivelAcces(nivelAcces) {
}

int Administrator::GetNivelAcces() const {
    return nivelAcces;
}

void Administrator::SetNivelAcces(int nivel) {
    nivelAcces = nivel;
}

//Adaugă un loc de parcare în lista administratorului
void Administrator::AdaugaLocParcare(const LocParcare& loc) {
    locuriParcare.push_back(loc);
}

//Ocupă un loc de parcare pe baza ID-ului
void Administrator::OcupaLoc(const std::string& id) {
    for (auto& loc : locuriParcare) {
        if (loc.GetId() == id && !loc.EsteOcupat()) {
            loc.Ocupa();
            std::cout << "Locul " << id << " a fost ocupat.\n";
            return;
        }
    }
    std::cout<<"Locul"<< id<<"este deja ocupat sau nu exista.\n";
}

// Eliberează un loc de parcare pe baza ID-ului
void Administrator::ElibereazaLoc(const std::string& id) {
    for (auto& loc : locuriParcare) {
        if (loc.GetId() == id && loc.EsteOcupat()) {
            loc.Elibereaza();
            std::cout << "Locul " << id << " a fost eliberat.\n";
            return;
        }
    }
    std::cout << "Locul " << id << " nu este ocupat sau nu exista.\n";
}

//Afișează toate locurile de parcare gestionate
void Administrator::AfiseazaLocuri() const {
    std::cout << "Locurile de parcare administrate:\n";
    for (const auto& loc : locuriParcare) {
        std::cout << "ID: " << loc.GetId() << ", Zona: " << loc.GetZona()
            << ", Ocupat: " << (loc.EsteOcupat() ? "Da" : "Nu") << "\n";
    }
}