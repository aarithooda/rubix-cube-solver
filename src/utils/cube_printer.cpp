#include "cube_printer.h"

char color(const Color& color) {
    switch (color) {
        case Color::white: return 'W';
        case Color::red: return 'R';
        case Color::green: return 'G';
        case Color::blue: return 'B';
        case Color::yellow: return 'Y';
        case Color::orange: return 'O';
    }

    return '?';
}

std::string colorBlock(const Color& color) {
    switch(color) {
        case Color::white:  return "\033[47m  \033[0m"; // White background
        case Color::red:    return "\033[41m  \033[0m"; // Red background
        case Color::green:  return "\033[42m  \033[0m"; // Green background
        case Color::yellow: return "\033[43m  \033[0m"; // Yellow background
        case Color::blue:   return "\033[44m  \033[0m"; // Blue background
        case Color::orange: return "\033[48;5;208m  \033[0m"; // Orange (ANSI 256-color)
    }
}

void CubePrinter::print(const Cube& cube) {
    // front face
    std::cout << "  " << color(cube.getSticker(Face::up, 1)) << color(cube.getSticker(Face::up, 2)) << std::endl;
    std::cout << "  " << color(cube.getSticker(Face::up, 3)) << color(cube.getSticker(Face::up, 4)) << std::endl;
    
    std::cout << color(cube.getSticker(Face::left, 1)) << color(cube.getSticker(Face::left, 2))
              << color(cube.getSticker(Face::front, 1)) << color(cube.getSticker(Face::front, 2))
              << color(cube.getSticker(Face::right, 1)) << color(cube.getSticker(Face::right, 2))
              << std::endl;
    
    std::cout << color(cube.getSticker(Face::left, 3)) << color(cube.getSticker(Face::left, 4))
              << color(cube.getSticker(Face::front, 3)) << color(cube.getSticker(Face::front, 4))
              << color(cube.getSticker(Face::right, 3)) << color(cube.getSticker(Face::right, 4))
              << std::endl;
    
    std::cout << "  " << color(cube.getSticker(Face::bottom, 1)) << color(cube.getSticker(Face::bottom, 2)) << std::endl;
    std::cout << "  " << color(cube.getSticker(Face::bottom, 3)) << color(cube.getSticker(Face::bottom, 4)) << std::endl;

    std::cout << "  " << color(cube.getSticker(Face::back, 1)) << color(cube.getSticker(Face::back, 2)) << std::endl;
    std::cout << "  " << color(cube.getSticker(Face::back, 3)) << color(cube.getSticker(Face::back, 4)) << std::endl;
}

void CubePrinter::printColor(const Cube& cube) {
    // Up face
    std::cout << "    " << colorBlock(cube.getSticker(Face::up, 1)) << colorBlock(cube.getSticker(Face::up, 2)) << std::endl;
    std::cout << "    " << colorBlock(cube.getSticker(Face::up, 3)) << colorBlock(cube.getSticker(Face::up, 4)) << std::endl;
    
    // Left, Front, Right faces side by side
    std::cout << colorBlock(cube.getSticker(Face::left, 1)) << colorBlock(cube.getSticker(Face::left, 2))
              << colorBlock(cube.getSticker(Face::front, 1)) << colorBlock(cube.getSticker(Face::front, 2))
              << colorBlock(cube.getSticker(Face::right, 1)) << colorBlock(cube.getSticker(Face::right, 2))
              << std::endl;
              
    std::cout << colorBlock(cube.getSticker(Face::left, 3)) << colorBlock(cube.getSticker(Face::left, 4))
              << colorBlock(cube.getSticker(Face::front, 3)) << colorBlock(cube.getSticker(Face::front, 4))
              << colorBlock(cube.getSticker(Face::right, 3)) << colorBlock(cube.getSticker(Face::right, 4))
              << std::endl;
    
    // Bottom face
    std::cout << "    " << colorBlock(cube.getSticker(Face::bottom, 1)) << colorBlock(cube.getSticker(Face::bottom, 2)) << std::endl;
    std::cout << "    " << colorBlock(cube.getSticker(Face::bottom, 3)) << colorBlock(cube.getSticker(Face::bottom, 4)) << std::endl;

    // Back face
    std::cout << "    " << colorBlock(cube.getSticker(Face::back, 1)) << colorBlock(cube.getSticker(Face::back, 2)) << std::endl;
    std::cout << "    " << colorBlock(cube.getSticker(Face::back, 3)) << colorBlock(cube.getSticker(Face::back, 4)) << std::endl;
}