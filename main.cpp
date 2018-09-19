#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication a(argc, argv);

    MainWindow w;

    QImage imagebackground;
    imagebackground.load(":/img/background.jpg");

    QPalette palette;
    palette.setBrush(w.backgroundRole(), QBrush(imagebackground));
    w.setPalette(palette);
    w.setAutoFillBackground(true);
    w.show();

    return a.exec();
}
