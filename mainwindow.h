#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "salad.h"
#include "vegetable-salad-factory.h"
#include "reishabu-salad-factory.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QVBoxLayout *rootLayout;
    QVBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;

    void setLabel(QString string);
    void setButton();

private slots:
    void buttonClicked();
    //void buttonClickedAlien();
};
#endif // MAINWINDOW_H
