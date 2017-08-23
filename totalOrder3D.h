//
// Created by yago on 17/08/15.
//

#include "coord3D.h"

#ifndef UNTITLED_TOTALORDER_H
#define UNTITLED_TOTALORDER_H

#endif //UNTITLED_TOTALORDER_H


// interface to define a total order
class totalOrder3D  {

    coord3D root;
public:
    const coord3D &getRoot() const {
        return root;
    }

    void setRoot(const coord3D &root) {
        totalOrder3D::root = root;
    }

    totalOrder3D(const coord3D &root) : root(root) {}
    virtual totalOrder3D()=0;


    virtual int numChildren(coord3D c)=0;
    virtual coord3D ithChild(coord3D c,int i)=0;
};
