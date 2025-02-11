/**
 ******************************************************************************************
 * @file    Circle.h
 * @author  K. Czechowicz, B. Niemiec
 * @brief   @todo
 *******************************************************************************************
 */

#ifndef CIRCLE_H
#define CIRCLE_H

struct RGB{
    int R;
    int G;
    int B;
};

struct Position{
    int x;
    int y;
};

class Circle{
    public:
        Circle();
        float radius_;
        struct RGB color_;
        struct Position position_;
        bool is_visible_;
};

#endif //CIRCLE_H