#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->Dir_TextBox->setText(QDir::currentPath());
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_Icon_Button_clicked()
{
	icon_path = QFileDialog::getOpenFileName(this, "Choose an icon");
}

void MainWindow::on_QIcon_Button_clicked()
{
	tray_icon.hide();
	tray_icon.setIcon(QIcon(icon_path));
	tray_icon.show();
}

void MainWindow::on_QPixmap_Button_clicked()
{
	tray_icon.hide();
	tray_icon.setIcon(QPixmap(icon_path));
	tray_icon.show();
}
