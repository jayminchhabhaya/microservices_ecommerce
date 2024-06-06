#include "AuthenticationService.h"

AuthenticationService::AuthenticationService() {}

bool AuthenticationService::authenticate(const std::string& username, const std::string& password) {
    std::lock_guard<std::mutex> lock(mutex);
    if (users.find(username) != users.end()) {
        return users[username].getPassword() == password;
    }
    return false;
}

void AuthenticationService::registerUser(const User& user) {
    std::lock_guard<std::mutex> lock(mutex);
    users[user.getUsername()] = user;
}
