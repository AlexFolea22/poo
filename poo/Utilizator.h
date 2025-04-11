#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include <string>

class Utilizator {
private:
    std::string m_Nume;
    std::string m_Prenume;
    std::string m_Email;
    std::string m_Parola;
    std::string m_NrTel;

public:
	Utilizator();
    Utilizator(const std::string& nume, const std::string& prenume, const std::string& email, const std::string& parola, const std::string &nrtel);
    std::string GetNume() const;
    std::string GetPrenume() const;
    std::string GetEmail() const;
    std::string GetParola() const;
    std::string GetNrTel() const;
    void SetNume(const std::string& nume);
    void SetPrenume(const std::string& prenume);
    void SetEmail(const std::string& email);
    void SetParola(const std::string& parola);
    void SetNrTel(const std::string& nrtel);
};

#endif // UTILIZATOR_H