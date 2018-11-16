//
// Created by Canwen Xu on 2018/11/16.
//

#include "Window.h"

int Window::getX() const {
    return x;
}

void Window::setX(int x) {
    Window::x = x;
}

int Window::getY() const {
    return y;
}

void Window::setY(int y) {
    Window::y = y;
}

int Window::getZ() const {
    return z;
}

void Window::setZ(int z) {
    Window::z = z;
}

int Window::getW() const {
    return w;
}

void Window::setW(int w) {
    Window::w = w;
}

int Window::getH() const {
    return h;
}

void Window::setH(int h) {
    Window::h = h;
}

char Window::getContent() const {
    return content;
}

void Window::setContent(char content) {
    Window::content = content;
}

bool Window::operator<(const Window &window) {
    return this->z < window.z;
}
