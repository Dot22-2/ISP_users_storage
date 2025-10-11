#pragma once
#include "Connectable.hpp"
#include <vector>

class ConnectionManager {
public:
    void manageConnection(Connectable& user) {
        user.connect();
        user.disconnect();
    }
};
