#include "info_of_file.hpp"

#include <QApplication>
#include "QStyleFactory"
#include "QFile"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Info_Of_File window;
    // white
//    QFile file(":/resource/styles/style_white_theme.css");
    // black
    QFile file(":/resource/styles/style_black_theme.css");
    file.open(QFile::ReadOnly);

    app.setStyleSheet(file.readAll());


    window.show();

    return app.exec();
}
