#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "QFile"
#include "QMainWindow"

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *window, QWidget *parent = nullptr);
    ~Settings();
    static bool theme_is_black;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_confirm_button_clicked();



signals:
    // Отправляем размер шрифта (например, при изменении, или по нажатию кнопки)
    void fontSize(int value);

private:
    QWidget *m_window;
    Ui::Settings *ui;
};

#endif // SETTINGS_H
