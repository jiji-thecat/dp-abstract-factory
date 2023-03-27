#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout();
    iconFieldLayout = new QVBoxLayout();
    buttonFieldLayout = new QHBoxLayout();

    setButton();

    rootLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(iconFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClicked()
{
    qDebug() << "clicked";
    Salad *salad = new Salad("bowl");

    VegetableSaladFactory *vegetableSalad = new VegetableSaladFactory();
    salad->addGreen(vegetableSalad->getGreen());
    salad->addToppings(vegetableSalad->getToppings());
    salad->addDressing(vegetableSalad->getDressing());
    salad->addImage(vegetableSalad->getImage());
    setLabel(salad->getImage());

    ReishabuSaladFactory *reishabuSalad = new ReishabuSaladFactory();
    salad->addGreen(reishabuSalad->getGreen());
    salad->addToppings(reishabuSalad->getToppings());
    salad->addDressing(reishabuSalad->getDressing());
    salad->addImage(reishabuSalad->getImage());
    setLabel(salad->getImage());
}

void MainWindow::setButton()
{
    QPushButton *button = new QPushButton("&Cook Salad", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    buttonFieldLayout->addWidget(button);
}

void MainWindow::setLabel(QString string)
{
    QLabel *label = new QLabel(string);
    QPixmap *image = new QPixmap(":/assets/" + string);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    iconFieldLayout->addWidget(label);
}
