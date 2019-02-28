#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QDebug>

QTranslator g_tran;//必须设置成全局变量，如果是局部变量，设置将失效。
void setLanguage(int lan)//全局函数，可供其他文件调用
{
    bool ok = false;
    if (lan == 1)//中文
    {
        ok = g_tran.load("./src/lanlib/my_zh.qm");//这里使用Qt资源文件,把.qm文件拷贝到项目路径/lan之下
        qDebug()<<"tran zh 1!";
        QCoreApplication::installTranslator(&g_tran);
    }
    else if (lan == 2)//英文
    {
        ok = g_tran.load("./src/lanlib/my_zh2.qm");
        qDebug()<<"tran zh 2!";
        QCoreApplication::installTranslator(&g_tran);

    }else if (lan == 3)//英文
    {
        //ok = g_tran.load("./src/lanlib/my_zh2.qm");
        qDebug()<<"tran en!";
        QCoreApplication::removeTranslator(&g_tran);
    }

    if(ok) {
        qDebug()<<"okokok!";
    } else {
        qDebug()<<"nonono!";
    }

    //或者写成qApp->installTranslator(&g_tran);
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //setLanguage(1);//调用全局函数
    setLanguage(1);//调用全局函数

//    bool ok = false;
//    QTranslator s_tran;//必须设置成全局变量，如果是局部变量，设置将失效。
//    ok = s_tran.load("./src/lanlib/my_zh.qm");//这里使用Qt资源文件,把.qm文件拷贝到项目路径/lan之下
//    if(ok) {
//        qDebug()<<"okokok!";
//    } else {
//        qDebug()<<"nonono!";
//    }
//    QCoreApplication::installTranslator(&s_tran);

    MainWindow w;
    w.show();

    return a.exec();
}
