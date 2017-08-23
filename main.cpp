#include <iostream>
#include "typeDefinitions.h"
#include "mriImageIO.h"
#include "CDSSegmentationAlgorithm.h"
#include "coord3D.h"
#include "gridTotalOrder3D.h"


int main(int argc, char *argv[]) {
    std::cout << "Hello, World　CDS SEGMENTATION　!" << std::endl;

    // Variable declaration
    mriImageIO ioHandler;
    coord3D *seed;
    IntensityPixelType intensityTh;

    // total Order Declaration
    gridTotalOrder3D *order;

    // argv[0] contains read file name, open image
    IntensityImage inputImage=ioHandler.ReadIntensityImage(argv[0]);

    // argv[1] contains write file name
    // argv[2,3,4] contains seed point
    seed=new coord3D(atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));

    order=new gridTotalOrder3D(seed);

    CDSSegmentationAlgorithm CDSAlgo(*seed);
    CDSAlgo.setImage(&inputImage);
    CDSAlgo.setOrder();


    // argv[5] contains intensity threshold
    intensityTh=atof(argv[5]);

    // Call the algorithm that does the work
    IntensityImage* outputImage=CDSAlgo.segmentWithTotalOrder(intensityTh);

    // Write result image to File
    ioHandler.WriteIntensityImage(argv[1],*outputImage);

    //clean up
    delete outputImage;
    return 0;
}