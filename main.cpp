#include <QApplication>
#include "server.h"


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Server* s1 = Server::Instance();
    return app.exec();
}
