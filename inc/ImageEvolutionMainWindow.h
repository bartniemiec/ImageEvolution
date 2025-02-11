/**
 ******************************************************************************************
 * @file    ImageEvolutionMainWindow.h
 * @author  K. Czechowicz, B. Niemiec
 * @brief   @todo
 *******************************************************************************************
 */

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include "ui_mainwindow.h"

class ImageEvolutionMainWindow : public QMainWindow{
        // Q_OBJECT
    public:
        explicit ImageEvolutionMainWindow( QWidget *parent = 0 );
        ~ImageEvolutionMainWindow();
    public slots:
        void onClicked();
    private:
        Ui::MainWindow *ui_;
};

#endif //MAIN_WINDOW_H