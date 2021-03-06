#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "QFile"

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    static bool theme_is_black;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_confirm_button_clicked();

private:

    Ui::Settings *ui;
};

#endif // SETTINGS_H
