#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    std::string password;
    // Add other user-related fields as needed

public:
    User(const std::string& username, const std::string& password);

    std::string getUsername() const;
    std::string getPassword() const;
};

#endif // USER_H
