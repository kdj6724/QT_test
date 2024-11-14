#include "Dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QAp123plication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
