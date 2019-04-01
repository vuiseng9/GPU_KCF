KCF acceleration with Intel GPU



## Requirements

 * Intel Media Driver - https://github.com/intel/media-driver.git
 * OpenCV with Intel_VA Enable  
 * Intel C-for-Media(MDF)  - https://01.org/c-for-media-development-package/downloads



## build & execution
 * Ubuntu 16.04.3
   $ mkdir build
   $ cd build
   $ cmake ..
   $ make
   $ ./GPU_KCF




## Reproducible Environment
1. Setup MDF in docker image, you may refer [here.](https://github.com/vuiseng9/learning-mdf)
2. build OpenCV with ```cmake .. -DWITH_VA_INTEL=ON -DWITH_QT=ON```
3. clone and build this repo

