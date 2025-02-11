/**
 ******************************************************************************************
 * @file    ImageEvolutionController.cc
 * @author  K. Czechowicz, B. Niemiec
 *******************************************************************************************
 */

#include <iostream>
#include <QApplication>
#include <QWidget>
#include "ImageEvolutionMainWindow.h"
#include "ImageEvolutionController.h"
#include "Image.h"


ImageEvolutionController::ImageEvolutionController(){

}

void ImageEvolutionController::runApp( int argc, char *argv[] ){
    
    Image bg( "../forms/images.png" );
    bg.display();

    QApplication a( argc, argv );
    ImageEvolutionMainWindow mw;
    mw.show();
    a.exec();
}