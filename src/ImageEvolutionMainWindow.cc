/**
 ******************************************************************************************
 * @file    MainWindow.cc
 * @author  K. Czechowicz, B. Niemiec
 *******************************************************************************************
 */

#include <QWidget>
#include <QPixmap>
#include <QString>
#include <QObject>
#include <QFileDialog>
#include <QDir>
#include "ui_mainwindow.h"
#include "ImageEvolutionMainWindow.h"

ImageEvolutionMainWindow::ImageEvolutionMainWindow( QWidget *parent ) :
    QMainWindow( parent ), ui_( new Ui::MainWindow )
{
    ui_->setupUi( this );
    QObject::connect( ui_->push_button, &QPushButton::clicked, this, &ImageEvolutionMainWindow::onClicked );
}

ImageEvolutionMainWindow::~ImageEvolutionMainWindow(){
    delete ui_;
}

void ImageEvolutionMainWindow::onClicked(){
    QString url = QFileDialog::getOpenFileName( this,
                                tr( "Open Image" ),
                                QDir::currentPath(),
                                tr( "Image Files (*.png *.jpg *.bmp)" ) );
    QPixmap img( url );
    ui_->label->setPixmap( img );
    ui_->label->setScaledContents( true );
    ui_->push_button_2->setEnabled( true );
}