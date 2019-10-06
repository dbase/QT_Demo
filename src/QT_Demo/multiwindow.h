#ifndef MULTIWINDOW_H
#define MULTIWINDOW_H

#include <QMainWindow>

namespace Ui {
class MultiWindow;
}

class MultiWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MultiWindow(QWidget *parent = nullptr);
    ~MultiWindow();

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_tabWidget_tabCloseRequested(int index);

    void on_tabWidget_currentChanged(int index);

private:
    Ui::MultiWindow *ui;
};

#endif // MULTIWINDOW_H
