#ifndef AUTHENTICATIONSERVICE_H
#define AUTHENTICATIONSERVICE_H

#include "User.h"
#include <unordered_map>
#include <mutex>

class AuthenticationService {
private:
    std::unordered_map<std::string, User> users;
    std::mutex mutex;

public:
    AuthenticationService();

    bool authenticate(const std::string& username, const std::string& password);
    void registerUser(const User& user);
};

#endif // AUTHENTICATIONSERVICE_H
