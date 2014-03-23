#include <iostream>
#include <typeinfo>
using namespace std;



class A
{
public:
    int x=1;
    int y=2;
    virtual int tu(){}
//    virtual int fu()
//    {
//        return 8;
//    }
    static int fua()
    {
        return 22;
    }

};


class B: public A
{
public:
    int z=3;
    int fu()
    {
        return z;
    }
};


int main()
{
    A a;
    B b;
    A* ap=&b;

    //type_info r=typeid(z);
    cout << "  " << typeid(a).name() << endl;
    cout << "  " << typeid(b).name() << endl;
    cout << "  " << typeid(*ap).name() << endl;
    cout << "  " << typeid(ap).name() << endl;
    cout << B::fua();
    return 0;
}

namespace ssd{

    int fuja();
}
namespace ssd{

    int guja();
}
int ssd::fuja()
{
    return 0;
}
int ssd::guja()
{
    return 2;
}


