#pragma once
#include "User.hpp"
#include "Connectable.hpp"
#include <iostream>

class GuestUser : public User, public Connectable {
public:
    GuestUser(int id, const std::string& name) : User(id, name) {}

    void connect() override {
        std::cout << "Guest connected: " << getName() << "\n";
    }

    void disconnect() override {
        std::cout << "Guest disconnected: " << getName() << "\n";
    }
};
