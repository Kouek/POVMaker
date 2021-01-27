#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_POVMaker.h"

class POVMaker : public QMainWindow
{
    Q_OBJECT

public:
    POVMaker(QWidget *parent = Q_NULLPTR);

private:
    Ui::POVMakerClass ui;
};
