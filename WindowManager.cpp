//
// Created by Canwen Xu on 2018/11/16.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "WindowManager.h"

int WindowManager::insertWindow(Window window) {
    window.setId(WindowManager::count);
    WindowManager::windows.push_back(window);
    WindowManager::count++;
    return WindowManager::count - 1;
}

std::vector<Window> WindowManager::getQueue() const {
    auto queue = WindowManager::windows;
    std::sort(queue.begin(), queue.end());
    return queue;
}

bool WindowManager::removeWindow(int id) {
    std::vector<Window>::iterator it;
    for (it = windows.begin(); it != windows.end(); it++) {
        if (it->getId() == id) {
            windows.erase(it);
            return true;
        }
    }
    return false;
}


bool WindowManager::resizeWindow(int id, int w, int h) {
    std::vector<Window>::iterator it;
    for (it = windows.begin(); it != windows.end(); it++) {
        if (it->getId() == id) {
            it->setW(w);
            it->setH(h);
            return true;
        }
    }
    return false;
}

bool WindowManager::moveWindow(int id, int x, int y) {
    std::vector<Window>::iterator it;
    for (it = windows.begin(); it != windows.end(); it++) {
        if (it->getId() == id) {
            it->setX(x);
            it->setY(y);
            return true;
        }
    }
    return false;
}

