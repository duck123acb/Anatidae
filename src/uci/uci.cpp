#include "uci.h"
#include <iostream>
#include <string>

constexpr const char* ENGINE_NAME = "Anatidae";
constexpr const char* ENGINE_AUTHOR = "duck123acb";

void UCI::loop() {
    std::string input;

    while (std::getline(std::cin, input)) {

        if (input == "uci") {
            std::cout << "id name " << ENGINE_NAME << "\n";
            std::cout << "id author " << ENGINE_AUTHOR << "\n";
            std::cout << "uciok\n";
        }
        else if (input == "isready")
            std::cout << "readyok\n";
        else if (input == "quit")
            break;

        std::cout << std::flush;
    }
}