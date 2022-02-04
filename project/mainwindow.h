#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QComboBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QComboBox *comboBox;

private slots:
    void fsender();
    void on_cb_settings_stateChanged();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
