#include "AuthenticationService.h"

int main() {
    AuthenticationService authService;

    // Example user
    User user("john_doe", "password123");

    // Register user
    authService.registerUser(user);

    // Authenticate user
    bool isAuthenticated = authService.authenticate("john_doe", "password123");

    if (isAuthenticated) {
        std::cout << "Authentication successful" << std::endl;
    } else {
        std::cout << "Authentication failed" << std::endl;
    }

    return 0;
}
