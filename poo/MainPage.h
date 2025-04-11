#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <iostream>
#include <map>
#include <string>
#include <Utilizator.h>

class MainPage {
private:
	std::map<std::string, Utilizator>& users;
public:
	MainPage(std::map<std::string, Utilizator>& users);
	void Run();

};
#endif //MAINPAGE_H