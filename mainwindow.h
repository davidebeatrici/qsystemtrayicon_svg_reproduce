#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_Icon_Button_clicked();
	void on_QIcon_Button_clicked();
	void on_QPixmap_Button_clicked();

private:
	Ui::MainWindow *ui;
	QSystemTrayIcon tray_icon;
	QString icon_path;
};

#endif // MAINWINDOW_H
