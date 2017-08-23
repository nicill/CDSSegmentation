//
// Created by yago on 17/08/16.
//

#include "totalOrder3D.h"
#include "coord3D.h"

#ifndef UNTITLED_GRIDTOTALORDER3D_H
#define UNTITLED_GRIDTOTALORDER3D_H



class gridTotalOrder3D: public totalOrder3D {

public:
    gridTotalOrder3D(coord3D c){}; // check that things work betweeen classes and subclasses

    int numChildren(coord3D c) override;
    coord3D ithChild( coord3D c, int i) override;
};


#endif //UNTITLED_GRIDTOTALORDER3D_H
