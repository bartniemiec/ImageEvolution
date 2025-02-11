/**
 ******************************************************************************************
 * @file    Image.h
 * @author  K. Czechowicz, B. Niemiec
 * @brief   @todo
 *******************************************************************************************
 */

#ifndef IMAGE_H
#define IMAGE_H

#include "CImg.hpp"
#include <string>

struct Pixel{
    int R;
    int G;
    int B;
};

class Image{
    public:
        Image( char* const path );
        const struct Pixel getPixelAt( int const x, int const y, int const layer );
        void display();
        
    protected:
        cimg_library::CImg<unsigned char> cimage_;
};
#endif //IMAGE_H