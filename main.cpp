#include "info_of_file.hpp"

#include <QApplication>
#include "QStyleFactory"
#include "QFile"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    app.setStyleSheet(file.readAll());
    Info_Of_File window;

//    window.setStyleSheet("background-color: #C2C2C2;");
    window.show();

    return app.exec();
}
