#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>

namespace Ui {
class About;
}

class About : public QWidget
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

private slots:


    void on_youtubeCPushButton_clicked();

    void on_youtubeTPushButton_clicked();

    void on_vkButton_clicked();

    void on_githubCButton_clicked();

    void on_githubTButton_clicked();

    void on_vkTButton_clicked();

    void on_vkCButton_clicked();

private:
    Ui::About *ui;
};

#endif // ABOUT_H
