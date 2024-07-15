#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QWidget>
#include<QDebug>
#include<QMenu>
#include<QImage>
#include<QAction>
#include<QActionEvent>
#include<QMovie>
#include<QWidget>
#include<QTime>
#include<QTimer>
#include<QDebug>

#include<QLayout>
#include<QFrame>
#include<QFile>
#include<QDesktopServices>
struct pig
{
    double weight;
    int boughtyear,boughtday,type;
};
QList <pig> pigs[100];
  int pighomestoretype[100];
  int currentpighome,currentmonth,maxlockpighome,money;
  int maxpigcancell=1000;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_rule,&QPushButton::clicked,this,&MainWindow::on_Qbtn_rule_clicked);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Qbtn_rule_clicked ()
{
    QMessageBox::about(NULL, "快乐养猪", "姚济昌创作。游戏规则：点击下个月进入下个月，并增加猪的体重。每三个月系统会自动计算并出售一次。每个猪舍有一个模式，请选择养那种猪。金币可用来在商店购买猪崽以及解锁新的猪圈，资料按键可以查询销售购买记录以及每头猪的体重。设置按键可以存档读档。");
}


