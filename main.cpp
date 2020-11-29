#include <QtWidgets>
#include <QApplication>
#include "mainwidget.h"
#include "todolist.h"

int main(int argc, char *argv[])
{
    // Creates an instance of QApplication
    QApplication a(argc, argv);

    // This is our MainWidget class containing our GUI and functionality
    // MainWidget w;
    // w.show(); // Show main window

    CToDoList app;
    app.show();

    // run the application and return execs() return value/code
    return a.exec();
}