#pragma once
#include "../cube/cube.h"
#include <iostream>
#include <string>

namespace CubePrinter {
    void print(const Cube& cube);
    void printColor(const Cube& cube);
}

char color(const Color& color);
std::string colorBlock(const Color& color);