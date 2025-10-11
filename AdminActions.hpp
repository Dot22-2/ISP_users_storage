#pragma once

class AdminActions {
public:
    virtual void banUser(int userId) = 0;
    virtual void resetPassword(int userId) = 0;
    virtual ~AdminActions() = default;
};
