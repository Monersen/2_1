#include <QCoreApplication>
#include <QAbstractSocket>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QAbstractSocket socket{};
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");

    QCoreApplication a(argc, argv);

    return a.exec();
}
