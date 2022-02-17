#include <QCoreApplication>
class C
{

public:
    void Calc(int a, int b);

};
class B
{

public:
    void Calc(int a, int b);

};

class A
{

public:
    void Calc(int a, int b);

};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
