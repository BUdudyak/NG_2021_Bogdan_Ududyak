#include "mainwindow.h"

#include <QApplication>
#include <QLineEdit>
#include <QTextEdit>
#include <QCheckBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QComboBox combo;
    combo.setEditable(true);
    if(QLineEdit *le = combo.lineEdit())
        le->setClearButtonEnabled(true);
    w.show();
    return a.exec();
}
