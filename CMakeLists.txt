cmake_minimum_required(VERSION 3.6)
SET(ITK_DIR /home/yago/soft/InsightToolkit-4.11.0/BINARY)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

find_package( ITK REQUIRED )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g ")

include(${ITK_USE_FILE})

set(SOURCE_FILES main.cpp typeDefinitions.h mriImageIO.cpp mriImageIO.h CDSSegmentationAlgorithm.cpp CDSSegmentationAlgorithm.h totalOrder3D.h gridTotalOrder3D.cpp gridTotalOrder3D.h coord3D.cpp coord3D.h)
add_executable(CDSSegmentation ${SOURCE_FILES})
target_link_libraries(CDSSegmentation  ${ITK_LIBRARIES} )



