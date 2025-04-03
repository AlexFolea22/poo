#include <string>

class LocParcare {
private:
    std::string m_IdParcare;
    std::string m_Zona;
    bool m_Ocupat;

public:
    LocParcare(const std::string& id, const std::string& zona, bool ocupat = false);
    std::string GetId() const;
    std::string GetZona() const;
    void SetId(const std::string& id);
    void SetZona(const std::string& zona);
    bool EsteOcupat() const;
    void Ocupa();
    void Elibereaza();
};
