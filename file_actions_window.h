#ifndef FILE_ACTIONS_WINDOW_H
#define FILE_ACTIONS_WINDOW_H

#include <QWidget>
#include "QFile"
#include "QFileInfo"

namespace Ui {
class File_Actions_window;
}

class File_Actions_window : public QWidget
{
    Q_OBJECT

public:
    explicit File_Actions_window(QString &path_to_file,QWidget *parent = nullptr);
    ~File_Actions_window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::File_Actions_window *ui;
    QFile *m_file_m;
    QFileInfo *m_file;
};

#endif // FILE_ACTIONS_WINDOW_H
