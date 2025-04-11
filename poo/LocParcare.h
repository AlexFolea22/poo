#ifndef LOCPARCARE_H
#define LOCPARCARE_H

#include <string>

class LocParcare {
private:
    std::string m_IdParcare;
    std::string m_Zona;
    std::string m_IdLoc;
    bool m_Ocupat;

public:
    LocParcare(const std::string& id, const std::string& zona, bool ocupat = false);
    std::string GetId() const;
    std::string GetZona() const;
    void SetIdParcare(const std::string& idparcare);
    void SetIdLoc(const std::string& idloc);
    void SetZona(const std::string& zona);
    bool EsteOcupat() const;
    void Ocupa();
    void Elibereaza();
};
#endif //LOCPARCARE_H