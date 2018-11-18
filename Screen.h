//
// Created by Canwen Xu on 2018/11/17.
//
#include <vector>
#include "Window.h"

#ifndef WINDOWMANAGER_SCREEN_H
#define WINDOWMANAGER_SCREEN_H


class Screen {
    int x, y;
    char *pixel;
public:
    Screen(int x, int y);
    ~Screen();
    void print();
    void clear();
    void render(std::vector<Window> windows);
};


#endif //WINDOWMANAGER_SCREEN_H
