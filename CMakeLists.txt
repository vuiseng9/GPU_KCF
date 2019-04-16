cmake_minimum_required(VERSION 2.8)
project (GPU_KCF)

#opencv should be re-built with OPENCL, VA and VA_Intel 
set(OPENCV_INCLUDE /usr/local/include/opencv4)
set(OPENCV_LIB /usr/local/lib)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -O0 -I${CMAKE_SOURCE_DIR}/common -I${CMAKE_SOURCE_DIR}/runtime/include -I${OPENCV_INCLUDE} ")
#set(ENABLE_EXPORTS false)
#set(CMAKE_EXE_LINKER_FLAGS "-L$ENV{DL_SDK_LIB} -L${CMAKE_SOURCE_DIR}/3rdparty/gflags/lib")

link_directories(${OPENCV_LIB} ${CMAKE_SOURCE_DIR}/runtime/lib/x64)
add_executable(GPU_KCF src/intelscalar.cpp src/SetupSurface.cpp src/fhog.cpp src/kcftracker.cpp src/main.cpp src/profiler.cpp)
target_link_libraries(GPU_KCF X11 igfxcmrt  va va-drm pthread rt  opencv_core opencv_video opencv_videoio opencv_imgproc opencv_photo opencv_highgui opencv_imgcodecs)


