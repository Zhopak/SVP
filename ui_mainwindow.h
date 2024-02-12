/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *vozrast;
    QLineEdit *ves;
    QLineEdit *rost;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QLabel *label_6;
    QSplitter *splitter;
    QLabel *mu;
    QLabel *zh;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 240);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 641, 20));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 30, 311, 211));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 71, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 47, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 47, 13));
        vozrast = new QLineEdit(groupBox);
        vozrast->setObjectName(QString::fromUtf8("vozrast"));
        vozrast->setGeometry(QRect(80, 30, 113, 20));
        ves = new QLineEdit(groupBox);
        ves->setObjectName(QString::fromUtf8("ves"));
        ves->setGeometry(QRect(80, 60, 113, 20));
        rost = new QLineEdit(groupBox);
        rost->setObjectName(QString::fromUtf8("rost"));
        rost->setGeometry(QRect(80, 90, 113, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 120, 311, 23));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 150, 311, 23));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 180, 311, 23));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 20, 47, 13));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(530, 20, 47, 13));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(310, 40, 331, 20));
        splitter->setOrientation(Qt::Horizontal);
        mu = new QLabel(splitter);
        mu->setObjectName(QString::fromUtf8("mu"));
        splitter->addWidget(mu);
        zh = new QLabel(splitter);
        zh->setObjectName(QString::fromUtf8("zh"));
        splitter->addWidget(zh);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202 \320\261\320\260\320\267\320\276\320\262\320\276\320\263\320\276 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\260 \320\272\320\260\320\273\320\276\321\200\320\270\320\271", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\201", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 \320\242\320\276\320\274\320\260 \320\222\320\265\320\275\321\203\321\202\320\276", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 \320\234\320\270\321\204\321\204\320\273\320\270\320\275\320\260-\320\224\320\266\320\265\320\276\321\200\320\260", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 \320\245\320\260\321\200\321\200\320\270\321\201\320\260-\320\221\320\265\320\275\320\265\320\264\320\270\320\272\321\202\320\260", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\234\321\203\320\266", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\226\320\265\320\275", nullptr));
        mu->setText(QString());
        zh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
