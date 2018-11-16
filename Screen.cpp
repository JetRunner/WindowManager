//
// Created by Canwen Xu on 2018/11/17.
//
#include <iostream>
#include "Screen.h"

Screen::Screen(int x, int y) {
    Screen::x = x;
    Screen::y = y;
    Screen::pixel = new char[x * y];
    Screen::clear();
}

Screen::~Screen() {
    delete Screen::pixel;
}

void Screen::clear() {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            Screen::pixel[i * y + j] = ' ';
        }
    }
}

void Screen::print() {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << Screen::pixel[i * y + j];
        }
        std::cout << std::endl;
    }
}
