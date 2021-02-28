#ifndef INFO_OF_FILE_HPP
#define INFO_OF_FILE_HPP

#include <QWidget>

#include "QFileInfo"
#include "QGridLayout"
#include "QLineEdit"
#include "QLabel"
#include "settings.h"

class Info_Of_File : public QWidget
{
    Q_OBJECT
public:
    explicit Info_Of_File(QWidget *parent = nullptr);

private slots:
    void get_info_of_file();
    void set_text_font_size();
    void open_about_window();
    void open_setting_slot();

private:
    QFileInfo *m_file;
    QGridLayout *grid;
    QLineEdit *get_file_name;
    QLabel *info;
    QString size_text_pixels;
    QLineEdit *get_text_size;
    Settings *settings;
protected:
    void keyPressEvent(QKeyEvent *event);
//    void paintEvent(QPaintEvent *event);
};

#endif // INFO_OF_FILE_HPP
