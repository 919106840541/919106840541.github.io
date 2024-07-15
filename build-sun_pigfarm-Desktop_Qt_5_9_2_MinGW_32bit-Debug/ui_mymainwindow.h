/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralWidget;
    QFrame *TopMenuList;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnstyshow;
    QPushButton *btndata;
    QPushButton *btnshop;
    QPushButton *btnbuff;
    QPushButton *btnset;
    QWidget *CurTotal;
    QGridLayout *gridLayout;
    QLabel *lbtotal;
    QLabel *lbgold;
    QLabel *total;
    QLabel *gold;
    QLabel *lbtime;
    QLabel *curtime;
    QWidget *StySet;
    QGridLayout *gridLayout_2;
    QLabel *stytype;
    QPushButton *btnmix;
    QLabel *current;
    QPushButton *btnleft;
    QPushButton *btnright2;
    QPushButton *btnsingle;
    QPushButton *btnleft2;
    QPushButton *btnright;
    QLabel *curstytype;
    QPushButton *btnnextmonth;
    QLabel *curstynum;
    QLabel *pop1;
    QLabel *pop2;
    QLabel *pop3;
    QLabel *pop5;
    QLabel *pop6;
    QLabel *pop9;
    QLabel *pop7;
    QLabel *pop8;
    QLabel *pop10;
    QFrame *Shop;
    QLabel *lbwp;
    QLabel *wpprice;
    QLabel *blsp;
    QLabel *spprice;
    QLabel *lbbp;
    QLabel *bpprice;
    QSpinBox *spinBox_1;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLabel *lbcost;
    QLabel *cost;
    QPushButton *btncost;
    QPushButton *btnclose1;
    QFrame *Set;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnexit_2;
    QPushButton *btnload_2;
    QPushButton *btnsave;
    QPushButton *btnreset;
    QPushButton *btnclose3;
    QFrame *Data;
    QPushButton *btncondata;
    QPushButton *btnclose0;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *lb2w;
    QLabel *lb2t;
    QLabel *lb8;
    QLabel *lb5y;
    QLabel *lb5w;
    QLabel *lb6t;
    QLabel *lb6w;
    QLabel *lb7w;
    QLabel *lb8t;
    QLabel *lb9t;
    QLabel *lb8w;
    QLabel *lb9w;
    QLabel *lb8y;
    QLabel *lb7y;
    QLabel *lb6y;
    QLabel *lb7t;
    QLabel *lb4w;
    QLabel *lb4y;
    QLabel *lb3w;
    QLabel *lb4t;
    QLabel *lb3t;
    QLabel *lb3y;
    QLabel *SN;
    QLabel *lb9y;
    QLabel *lb10w;
    QLabel *lb1y;
    QLabel *lb1t;
    QLabel *lb2y;
    QLabel *weight;
    QLabel *lb10y;
    QLabel *lb1;
    QLabel *type;
    QLabel *lb10t;
    QLabel *lb5;
    QLabel *time;
    QLabel *lb2;
    QLabel *lb4;
    QLabel *lb3;
    QLabel *lb6;
    QLabel *lb10;
    QLabel *lb9;
    QLabel *lb7;
    QLabel *lb5t;
    QLabel *lb1w;
    QFrame *Buff;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnbuff1;
    QPushButton *btnbuff2;
    QPushButton *btnbuff3;
    QPushButton *btnbuff4;
    QPushButton *btnbuff5;
    QLabel *buffname;
    QLabel *lbbuffeffect;
    QLabel *lbbuffcost;
    QLabel *buffcost;
    QLabel *buffeffect;
    QPushButton *btnbuffcost;
    QPushButton *btnclose2;
    QGroupBox *SellBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *pricesp;
    QLabel *profitwp;
    QLabel *countsp;
    QLabel *pricewp;
    QLabel *lbsp;
    QLabel *lbprice;
    QLabel *lbwp_2;
    QLabel *weightsp;
    QLabel *profitsp;
    QLabel *countwp;
    QLabel *weightwp;
    QLabel *lbtype;
    QLabel *lbprofit;
    QLabel *lbcount;
    QLabel *lbweight;
    QLabel *lbbp_2;
    QLabel *pricebp;
    QLabel *countbp;
    QLabel *weightbp;
    QLabel *profitbp;
    QLabel *lbprofitsum;
    QLabel *profitsum;
    QPushButton *btnok;
    QLabel *pop4;
    QPushButton *btnlocksty;
    QFrame *GameMenu_2;
    QHBoxLayout *GameMenu;
    QPushButton *btnstart;
    QPushButton *btnexit;
    QPushButton *btnload;
    QFrame *frame_2;
    QFrame *frame;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName(QStringLiteral("MyMainWindow"));
        MyMainWindow->resize(722, 632);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyMainWindow->sizePolicy().hasHeightForWidth());
        MyMainWindow->setSizePolicy(sizePolicy);
        MyMainWindow->setMinimumSize(QSize(722, 632));
        MyMainWindow->setMaximumSize(QSize(722, 632));
        centralWidget = new QWidget(MyMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(722, 632));
        centralWidget->setMaximumSize(QSize(722, 632));
        TopMenuList = new QFrame(centralWidget);
        TopMenuList->setObjectName(QStringLiteral("TopMenuList"));
        TopMenuList->setGeometry(QRect(40, 20, 652, 59));
        TopMenuList->setFrameShape(QFrame::StyledPanel);
        TopMenuList->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(TopMenuList);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnstyshow = new QPushButton(TopMenuList);
        btnstyshow->setObjectName(QStringLiteral("btnstyshow"));
        btnstyshow->setMinimumSize(QSize(120, 35));
        btnstyshow->setMaximumSize(QSize(120, 35));
        btnstyshow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btnstyshow);

        btndata = new QPushButton(TopMenuList);
        btndata->setObjectName(QStringLiteral("btndata"));
        btndata->setMinimumSize(QSize(120, 35));
        btndata->setMaximumSize(QSize(120, 35));
        btndata->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btndata);

        btnshop = new QPushButton(TopMenuList);
        btnshop->setObjectName(QStringLiteral("btnshop"));
        btnshop->setMinimumSize(QSize(120, 35));
        btnshop->setMaximumSize(QSize(120, 35));
        btnshop->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btnshop);

        btnbuff = new QPushButton(TopMenuList);
        btnbuff->setObjectName(QStringLiteral("btnbuff"));
        btnbuff->setMinimumSize(QSize(120, 35));
        btnbuff->setMaximumSize(QSize(120, 35));
        btnbuff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btnbuff);

        btnset = new QPushButton(TopMenuList);
        btnset->setObjectName(QStringLiteral("btnset"));
        btnset->setMinimumSize(QSize(120, 35));
        btnset->setMaximumSize(QSize(120, 35));
        btnset->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btnset);

        CurTotal = new QWidget(centralWidget);
        CurTotal->setObjectName(QStringLiteral("CurTotal"));
        CurTotal->setGeometry(QRect(530, 90, 191, 101));
        gridLayout = new QGridLayout(CurTotal);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbtotal = new QLabel(CurTotal);
        lbtotal->setObjectName(QStringLiteral("lbtotal"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbtotal->setFont(font);

        gridLayout->addWidget(lbtotal, 2, 0, 1, 1);

        lbgold = new QLabel(CurTotal);
        lbgold->setObjectName(QStringLiteral("lbgold"));
        lbgold->setFont(font);
        lbgold->setLayoutDirection(Qt::LeftToRight);
        lbgold->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lbgold, 0, 0, 1, 1);

        total = new QLabel(CurTotal);
        total->setObjectName(QStringLiteral("total"));
        total->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(total, 2, 1, 1, 1);

        gold = new QLabel(CurTotal);
        gold->setObjectName(QStringLiteral("gold"));
        gold->setFrameShape(QFrame::StyledPanel);
        gold->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(gold, 0, 1, 1, 1);

        lbtime = new QLabel(CurTotal);
        lbtime->setObjectName(QStringLiteral("lbtime"));
        lbtime->setFont(font);

        gridLayout->addWidget(lbtime, 3, 0, 1, 1);

        curtime = new QLabel(CurTotal);
        curtime->setObjectName(QStringLiteral("curtime"));
        curtime->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(curtime, 3, 1, 1, 1);

        StySet = new QWidget(centralWidget);
        StySet->setObjectName(QStringLiteral("StySet"));
        StySet->setGeometry(QRect(530, 190, 191, 221));
        gridLayout_2 = new QGridLayout(StySet);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stytype = new QLabel(StySet);
        stytype->setObjectName(QStringLiteral("stytype"));
        stytype->setFont(font);

        gridLayout_2->addWidget(stytype, 0, 0, 1, 1);

        btnmix = new QPushButton(StySet);
        btnmix->setObjectName(QStringLiteral("btnmix"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        btnmix->setFont(font1);
        btnmix->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnmix, 1, 0, 1, 1);

        current = new QLabel(StySet);
        current->setObjectName(QStringLiteral("current"));
        current->setFont(font);

        gridLayout_2->addWidget(current, 2, 0, 1, 1);

        btnleft = new QPushButton(StySet);
        btnleft->setObjectName(QStringLiteral("btnleft"));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        btnleft->setFont(font2);
        btnleft->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnleft, 4, 0, 1, 2);

        btnright2 = new QPushButton(StySet);
        btnright2->setObjectName(QStringLiteral("btnright2"));
        btnright2->setFont(font1);
        btnright2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnright2, 5, 2, 1, 1);

        btnsingle = new QPushButton(StySet);
        btnsingle->setObjectName(QStringLiteral("btnsingle"));
        btnsingle->setFont(font1);
        btnsingle->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnsingle, 1, 2, 1, 1);

        btnleft2 = new QPushButton(StySet);
        btnleft2->setObjectName(QStringLiteral("btnleft2"));
        btnleft2->setFont(font1);
        btnleft2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnleft2, 5, 0, 1, 2);

        btnright = new QPushButton(StySet);
        btnright->setObjectName(QStringLiteral("btnright"));
        btnright->setFont(font1);
        btnright->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnright, 4, 2, 1, 1);

        curstytype = new QLabel(StySet);
        curstytype->setObjectName(QStringLiteral("curstytype"));
        curstytype->setFrameShape(QFrame::StyledPanel);

        gridLayout_2->addWidget(curstytype, 0, 2, 1, 1);

        btnnextmonth = new QPushButton(StySet);
        btnnextmonth->setObjectName(QStringLiteral("btnnextmonth"));
        btnnextmonth->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btnnextmonth, 6, 0, 1, 2);

        curstynum = new QLabel(StySet);
        curstynum->setObjectName(QStringLiteral("curstynum"));

        gridLayout_2->addWidget(curstynum, 2, 2, 1, 1);

        pop1 = new QLabel(centralWidget);
        pop1->setObjectName(QStringLiteral("pop1"));
        pop1->setGeometry(QRect(40, 90, 100, 100));
        pop1->setMinimumSize(QSize(100, 100));
        pop1->setMaximumSize(QSize(100, 100));
        pop1->setFrameShape(QFrame::NoFrame);
        pop2 = new QLabel(centralWidget);
        pop2->setObjectName(QStringLiteral("pop2"));
        pop2->setGeometry(QRect(160, 90, 100, 100));
        pop2->setMinimumSize(QSize(100, 100));
        pop2->setMaximumSize(QSize(100, 100));
        pop2->setFrameShape(QFrame::NoFrame);
        pop3 = new QLabel(centralWidget);
        pop3->setObjectName(QStringLiteral("pop3"));
        pop3->setGeometry(QRect(280, 90, 100, 100));
        pop3->setMinimumSize(QSize(100, 100));
        pop3->setMaximumSize(QSize(100, 100));
        pop3->setFrameShape(QFrame::NoFrame);
        pop5 = new QLabel(centralWidget);
        pop5->setObjectName(QStringLiteral("pop5"));
        pop5->setGeometry(QRect(40, 210, 101, 91));
        pop5->setFrameShape(QFrame::NoFrame);
        pop6 = new QLabel(centralWidget);
        pop6->setObjectName(QStringLiteral("pop6"));
        pop6->setGeometry(QRect(160, 210, 100, 100));
        pop6->setMinimumSize(QSize(100, 100));
        pop6->setMaximumSize(QSize(100, 100));
        pop9 = new QLabel(centralWidget);
        pop9->setObjectName(QStringLiteral("pop9"));
        pop9->setGeometry(QRect(40, 330, 100, 100));
        pop9->setMinimumSize(QSize(100, 100));
        pop9->setMaximumSize(QSize(100, 100));
        pop7 = new QLabel(centralWidget);
        pop7->setObjectName(QStringLiteral("pop7"));
        pop7->setGeometry(QRect(280, 210, 100, 100));
        pop7->setMinimumSize(QSize(100, 100));
        pop7->setMaximumSize(QSize(100, 100));
        pop8 = new QLabel(centralWidget);
        pop8->setObjectName(QStringLiteral("pop8"));
        pop8->setGeometry(QRect(400, 210, 100, 100));
        pop8->setMinimumSize(QSize(100, 100));
        pop8->setMaximumSize(QSize(100, 100));
        pop10 = new QLabel(centralWidget);
        pop10->setObjectName(QStringLiteral("pop10"));
        pop10->setGeometry(QRect(160, 320, 100, 100));
        pop10->setMinimumSize(QSize(100, 100));
        pop10->setMaximumSize(QSize(100, 100));
        Shop = new QFrame(centralWidget);
        Shop->setObjectName(QStringLiteral("Shop"));
        Shop->setGeometry(QRect(40, 100, 461, 401));
        Shop->setMinimumSize(QSize(461, 401));
        Shop->setMaximumSize(QSize(461, 401));
        Shop->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 220);\n"
