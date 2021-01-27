#include "POVMaker.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    POVMaker w;
    w.show();
    return a.exec();
}
