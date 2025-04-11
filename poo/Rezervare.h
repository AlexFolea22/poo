#ifndef REZERVARE_H
#define REZERVARE_H

#include <string>
#include "Utilizator.h"
#include "LocParcare.h"
class Rezervare {
private:
	std::string m_Email;
	std::string m_IdLoc;
	std::string m_IdRezervare;
	std::string m_Data;

public:
	std::string GetEmail()const;
	std::string GetIdLoc()const;
	std::string GetData()const;
	void SetData(const std::string &data);
	
};
#endif // REZERVARE_H