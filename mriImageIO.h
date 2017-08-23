//
// Created by yago on 17/08/15.
//

#include "typeDefinitions.h"


#ifndef UNTITLED_MRIIMAGEIO_H
#define UNTITLED_MRIIMAGEIO_H

// Class that deals with reading and writing files to connect them with image objects
class mriImageIO {

    // Functional class, no attributes

public:
    IntensityImage ReadIntensityImage(FileNameType fileName);
    void WriteIntensityImage(FileNameType fileName,IntensityImage intimage);

};


#endif //UNTITLED_MRIIMAGEIO_H
