#include "LocParcare.h"

LocParcare::LocParcare(const std::string& id, const std::string& zona, bool ocupat)
    : m_IdParcare(id), m_Zona(zona), m_Ocupat(ocupat) {
}

std::string LocParcare::GetId() const {
    return m_IdParcare;
}

std::string LocParcare::GetZona() const {
    return m_Zona;
}

void LocParcare::SetIdParcare(const std::string& idparcare) {
    m_IdParcare = idparcare;
}
void LocParcare::SetIdLoc(const std::string& idloc) {
    m_IdLoc = idloc;
}

void LocParcare::SetZona(const std::string& zona) {
    m_Zona = zona;
}

bool LocParcare::EsteOcupat() const {
    return m_Ocupat;
}

void LocParcare::Ocupa() {
    m_Ocupat = true;
}

void LocParcare::Elibereaza() {
    m_Ocupat = false;
}
