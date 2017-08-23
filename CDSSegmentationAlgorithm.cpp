//
// Created by yago on 17/08/15.
//

#include "CDSSegmentationAlgorithm.h"

IntensityImage* CDSSegmentationAlgorithm::segmentWithTotalOrder(float thresh)
{

    // need to define a useful matrix (matrix of booleans with size the same as the image)
    // Get image sizes
    int xSize = image->GetPointer()->GetLargestPossibleRegion().GetSize()[0];
    int ySize = image->GetPointer()->GetLargestPossibleRegion().GetSize()[1];
    int zSize = image->GetPointer()->GetLargestPossibleRegion().GetSize()[2];


    /*    Input

    int perm[-n,n] 							* permutation used to generate the tree
    unsigned int n,m 						* size of the input image
    unsigned int  Image[0,...n-1, 0...m-1] 			* Input image

    int cx, cy								* Coordinates of nipple
    unsigned int cut							* Value used to cut

    Global Variable
    bool Useful[0...n-1, 0....m-1]				* Boolean used to determine if you are part of the solution

    --------------------------------------------------------------------------------
            Tree Operations

    numChildren (x,y): returns the number of children that pixel (x,y) has. It will be an integer between 0 (for leaf) and 4 (only for the center). It uses global variables cx, cy, and perm

    children (x,y,i): returns the coordinates of the i-th children of (x,y)

    --------------------------------------------------------------------------------


    void FindCut() {
        int w

        w=FindCutRecurs(cx,cy)					* Recursively find the weight of the cut

        printf("The total weight of the cut is ", w)

        if (w>0) {
            ReportRecurs(cx,cy)
        }

    }

    int FindCutRecurs(int x int y){
        int w,i

        w=Image[x,y]-cut 						* Benefici de incloure a w en el tall
        for i=0 to numChildren(x,y){ 				* Calculem el benefici dels fills
            w+=FindCutRecurs(children(x,y,i))
        }
        if (w>0){
            Useful[x,y]=1
            Return(w)
            else{
                Useful[x,y]=0
                Return 0
            }
        }
    */



}

CDSSegmentationAlgorithm::CDSSegmentationAlgorithm(coord3D init) {root=init;}

const coord3D &CDSSegmentationAlgorithm::getRoot() const {
    return root;
}

void CDSSegmentationAlgorithm::setRoot(const coord3D &root) {
    CDSSegmentationAlgorithm::root = root;
}

totalOrder3D *CDSSegmentationAlgorithm::getOrder() const {
    return order;
}

void CDSSegmentationAlgorithm::setOrder(totalOrder3D *order) {
    CDSSegmentationAlgorithm::order = order;
}

IntensityImage *CDSSegmentationAlgorithm::getImage() const {
    return image;
}

void CDSSegmentationAlgorithm::setImage(IntensityImage *image) {
    CDSSegmentationAlgorithm::image = image;
}
