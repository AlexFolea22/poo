#include "Rezervare.h"

std::string Rezervare::GetEmail() const{
	return m_Email;
}
std::string Rezervare::GetIdLoc() const{
	return m_IdLoc;
}
std::string Rezervare::GetData() const {
	return m_Data;
}
void Rezervare::SetData(const std::string &data) {
	m_Data = data;
}