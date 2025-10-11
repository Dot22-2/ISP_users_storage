#include "AdminUser.hpp"
#include "GuestUser.hpp"
#include "ConnectionManager.hpp"

int main() {
    AdminUser admin(1, "Dmytro");
    GuestUser guest(2, "Olena");

    ConnectionManager manager;
    manager.manageConnection(admin);
    manager.manageConnection(guest);

    admin.banUser(2);
    admin.resetPassword(2);

    return 0;
}
