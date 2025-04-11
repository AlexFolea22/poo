#include "Utilizator.h"

Utilizator::Utilizator(const std::string& nume, const std::string& prenume, const std::string& email, const std::string& parola, const std::string& nrtel)
    : m_Nume(nume), m_Prenume(prenume), m_Email(email), m_Parola(parola), m_NrTel(nrtel) {
}
Utilizator::Utilizator(){}

std::string Utilizator::GetNume() const {
    return m_Nume;
}

std::string Utilizator::GetPrenume() const {
    return m_Prenume;
}

std::string Utilizator::GetEmail() const {
    return m_Email;
}

std::string Utilizator::GetParola() const {
    return m_Parola;
}
std::string Utilizator::GetNrTel()const {
    return m_NrTel;
}

void Utilizator::SetNume(const std::string& nume) {
    m_Nume = nume;
}

void Utilizator::SetPrenume(const std::string& prenume) {
    m_Prenume = prenume;
}

void Utilizator::SetEmail(const std::string& email) {
    m_Email = email;
}

void Utilizator::SetParola(const std::string& parola) {
    m_Parola = parola;
}
void Utilizator::SetNrTel(const std::string& nrtel) {
    m_NrTel = nrtel;
}