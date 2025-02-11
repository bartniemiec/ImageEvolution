/**
 ******************************************************************************************
 * @file    CircledImage.h
 * @author  K. Czechowicz, B. Niemiec
 * @brief   @todo
 *******************************************************************************************
 */

#ifndef CIRCLED_IMAGE_H
#define CIRCLED_IMAGE_H

#include "Image.h"
#include "Circle.h"

class CircledImage : public Image{
    public:
        CircledImage();
        void addCircle( Circle &circle const );
        void addCircle( std::list<Circle> &circle_list const );
    
    private:
        std::list<Circle> circles_list_;

};

#endif //CIRCLED_IMAGE_H