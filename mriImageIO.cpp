//
// Created by yago on 17/08/15.
//

#include "mriImageIO.h"

IntensityImage mriImageIO::ReadIntensityImage(FileNameType fileName) {
    // Init
    IntensityReaderType::Pointer intreader = IntensityReaderType::New();;
    IntensityImageType::Pointer intimage = NULL;

    if (fileName.compare("")!=0) {
        itk::SimpleDataObjectDecorator<std::string>* otherName;
        otherName->Set(fileName);
        intreader->SetFileName(otherName );
        // Reading the image.
        try {
            intreader->Update();
            intimage = intreader->GetOutput();
        }
        catch (itk::ExceptionObject & e) {
            std::cerr << "exception in file reader " << std::endl;
            std::cerr << e.GetDescription() << std::endl;
            std::cerr << e.GetLocation() << std::endl;
        }
    }
    return(intimage);
}


void mriImageIO::WriteIntensityImage(FileNameType fileName,IntensityImage intimage) {
    // Init
    IntensityWriterType::Pointer intwriter = IntensityWriterType::New();

    if (fileName.compare("")!=0) {
        itk::SimpleDataObjectDecorator<std::string>* otherName;
        otherName->Set(fileName);
        intwriter->SetFileName( otherName->Get().c_str() );
        intwriter->SetInput( intimage );
        // Reading the image.
        try {
            intwriter->Update();
        }
        catch (itk::ExceptionObject & e) {
            std::cerr << "exception in file reader " << std::endl;
            std::cerr << e.GetDescription() << std::endl;
            std::cerr << e.GetLocation() << std::endl;
        }
    }
}