#include <iostream>
using namespace std;
class myClass//Base class (Parant)
{
    public:
    void myfunc()
    {
        cout << "Hello, World" << endl;
    }
};
class mybase: public myClass// Derived class (child)
{
    public:
    void fun()
    {
        cout << "My name is Ismail Zia" << endl;
    }
};
int main()
{
    mybase obj;
    obj.myfunc();
    obj.fun();
    return 0;
}