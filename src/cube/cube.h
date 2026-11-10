#pragma once
#include <iostream>
#include <array>


enum class Color {
    white,
    red,
    green,
    orange,
    blue,
    yellow
};

enum class Face {
    front,
    right,
    bottom,
    left,
    up,
    back
};

class Cube {
private:
    std::array<Color, 24> state;
public:
    Cube();
    Color getSticker(Face face, int index) const;
};