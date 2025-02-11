/**
 ******************************************************************************************
 * @file    Image.cc
 * @author  K. Czechowicz, B. Niemiec
 *******************************************************************************************
 */

#include "Image.h"
#define cimg_use_png 1
#include "CImg.hpp"


Image::Image( char* const path ){
    cimg_library::CImg<unsigned char> img( path );
    Image::cimage_ = img;
}

void Image::display(){
    cimage_.display();
}

