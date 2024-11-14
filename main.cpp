#include "Dialog.h"

#include <QApplication>

121113
int main(int argc, char *argv[])
{
    QAp123plication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
