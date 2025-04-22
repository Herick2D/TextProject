#ifdef _WIN32
#include <windows.h>
#endif
#include <iostream>
#include "include/Game.h"

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    try {
        Game game;
        game.run();
    } catch (const std::exception& e) {
        std::cerr << "Erro fatal: " << e.what() << std::endl;
        std::cin.get();
    }

    return 0;
}