""));
        Shop->setFrameShape(QFrame::StyledPanel);
        Shop->setFrameShadow(QFrame::Raised);
        lbwp = new QLabel(Shop);
        lbwp->setObjectName(QStringLiteral("lbwp"));
        lbwp->setGeometry(QRect(50, 50, 72, 15));
        wpprice = new QLabel(Shop);
        wpprice->setObjectName(QStringLiteral("wpprice"));
        wpprice->setGeometry(QRect(50, 70, 72, 15));
        blsp = new QLabel(Shop);
        blsp->setObjectName(QStringLiteral("blsp"));
        blsp->setGeometry(QRect(50, 120, 72, 15));
        spprice = new QLabel(Shop);
        spprice->setObjectName(QStringLiteral("spprice"));
        spprice->setGeometry(QRect(50, 140, 72, 15));
        lbbp = new QLabel(Shop);
        lbbp->setObjectName(QStringLiteral("lbbp"));
        lbbp->setGeometry(QRect(50, 190, 72, 15));
        bpprice = new QLabel(Shop);
        bpprice->setObjectName(QStringLiteral("bpprice"));
        bpprice->setGeometry(QRect(50, 210, 72, 15));
        spinBox_1 = new QSpinBox(Shop);
        spinBox_1->setObjectName(QStringLiteral("spinBox_1"));
        spinBox_1->setGeometry(QRect(210, 50, 171, 22));
        spinBox_2 = new QSpinBox(Shop);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(210, 130, 171, 22));
        spinBox_3 = new QSpinBox(Shop);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(210, 200, 171, 22));
        lbcost = new QLabel(Shop);
        lbcost->setObjectName(QStringLiteral("lbcost"));
        lbcost->setGeometry(QRect(50, 280, 72, 15));
        cost = new QLabel(Shop);
        cost->setObjectName(QStringLiteral("cost"));
        cost->setGeometry(QRect(110, 280, 72, 15));
        btncost = new QPushButton(Shop);
        btncost->setObjectName(QStringLiteral("btncost"));
        btncost->setGeometry(QRect(270, 270, 101, 31));
        btncost->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btnclose1 = new QPushButton(Shop);
        btnclose1->setObjectName(QStringLiteral("btnclose1"));
        btnclose1->setGeometry(QRect(270, 330, 101, 31));
        btnclose1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Set = new QFrame(centralWidget);
        Set->setObjectName(QStringLiteral("Set"));
        Set->setGeometry(QRect(140, 80, 551, 121));
        Set->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        Set->setFrameShape(QFrame::StyledPanel);
        Set->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(Set);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 20, 495, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnexit_2 = new QPushButton(horizontalLayoutWidget_2);
        btnexit_2->setObjectName(QStringLiteral("btnexit_2"));
        btnexit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btnexit_2);

        btnload_2 = new QPushButton(horizontalLayoutWidget_2);
        btnload_2->setObjectName(QStringLiteral("btnload_2"));
        btnload_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btnload_2);

        btnsave = new QPushButton(horizontalLayoutWidget_2);
        btnsave->setObjectName(QStringLiteral("btnsave"));
        btnsave->setFocusPolicy(Qt::StrongFocus);
        btnsave->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btnsave);

        btnreset = new QPushButton(horizontalLayoutWidget_2);
        btnreset->setObjectName(QStringLiteral("btnreset"));
        btnreset->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btnreset);

        btnclose3 = new QPushButton(horizontalLayoutWidget_2);
        btnclose3->setObjectName(QStringLiteral("btnclose3"));
        btnclose3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btnclose3);

        Data = new QFrame(centralWidget);
        Data->setObjectName(QStringLiteral("Data"));
        Data->setGeometry(QRect(40, 120, 470, 470));
        Data->setMinimumSize(QSize(470, 470));
        Data->setMaximumSize(QSize(470, 470));
        Data->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        Data->setFrameShape(QFrame::StyledPanel);
        Data->setFrameShadow(QFrame::Raised);
        btncondata = new QPushButton(Data);
        btncondata->setObjectName(QStringLiteral("btncondata"));
        btncondata->setGeometry(QRect(50, 390, 151, 41));
        btncondata->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btnclose0 = new QPushButton(Data);
        btnclose0->setObjectName(QStringLiteral("btnclose0"));
        btnclose0->setGeometry(QRect(260, 390, 151, 41));
        btnclose0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(Data);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 411, 331));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lb2w = new QLabel(gridLayoutWidget);
        lb2w->setObjectName(QStringLiteral("lb2w"));

        gridLayout_3->addWidget(lb2w, 2, 2, 1, 1);

        lb2t = new QLabel(gridLayoutWidget);
        lb2t->setObjectName(QStringLiteral("lb2t"));

        gridLayout_3->addWidget(lb2t, 2, 3, 1, 1);

        lb8 = new QLabel(gridLayoutWidget);
        lb8->setObjectName(QStringLiteral("lb8"));

        gridLayout_3->addWidget(lb8, 8, 0, 1, 1);

        lb5y = new QLabel(gridLayoutWidget);
        lb5y->setObjectName(QStringLiteral("lb5y"));

        gridLayout_3->addWidget(lb5y, 5, 1, 1, 1);

        lb5w = new QLabel(gridLayoutWidget);
        lb5w->setObjectName(QStringLiteral("lb5w"));

        gridLayout_3->addWidget(lb5w, 5, 2, 1, 1);

        lb6t = new QLabel(gridLayoutWidget);
        lb6t->setObjectName(QStringLiteral("lb6t"));

        gridLayout_3->addWidget(lb6t, 6, 3, 1, 1);

        lb6w = new QLabel(gridLayoutWidget);
        lb6w->setObjectName(QStringLiteral("lb6w"));

        gridLayout_3->addWidget(lb6w, 6, 2, 1, 1);

        lb7w = new QLabel(gridLayoutWidget);
        lb7w->setObjectName(QStringLiteral("lb7w"));

        gridLayout_3->addWidget(lb7w, 7, 2, 1, 1);

        lb8t = new QLabel(gridLayoutWidget);
        lb8t->setObjectName(QStringLiteral("lb8t"));

        gridLayout_3->addWidget(lb8t, 8, 3, 1, 1);

        lb9t = new QLabel(gridLayoutWidget);
        lb9t->setObjectName(QStringLiteral("lb9t"));

        gridLayout_3->addWidget(lb9t, 9, 3, 1, 1);

        lb8w = new QLabel(gridLayoutWidget);
        lb8w->setObjectName(QStringLiteral("lb8w"));

        gridLayout_3->addWidget(lb8w, 8, 2, 1, 1);

        lb9w = new QLabel(gridLayoutWidget);
        lb9w->setObjectName(QStringLiteral("lb9w"));

        gridLayout_3->addWidget(lb9w, 9, 2, 1, 1);

        lb8y = new QLabel(gridLayoutWidget);
        lb8y->setObjectName(QStringLiteral("lb8y"));

        gridLayout_3->addWidget(lb8y, 8, 1, 1, 1);

        lb7y = new QLabel(gridLayoutWidget);
        lb7y->setObjectName(QStringLiteral("lb7y"));

        gridLayout_3->addWidget(lb7y, 7, 1, 1, 1);

        lb6y = new QLabel(gridLayoutWidget);
        lb6y->setObjectName(QStringLiteral("lb6y"));

        gridLayout_3->addWidget(lb6y, 6, 1, 1, 1);

        lb7t = new QLabel(gridLayoutWidget);
        lb7t->setObjectName(QStringLiteral("lb7t"));

        gridLayout_3->addWidget(lb7t, 7, 3, 1, 1);

        lb4w = new QLabel(gridLayoutWidget);
        lb4w->setObjectName(QStringLiteral("lb4w"));

        gridLayout_3->addWidget(lb4w, 4, 2, 1, 1);

        lb4y = new QLabel(gridLayoutWidget);
        lb4y->setObjectName(QStringLiteral("lb4y"));

        gridLayout_3->addWidget(lb4y, 4, 1, 1, 1);

        lb3w = new QLabel(gridLayoutWidget);
        lb3w->setObjectName(QStringLiteral("lb3w"));

        gridLayout_3->addWidget(lb3w, 3, 2, 1, 1);

        lb4t = new QLabel(gridLayoutWidget);
        lb4t->setObjectName(QStringLiteral("lb4t"));

        gridLayout_3->addWidget(lb4t, 4, 3, 1, 1);

        lb3t = new QLabel(gridLayoutWidget);
        lb3t->setObjectName(QStringLiteral("lb3t"));

        gridLayout_3->addWidget(lb3t, 3, 3, 1, 1);

        lb3y = new QLabel(gridLayoutWidget);
        lb3y->setObjectName(QStringLiteral("lb3y"));

        gridLayout_3->addWidget(lb3y, 3, 1, 1, 1);

        SN = new QLabel(gridLayoutWidget);
        SN->setObjectName(QStringLiteral("SN"));

        gridLayout_3->addWidget(SN, 0, 0, 1, 1);

        lb9y = new QLabel(gridLayoutWidget);
        lb9y->setObjectName(QStringLiteral("lb9y"));

        gridLayout_3->addWidget(lb9y, 9, 1, 1, 1);

        lb10w = new QLabel(gridLayoutWidget);
        lb10w->setObjectName(QStringLiteral("lb10w"));

        gridLayout_3->addWidget(lb10w, 10, 2, 1, 1);

        lb1y = new QLabel(gridLayoutWidget);
        lb1y->setObjectName(QStringLiteral("lb1y"));

        gridLayout_3->addWidget(lb1y, 1, 1, 1, 1);

        lb1t = new QLabel(gridLayoutWidget);
        lb1t->setObjectName(QStringLiteral("lb1t"));

        gridLayout_3->addWidget(lb1t, 1, 3, 1, 1);

        lb2y = new QLabel(gridLayoutWidget);
        lb2y->setObjectName(QStringLiteral("lb2y"));

        gridLayout_3->addWidget(lb2y, 2, 1, 1, 1);

        weight = new QLabel(gridLayoutWidget);
        weight->setObjectName(QStringLiteral("weight"));

        gridLayout_3->addWidget(weight, 0, 2, 1, 1);

        lb10y = new QLabel(gridLayoutWidget);
        lb10y->setObjectName(QStringLiteral("lb10y"));

        gridLayout_3->addWidget(lb10y, 10, 1, 1, 1);

        lb1 = new QLabel(gridLayoutWidget);
        lb1->setObjectName(QStringLiteral("lb1"));

        gridLayout_3->addWidget(lb1, 1, 0, 1, 1);

        type = new QLabel(gridLayoutWidget);
        type->setObjectName(QStringLiteral("type"));

        gridLayout_3->addWidget(type, 0, 1, 1, 1);

        lb10t = new QLabel(gridLayoutWidget);
        lb10t->setObjectName(QStringLiteral("lb10t"));

        gridLayout_3->addWidget(lb10t, 10, 3, 1, 1);

        lb5 = new QLabel(gridLayoutWidget);
        lb5->setObjectName(QStringLiteral("lb5"));

        gridLayout_3->addWidget(lb5, 5, 0, 1, 1);

        time = new QLabel(gridLayoutWidget);
        time->setObjectName(QStringLiteral("time"));

        gridLayout_3->addWidget(time, 0, 3, 1, 1);

        lb2 = new QLabel(gridLayoutWidget);
        lb2->setObjectName(QStringLiteral("lb2"));

        gridLayout_3->addWidget(lb2, 2, 0, 1, 1);

        lb4 = new QLabel(gridLayoutWidget);
        lb4->setObjectName(QStringLiteral("lb4"));

        gridLayout_3->addWidget(lb4, 4, 0, 1, 1);

        lb3 = new QLabel(gridLayoutWidget);
        lb3->setObjectName(QStringLiteral("lb3"));

        gridLayout_3->addWidget(lb3, 3, 0, 1, 1);

        lb6 = new QLabel(gridLayoutWidget);
        lb6->setObjectName(QStringLiteral("lb6"));

        gridLayout_3->addWidget(lb6, 6, 0, 1, 1);

        lb10 = new QLabel(gridLayoutWidget);
        lb10->setObjectName(QStringLiteral("lb10"));

        gridLayout_3->addWidget(lb10, 10, 0, 1, 1);

        lb9 = new QLabel(gridLayoutWidget);
        lb9->setObjectName(QStringLiteral("lb9"));

        gridLayout_3->addWidget(lb9, 9, 0, 1, 1);

        lb7 = new QLabel(gridLayoutWidget);
        lb7->setObjectName(QStringLiteral("lb7"));

        gridLayout_3->addWidget(lb7, 7, 0, 1, 1);

        lb5t = new QLabel(gridLayoutWidget);
        lb5t->setObjectName(QStringLiteral("lb5t"));

        gridLayout_3->addWidget(lb5t, 5, 3, 1, 1);

        lb1w = new QLabel(gridLayoutWidget);
        lb1w->setObjectName(QStringLiteral("lb1w"));

        gridLayout_3->addWidget(lb1w, 1, 2, 1, 1);

        lb2t->raise();
        SN->raise();
        type->raise();
        weight->raise();
        time->raise();
        lb1->raise();
        lb2->raise();
        lb3->raise();
        lb4->raise();
        lb5->raise();
        lb6->raise();
        lb7->raise();
        lb9->raise();
        lb10->raise();
        lb10t->raise();
        lb10w->raise();
        lb10y->raise();
        lb1t->raise();
        lb1y->raise();
        lb2y->raise();
        lb2w->raise();
        lb1w->raise();
        lb3t->raise();
        lb3y->raise();
        lb3w->raise();
        lb4w->raise();
        lb4t->raise();
        lb4y->raise();
        lb5t->raise();
        lb5w->raise();
        lb5y->raise();
        lb6t->raise();
        lb8->raise();
        lb6w->raise();
        lb6y->raise();
        lb7t->raise();
        lb7w->raise();
        lb7y->raise();
        lb8t->raise();
        lb8w->raise();
        lb8y->raise();
        lb9t->raise();
        lb9w->raise();
        lb9y->raise();
        Buff = new QFrame(centralWidget);
        Buff->setObjectName(QStringLiteral("Buff"));
        Buff->setGeometry(QRect(20, 100, 511, 501));
        Buff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        Buff->setFrameShape(QFrame::StyledPanel);
        Buff->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(Buff);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 50, 131, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnbuff1 = new QPushButton(verticalLayoutWidget);
        btnbuff1->setObjectName(QStringLiteral("btnbuff1"));

        verticalLayout->addWidget(btnbuff1);

        btnbuff2 = new QPushButton(verticalLayoutWidget);
        btnbuff2->setObjectName(QStringLiteral("btnbuff2"));

        verticalLayout->addWidget(btnbuff2);

        btnbuff3 = new QPushButton(verticalLayoutWidget);
        btnbuff3->setObjectName(QStringLiteral("btnbuff3"));

        verticalLayout->addWidget(btnbuff3);

        btnbuff4 = new QPushButton(verticalLayoutWidget);
        btnbuff4->setObjectName(QStringLiteral("btnbuff4"));

        verticalLayout->addWidget(btnbuff4);

        btnbuff5 = new QPushButton(verticalLayoutWidget);
        btnbuff5->setObjectName(QStringLiteral("btnbuff5"));

        verticalLayout->addWidget(btnbuff5);

        buffname = new QLabel(Buff);
        buffname->setObjectName(QStringLiteral("buffname"));
        buffname->setGeometry(QRect(280, 50, 91, 21));
        lbbuffeffect = new QLabel(Buff);
        lbbuffeffect->setObjectName(QStringLiteral("lbbuffeffect"));
        lbbuffeffect->setGeometry(QRect(170, 90, 72, 20));
        lbbuffeffect->setFrameShape(QFrame::NoFrame);
        lbbuffcost = new QLabel(Buff);
        lbbuffcost->setObjectName(QStringLiteral("lbbuffcost"));
        lbbuffcost->setGeometry(QRect(180, 370, 72, 15));
        buffcost = new QLabel(Buff);
        buffcost->setObjectName(QStringLiteral("buffcost"));
        buffcost->setGeometry(QRect(230, 370, 72, 15));
        buffeffect = new QLabel(Buff);
        buffeffect->setObjectName(QStringLiteral("buffeffect"));
        buffeffect->setGeometry(QRect(170, 130, 321, 221));
        buffeffect->setFrameShape(QFrame::NoFrame);
        btnbuffcost = new QPushButton(Buff);
        btnbuffcost->setObjectName(QStringLiteral("btnbuffcost"));
        btnbuffcost->setGeometry(QRect(380, 360, 93, 28));
        btnbuffcost->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btnclose2 = new QPushButton(Buff);
        btnclose2->setObjectName(QStringLiteral("btnclose2"));
        btnclose2->setGeometry(QRect(380, 420, 93, 28));
        btnclose2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SellBox = new QGroupBox(centralWidget);
        SellBox->setObjectName(QStringLiteral("SellBox"));
        SellBox->setGeometry(QRect(0, 210, 541, 381));
        SellBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 220);"));
        gridLayoutWidget_2 = new QWidget(SellBox);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 40, 481, 211));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pricesp = new QLabel(gridLayoutWidget_2);
        pricesp->setObjectName(QStringLiteral("pricesp"));

        gridLayout_4->addWidget(pricesp, 2, 1, 1, 1);

        profitwp = new QLabel(gridLayoutWidget_2);
        profitwp->setObjectName(QStringLiteral("profitwp"));

        gridLayout_4->addWidget(profitwp, 1, 4, 1, 1);

        countsp = new QLabel(gridLayoutWidget_2);
        countsp->setObjectName(QStringLiteral("countsp"));

        gridLayout_4->addWidget(countsp, 2, 2, 1, 1);

        pricewp = new QLabel(gridLayoutWidget_2);
        pricewp->setObjectName(QStringLiteral("pricewp"));

        gridLayout_4->addWidget(pricewp, 1, 1, 1, 1);

        lbsp = new QLabel(gridLayoutWidget_2);
        lbsp->setObjectName(QStringLiteral("lbsp"));

        gridLayout_4->addWidget(lbsp, 2, 0, 1, 1);

        lbprice = new QLabel(gridLayoutWidget_2);
        lbprice->setObjectName(QStringLiteral("lbprice"));

        gridLayout_4->addWidget(lbprice, 0, 1, 1, 1);

        lbwp_2 = new QLabel(gridLayoutWidget_2);
        lbwp_2->setObjectName(QStringLiteral("lbwp_2"));

        gridLayout_4->addWidget(lbwp_2, 1, 0, 1, 1);

        weightsp = new QLabel(gridLayoutWidget_2);
        weightsp->setObjectName(QStringLiteral("weightsp"));

        gridLayout_4->addWidget(weightsp, 2, 3, 1, 1);

        profitsp = new QLabel(gridLayoutWidget_2);
        profitsp->setObjectName(QStringLiteral("profitsp"));

        gridLayout_4->addWidget(profitsp, 2, 4, 1, 1);

        countwp = new QLabel(gridLayoutWidget_2);
        countwp->setObjectName(QStringLiteral("countwp"));

        gridLayout_4->addWidget(countwp, 1, 2, 1, 1);

        weightwp = new QLabel(gridLayoutWidget_2);
        weightwp->setObjectName(QStringLiteral("weightwp"));

        gridLayout_4->addWidget(weightwp, 1, 3, 1, 1);

        lbtype = new QLabel(gridLayoutWidget_2);
        lbtype->setObjectName(QStringLiteral("lbtype"));

        gridLayout_4->addWidget(lbtype, 0, 0, 1, 1);

        lbprofit = new QLabel(gridLayoutWidget_2);
        lbprofit->setObjectName(QStringLiteral("lbprofit"));

        gridLayout_4->addWidget(lbprofit, 0, 4, 1, 1);

        lbcount = new QLabel(gridLayoutWidget_2);
        lbcount->setObjectName(QStringLiteral("lbcount"));

        gridLayout_4->addWidget(lbcount, 0, 2, 1, 1);

        lbweight = new QLabel(gridLayoutWidget_2);
        lbweight->setObjectName(QStringLiteral("lbweight"));

        gridLayout_4->addWidget(lbweight, 0, 3, 1, 1);

        lbbp_2 = new QLabel(gridLayoutWidget_2);
        lbbp_2->setObjectName(QStringLiteral("lbbp_2"));

        gridLayout_4->addWidget(lbbp_2, 3, 0, 1, 1);

        pricebp = new QLabel(gridLayoutWidget_2);
        pricebp->setObjectName(QStringLiteral("pricebp"));

        gridLayout_4->addWidget(pricebp, 3, 1, 1, 1);

        countbp = new QLabel(gridLayoutWidget_2);
        countbp->setObjectName(QStringLiteral("countbp"));

        gridLayout_4->addWidget(countbp, 3, 2, 1, 1);

        weightbp = new QLabel(gridLayoutWidget_2);
        weightbp->setObjectName(QStringLiteral("weightbp"));

        gridLayout_4->addWidget(weightbp, 3, 3, 1, 1);

        profitbp = new QLabel(gridLayoutWidget_2);
        profitbp->setObjectName(QStringLiteral("profitbp"));

        gridLayout_4->addWidget(profitbp, 3, 4, 1, 1);

        lbprofitsum = new QLabel(SellBox);
        lbprofitsum->setObjectName(QStringLiteral("lbprofitsum"));
        lbprofitsum->setGeometry(QRect(40, 300, 81, 31));
        profitsum = new QLabel(SellBox);
        profitsum->setObjectName(QStringLiteral("profitsum"));
        profitsum->setGeometry(QRect(120, 300, 81, 31));
        profitsum->setFrameShape(QFrame::StyledPanel);
        btnok = new QPushButton(SellBox);
        btnok->setObjectName(QStringLiteral("btnok"));
        btnok->setGeometry(QRect(360, 300, 131, 31));
        btnok->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pop4 = new QLabel(centralWidget);
        pop4->setObjectName(QStringLiteral("pop4"));
        pop4->setGeometry(QRect(400, 90, 100, 100));
        pop4->setMinimumSize(QSize(100, 100));
        pop4->setMaximumSize(QSize(100, 100));
        pop4->setFrameShape(QFrame::NoFrame);
        btnlocksty = new QPushButton(centralWidget);
        btnlocksty->setObjectName(QStringLiteral("btnlocksty"));
        btnlocksty->setGeometry(QRect(230, 240, 180, 100));
        btnlocksty->setMinimumSize(QSize(180, 100));
        btnlocksty->setMaximumSize(QSize(180, 100));
        btnlocksty->setFont(font);
        btnlocksty->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 220);"));
        GameMenu_2 = new QFrame(centralWidget);
        GameMenu_2->setObjectName(QStringLiteral("GameMenu_2"));
        GameMenu_2->setGeometry(QRect(80, 440, 551, 111));
        GameMenu = new QHBoxLayout(GameMenu_2);
        GameMenu->setSpacing(6);
        GameMenu->setContentsMargins(11, 11, 11, 11);
        GameMenu->setObjectName(QStringLiteral("GameMenu"));
        GameMenu->setContentsMargins(-1, 11, -1, 1);
        btnstart = new QPushButton(GameMenu_2);
        btnstart->setObjectName(QStringLiteral("btnstart"));
        btnstart->setMinimumSize(QSize(150, 35));
        btnstart->setMaximumSize(QSize(150, 35));
        btnstart->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        GameMenu->addWidget(btnstart);

        btnexit = new QPushButton(GameMenu_2);
        btnexit->setObjectName(QStringLiteral("btnexit"));
        btnexit->setMinimumSize(QSize(150, 35));
        btnexit->setMaximumSize(QSize(150, 35));
        btnexit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        GameMenu->addWidget(btnexit);

        btnload = new QPushButton(GameMenu_2);
        btnload->setObjectName(QStringLiteral("btnload"));
        btnload->setMinimumSize(QSize(150, 35));
        btnload->setMaximumSize(QSize(150, 35));
        btnload->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        GameMenu->addWidget(btnload);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 721, 631));
        frame_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(219, 242, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-70, -100, 999, 999));
        frame->setMinimumSize(QSize(999, 999));
        frame->setMaximumSize(QSize(999, 999));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/pigsres/timg4.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MyMainWindow->setCentralWidget(centralWidget);
        frame_2->raise();
        CurTotal->raise();
        TopMenuList->raise();
        StySet->raise();
        pop1->raise();
        pop2->raise();
        pop3->raise();
        pop5->raise();
        pop6->raise();
        pop9->raise();
        pop7->raise();
        pop8->raise();
        pop10->raise();
        pop4->raise();
        btnlocksty->raise();
        GameMenu_2->raise();
        Buff->raise();
        Data->raise();
        SellBox->raise();
        Shop->raise();
        Set->raise();

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QApplication::translate("MyMainWindow", "sun_pigfarm", Q_NULLPTR));
        btnstyshow->setText(QApplication::translate("MyMainWindow", "\347\214\252\345\234\210", Q_NULLPTR));
        btndata->setText(QApplication::translate("MyMainWindow", "\344\277\241\346\201\257", Q_NULLPTR));
        btnshop->setText(QApplication::translate("MyMainWindow", "\345\225\206\345\272\227", Q_NULLPTR));
        btnbuff->setText(QApplication::translate("MyMainWindow", "BUFF", Q_NULLPTR));
        btnset->setText(QApplication::translate("MyMainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        lbtotal->setText(QApplication::translate("MyMainWindow", "\346\200\273\347\214\252\346\225\260\357\274\232", Q_NULLPTR));
        lbgold->setText(QApplication::translate("MyMainWindow", "\351\207\221\345\270\201:", Q_NULLPTR));
        total->setText(QString());
        gold->setText(QString());
        lbtime->setText(QApplication::translate("MyMainWindow", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        curtime->setText(QString());
        stytype->setText(QApplication::translate("MyMainWindow", "Sty Type:", Q_NULLPTR));
        btnmix->setText(QApplication::translate("MyMainWindow", "\346\267\267\345\220\210\345\236\213", Q_NULLPTR));
        current->setText(QApplication::translate("MyMainWindow", "Current:", Q_NULLPTR));
        btnleft->setText(QApplication::translate("MyMainWindow", "<", Q_NULLPTR));
        btnright2->setText(QApplication::translate("MyMainWindow", ">>", Q_NULLPTR));
        btnsingle->setText(QApplication::translate("MyMainWindow", "\351\273\221\347\214\252\345\236\213", Q_NULLPTR));
        btnleft2->setText(QApplication::translate("MyMainWindow", "<<", Q_NULLPTR));
        btnright->setText(QApplication::translate("MyMainWindow", ">", Q_NULLPTR));
        curstytype->setText(QString());
        btnnextmonth->setText(QApplication::translate("MyMainWindow", "\344\270\213\344\270\252\346\234\210", Q_NULLPTR));
        curstynum->setText(QString());
        pop1->setText(QString());
        pop2->setText(QString());
        pop3->setText(QString());
        pop5->setText(QString());
        pop6->setText(QString());
        pop9->setText(QString());
        pop7->setText(QString());
        pop8->setText(QString());
        pop10->setText(QString());
        lbwp->setText(QApplication::translate("MyMainWindow", "\345\244\247\350\212\261\347\231\275\347\214\252", Q_NULLPTR));
        wpprice->setText(QApplication::translate("MyMainWindow", "230\345\205\203/\345\217\252", Q_NULLPTR));
        blsp->setText(QApplication::translate("MyMainWindow", "\345\260\217\350\212\261\347\214\252", Q_NULLPTR));
        spprice->setText(QApplication::translate("MyMainWindow", "330\345\205\203/\345\217\252", Q_NULLPTR));
        lbbp->setText(QApplication::translate("MyMainWindow", "\351\273\221\347\214\252", Q_NULLPTR));
        bpprice->setText(QApplication::translate("MyMainWindow", "520\345\205\203/\345\217\252", Q_NULLPTR));
        lbcost->setText(QApplication::translate("MyMainWindow", "\346\200\273\350\256\241\357\274\232", Q_NULLPTR));
        cost->setText(QString());
        btncost->setText(QApplication::translate("MyMainWindow", "\350\264\255\344\271\260", Q_NULLPTR));
        btnclose1->setText(QApplication::translate("MyMainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        btnexit_2->setText(QApplication::translate("MyMainWindow", "exit", Q_NULLPTR));
        btnload_2->setText(QApplication::translate("MyMainWindow", "load", Q_NULLPTR));
        btnsave->setText(QApplication::translate("MyMainWindow", "save", Q_NULLPTR));
        btnreset->setText(QApplication::translate("MyMainWindow", "reset", Q_NULLPTR));
        btnclose3->setText(QApplication::translate("MyMainWindow", "close", Q_NULLPTR));
        btncondata->setText(QApplication::translate("MyMainWindow", "\350\264\255\345\205\245\345\207\272\345\224\256\346\225\260\346\215\256", Q_NULLPTR));
        btnclose0->setText(QApplication::translate("MyMainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        lb2w->setText(QString());
        lb2t->setText(QString());
        lb8->setText(QApplication::translate("MyMainWindow", "8", Q_NULLPTR));
        lb5y->setText(QString());
        lb5w->setText(QString());
        lb6t->setText(QString());
        lb6w->setText(QString());
        lb7w->setText(QString());
        lb8t->setText(QString());
        lb9t->setText(QString());
        lb8w->setText(QString());
        lb9w->setText(QString());
        lb8y->setText(QString());
        lb7y->setText(QString());
        lb6y->setText(QString());
        lb7t->setText(QString());
        lb4w->setText(QString());
        lb4y->setText(QString());
        lb3w->setText(QString());
        lb4t->setText(QString());
        lb3t->setText(QString());
        lb3y->setText(QString());
        SN->setText(QApplication::translate("MyMainWindow", "\345\272\217\345\217\267", Q_NULLPTR));
        lb9y->setText(QString());
        lb10w->setText(QString());
        lb1y->setText(QString());
        lb1t->setText(QString());
        lb2y->setText(QString());
        weight->setText(QApplication::translate("MyMainWindow", "\351\207\215\351\207\217", Q_NULLPTR));
        lb10y->setText(QString());
        lb1->setText(QApplication::translate("MyMainWindow", "1", Q_NULLPTR));
        type->setText(QApplication::translate("MyMainWindow", "\347\261\273\345\236\213", Q_NULLPTR));
        lb10t->setText(QString());
        lb5->setText(QApplication::translate("MyMainWindow", "5", Q_NULLPTR));
        time->setText(QApplication::translate("MyMainWindow", "\346\227\266\351\227\264", Q_NULLPTR));
        lb2->setText(QApplication::translate("MyMainWindow", "2", Q_NULLPTR));
        lb4->setText(QApplication::translate("MyMainWindow", "4", Q_NULLPTR));
        lb3->setText(QApplication::translate("MyMainWindow", "3", Q_NULLPTR));
        lb6->setText(QApplication::translate("MyMainWindow", "6", Q_NULLPTR));
        lb10->setText(QApplication::translate("MyMainWindow", "10", Q_NULLPTR));
        lb9->setText(QApplication::translate("MyMainWindow", "9", Q_NULLPTR));
        lb7->setText(QApplication::translate("MyMainWindow", "7", Q_NULLPTR));
        lb5t->setText(QString());
        lb1w->setText(QString());
        btnbuff1->setText(QApplication::translate("MyMainWindow", "BUFF1", Q_NULLPTR));
        btnbuff2->setText(QApplication::translate("MyMainWindow", "BUFF2", Q_NULLPTR));
        btnbuff3->setText(QApplication::translate("MyMainWindow", "BUFF3", Q_NULLPTR));
        btnbuff4->setText(QApplication::translate("MyMainWindow", "BUFF4", Q_NULLPTR));
        btnbuff5->setText(QApplication::translate("MyMainWindow", "BUFF5", Q_NULLPTR));
        buffname->setText(QString());
        lbbuffeffect->setText(QString());
        lbbuffcost->setText(QString());
        buffcost->setText(QString());
        buffeffect->setText(QString());
        btnbuffcost->setText(QApplication::translate("MyMainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        btnclose2->setText(QApplication::translate("MyMainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        SellBox->setTitle(QApplication::translate("MyMainWindow", "*\345\207\272\345\224\256*", Q_NULLPTR));
        pricesp->setText(QString());
        profitwp->setText(QString());
        countsp->setText(QString());
        pricewp->setText(QString());
        lbsp->setText(QApplication::translate("MyMainWindow", "\345\260\217\350\212\261\347\214\252", Q_NULLPTR));
        lbprice->setText(QApplication::translate("MyMainWindow", "\345\215\225\344\273\267", Q_NULLPTR));
        lbwp_2->setText(QApplication::translate("MyMainWindow", "\345\244\247\350\212\261\347\231\275\347\214\252", Q_NULLPTR));
        weightsp->setText(QString());
        profitsp->setText(QString());
        countwp->setText(QString());
        weightwp->setText(QString());
        lbtype->setText(QApplication::translate("MyMainWindow", "\347\261\273\345\236\213", Q_NULLPTR));
        lbprofit->setText(QApplication::translate("MyMainWindow", "\345\210\251\346\266\246", Q_NULLPTR));
        lbcount->setText(QApplication::translate("MyMainWindow", "\346\225\260\351\207\217", Q_NULLPTR));
        lbweight->setText(QApplication::translate("MyMainWindow", "\345\205\254\346\226\244", Q_NULLPTR));
        lbbp_2->setText(QApplication::translate("MyMainWindow", "\351\273\221\347\214\252", Q_NULLPTR));
        pricebp->setText(QString());
        countbp->setText(QString());
        weightbp->setText(QString());
        profitbp->setText(QString());
        lbprofitsum->setText(QApplication::translate("MyMainWindow", "\346\200\273\346\224\266\347\233\212\357\274\232", Q_NULLPTR));
        profitsum->setText(QString());
        btnok->setText(QApplication::translate("MyMainWindow", "\347\241\256\350\256\244", Q_NULLPTR));
        pop4->setText(QString());
        btnlocksty->setText(QApplication::translate("MyMainWindow", "\346\224\257\344\273\2301000\351\207\221\345\270\201\350\247\243\351\224\201\347\214\252\345\234\210", Q_NULLPTR));
        btnstart->setText(QApplication::translate("MyMainWindow", "start", Q_NULLPTR));
        btnexit->setText(QApplication::translate("MyMainWindow", "exit", Q_NULLPTR));
        btnload->setText(QApplication::translate("MyMainWindow", "load", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
