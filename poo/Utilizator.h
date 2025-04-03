#include <string>

class Utilizator {
private:
    std::string m_Nume;
    std::string m_Prenume;
    std::string m_Email;
    std::string m_Parola;

public:
    Utilizator(const std::string& nume, const std::string& prenume, const std::string& email, const std::string& parola);
    std::string GetNume() const;
    std::string GetPrenume() const;
    std::string GetEmail() const;
    std::string GetParola() const;
    void SetNume(const std::string& nume);
    void SetPrenume(const std::string& prenume);
    void SetEmail(const std::string& email);
    void SetParola(const std::string& parola);
};
