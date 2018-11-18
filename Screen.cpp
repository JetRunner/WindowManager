//
// Created by Canwen Xu on 2018/11/17.
//
#include <iostream>
#include <vector>
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

void Screen::render(std::vector<Window> windows) {
    std::vector<Window>::iterator it;
    for (it = windows.begin(); it != windows.end(); it++) {
        for (int i = it->getX(); i < std::min(it->getX() + it->getH(), x); i++) {
            for (int j = it->getY(); j < std::min(it->getY() + it->getW(), y); j++) {
                Screen::pixel[i * x + j] = it->getContent();
            }
        }
    }
}
