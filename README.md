# C++ Interface Segregation Principle – User Storage

This repository demonstrates a clean application of the **Interface Segregation Principle (ISP)** in C++ by decomposing user capabilities into focused, minimal interfaces.

---

## Project Structure

- `Connectable.hpp` – Interface for connection-related behavior  
- `AdminActions.hpp` – Interface for admin-specific actions  
- `User.hpp` – Base class implementing shared user logic  
- `AdminUser.hpp` – Implements both `Connectable` and `AdminActions`  
- `GuestUser.hpp` – Implements only `Connectable`  
- `ConnectionManager.hpp` – Operates on `Connectable` interface  
- `main.cpp` – Entry point showcasing interface-based polymorphism  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
AdminUser admin(1, "Dmytro");
GuestUser guest(2, "Olena");

ConnectionManager manager;
manager.connect(admin);
manager.connect(guest);

admin.banUser(guest);
