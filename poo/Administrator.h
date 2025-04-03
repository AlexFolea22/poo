#include "Utilizator.h"
#include "LocParcare.h"
#include <vector>

class Administrator : public Utilizator {
private:
    int nivelAcces;
    std::vector<LocParcare> locuriParcare; // Lista de locuri de parcare

public:
    Administrator(const std::string& nume, const std::string& prenume,
        const std::string& email, const std::string& parola,
        int nivelAcces);

    int GetNivelAcces() const;
    void SetNivelAcces(int nivel);

    void AdaugaLocParcare(const LocParcare& loc);
    void ElibereazaLoc(const std::string& id);
    void OcupaLoc(const std::string& id);
    void AfiseazaLocuri() const;
};

