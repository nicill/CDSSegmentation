//
// Created by yago on 17/08/16.
//

#ifndef UNTITLED_COORD3D_H
#define UNTITLED_COORD3D_H


#include <ostream>

class coord3D {

int x;
int y;
int z;

public:
    coord3D(int x, int y, int z);

    virtual ~coord3D();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    int getZ() const;

    void setZ(int z);

    bool operator==(const coord3D &rhs) const;

    bool operator!=(const coord3D &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const coord3D &d);
};


#endif //UNTITLED_COORD3D_H
