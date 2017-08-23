//
// Created by yago on 17/08/16.
//

#include "coord3D.h"

coord3D::coord3D(int x, int y, int z) : x(x), y(y), z(z) {}

int coord3D::getX() const {
    return x;
}

void coord3D::setX(int x) {
    coord3D::x = x;
}

int coord3D::getY() const {
    return y;
}

void coord3D::setY(int y) {
    coord3D::y = y;
}

int coord3D::getZ() const {
    return z;
}

void coord3D::setZ(int z) {
    coord3D::z = z;
}

bool coord3D::operator==(const coord3D &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           z == rhs.z;
}

bool coord3D::operator!=(const coord3D &rhs) const {
    return !(rhs == *this);
}

std::ostream &operator<<(std::ostream &os, const coord3D &d) {
    os << "x: " << d.x << " y: " << d.y << " z: " << d.z;
    return os;
}

coord3D::~coord3D() {

}
