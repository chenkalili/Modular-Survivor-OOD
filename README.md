# Modular-Survivor-OOD

A 2D survival arcade game built with **C++** and **SFML**, emphasizing robust software architecture and modern development patterns.

## 🛠 Technical Highlights
The project demonstrates advanced Object-Oriented Programming (OOP) and clean code practices:

* **Design Patterns:**
    * **Strategy:** Decouples movement logic from game entities for dynamic behavior.
    * **State:** Manages complex player transitions (Jumping, Crouching, Riding).
    * **Factory Method:** Centralized creation of animated obstacles and items.
    * **Singleton:** Efficient management of global resources (Textures, Audio).
* **Modern C++:** Extensive use of `std::ranges`, **Smart Pointers** (`std::unique_ptr`), and **Move Semantics**.
* **Architecture:** A polymorphic entity system with a dedicated collision engine.

## 🚀 Getting Started
### Prerequisites
* C++20 Compiler
* SFML 2.5+
* CMake 3.10+

### Build Instructions
1. Clone the repository.
2. Create a build directory: `mkdir build && cd build`.
3. Run CMake: `cmake ..`.
4. Build the project: `make` (or use your IDE).

## 📁 Project Structure
* `src/` - Implementation files (.cpp)
* `include/` - Header files (.h)
* `resources/` - Game assets (Images, Fonts, Sounds)
* `CMakeLists.txt` - Build configuration
