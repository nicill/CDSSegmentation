//
// Created by yago on 17/08/15.
//

#include "typeDefinitions.h"
#include "totalOrder3D.h"
#include "coord3D.h"


#ifndef UNTITLED_CDSSEGMENTATIONALGORITHM_H
#define UNTITLED_CDSSEGMENTATIONALGORITHM_H


class CDSSegmentationAlgorithm {

    // functional class, no attributes
    totalOrder3D *order;
    IntensityImage* image;
public:
    IntensityImage *getImage() const;

    void setImage(IntensityImage *image);

    totalOrder3D *getOrder() const;

    void setOrder(totalOrder3D *order);

    CDSSegmentationAlgorithm(coord3D init);
    IntensityImage* segmentWithTotalOrder(float thresh);

};


#endif //UNTITLED_CDSSEGMENTATIONALGORITHM_H
