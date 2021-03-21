#include "info_of_file.hpp"

#include <QApplication>
#include "QStyleFactory"
#include "QFile"
#include "QIcon"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Info_Of_File window;

    QFile file(":/resource/styles/style_black_theme.css");
    file.open(QFile::ReadOnly);

    app.setStyleSheet(file.readAll());

    app.setApplicationName("Information file");
    app.setApplicationDisplayName("Information file");

    QIcon icon_window(":/resource/img/logo_window.png");
    icon_window.actualSize(QSize(110, 110));
    app.setWindowIcon(icon_window);

    window.show();

    return app.exec();
}
