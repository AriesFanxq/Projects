#include "TestGitDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	// test again
    TestGitDemo w;
    w.show();
    return a.exec();
}
