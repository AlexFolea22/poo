#include <iostream>
#include <fstream>
#include <map>
#include <string>

class Auth {
private:
    std::map<std::string, std::string> users; 
    const std::string CREDENTIALS_FILE = "users.txt";  
    void LoadCredentials(); 
    void SaveCredentials(const std::string& email, const std::string& password); 
public:
    Auth(); 
    void Signup(); 
    bool Login(); 
};

