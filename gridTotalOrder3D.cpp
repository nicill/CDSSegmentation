//
// Created by yago on 17/08/16.
//

#include "gridTotalOrder3D.h"


int gridTotalOrder3D::numChildren(coord3D c) {

    //si x extrema inx=0
    //sino si x no es seedx inx=1
    // sino
        // inx = 2
        // si y extrema iny=0
        // sino si y no es seedy iny=1
        // sino
            // iny=2 i fer per inz


    //si inx<2 return 1
    // sino si iny<2 return inx+iny
    // sino return inx+iny+inz


    return 0;
}

coord3D gridTotalOrder3D::ithChild(coord3D c, int i) {

}
