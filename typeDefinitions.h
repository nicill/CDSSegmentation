//
// Created by yago on 17/08/15.
//

#include <itkMacro.h>
#include <itkImageFileReader.h>
#include <itkImageFileWriter.h>

#ifndef UNTITLED_TYPEDEFINITIONS_H
#define UNTITLED_TYPEDEFINITIONS_H

const int dimension=3;
typedef float IntensityPixelType; // careful with the pixel type!
typedef itk::Image< IntensityPixelType, dimension > IntensityImageType;
typedef IntensityImageType::Pointer IntensityImage;
typedef IntensityImageType::RegionType IntensityRegionType;
typedef IntensityImageType::SizeType IntensitySizeType;
typedef IntensityImageType::DirectionType IntensityDirectionType;
//typedef itk::ImageRegionIterator<IntensityImageType> IntensityIterator;
//typedef itk::NeighborhoodIterator<IntensityImageType> IntensityNeighborhoodIterator;

typedef itk::ImageFileReader< IntensityImageType > IntensityReaderType;
typedef itk::ImageFileWriter< IntensityImageType > IntensityWriterType;

typedef std::string FileNameType;


#endif //UNTITLED_TYPEDEFINITIONS_H
