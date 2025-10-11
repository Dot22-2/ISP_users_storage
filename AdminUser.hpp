#pragma once
#include "User.hpp"
#include "Connectable.hpp"
#include "AdminActions.hpp"
#include <iostream>

class AdminUser : public User, public Connectable, public AdminActions {
public:
    AdminUser(int id, const std::string& name) : User(id, name) {}

    void connect() override {
        std::cout << "Admin connected: " << getName() << "\n";
    }

    void disconnect() override {
        std::cout << "Admin disconnected: " << getName() << "\n";
    }

    void banUser(int userId) override {
        std::cout << "Banned user with ID: " << userId << "\n";
    }

    void resetPassword(int userId) override {
        std::cout << "Reset password for user ID: " << userId << "\n";
    }
};
