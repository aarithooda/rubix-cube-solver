#include "cube/cube.h"
#include "utils/cube_printer.h"

int main() {
    Cube cube;
    
    std::cout << "print text" << std::endl;
    CubePrinter::print(cube);
    std::cout << "print colors" << std::endl;
    CubePrinter::printColor(cube);

    return 0;
}