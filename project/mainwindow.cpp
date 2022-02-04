#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tb_getter->setVisible(false);
    connect(ui->te_text, SIGNAL(textChanged()), this, SLOT(onTextChanged()));
    connect(ui->cb_settings, &QCheckBox::stateChanged, this, &MainWindow::on_cb_settings_stateChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTextChanged()
{
    ui->tb_getter->setHtml(ui->te_text->toHtml());
}

void MainWindow::on_cb_settings_stateChanged()
{
    if(ui->cb_settings->isChecked())
    {
        ui->statusbar->showMessage("Нажато");
        ui->tb_getter->setVisible(true);
    }
    else
    {
        ui->statusbar->showMessage("He Нажато");
        ui->tb_getter->setVisible(false);
    }
}

