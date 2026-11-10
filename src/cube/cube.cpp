#include "cube.h"

Cube::Cube() {
    for (int i = 0; i <= 3; i++) { //front
        state[i] = Color::white;
    }
    for (int i = 4; i <= 7; i++) { //right
        state[i] = Color::red;
    }
    for (int i = 8; i <= 11; i++) { //bottom
        state[i] = Color::green;
    }
    for (int i = 12; i <= 15; i++) { //left
        state[i] = Color::orange;
    }
    for (int i = 16; i <= 19; i++) { //top
        state[i] = Color::blue;
    }
    for (int i = 20; i <= 23; i++) { //back
        state[i] = Color::yellow;
    }
}

// index should be 1,2,3,4 starting from top left and clockwise
Color Cube::getSticker(Face face, int index) const{ 
    int face_int = static_cast<int>(face);

    return state[4*face_int + index - 1];
}