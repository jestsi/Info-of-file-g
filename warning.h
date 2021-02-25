#ifndef WARNING_H
#define WARNING_H

#include <QWidget>

namespace Ui {
class Warning;
}

class Warning : public QWidget
{
    Q_OBJECT

public:
    explicit Warning(QWidget *parent = nullptr);
    ~Warning();
    void set_Text(QString &text) ;


private slots:
    void on_pushButton_clicked();

private:
    Ui::Warning *ui;
};

#endif // WARNING_H
