#include<iostream>
using namespace std;

class A
{
public:
    int i;
    A(int iPara) :i(iPara) { std::cout << "construct A" << i << std::endl; };
    A(const A& a) { std::cout << "copy A" << i << std::endl;; };
    A& operator=(const A& a) { std::cout << "assignA" << i << std::endl; return *this; };
    ~A() { std::cout << "destruct A" << i << std::endl;; };
};

A getA(int v)
{
    return A(v);
}
int main()
{
    cout << "1.����ֵ�Ż�\n";
    {
        A a(1);
        a = getA(2);
        //construct A1
        //construct A2
        //assignA1
        //destruct A2
        //destruct A1
    }
    cout << "\n\n";
    {
        A a = getA(3);
        //construct A3
        //destruct A3
    }
    cout << "\n\n";
    {
        A a = A(4);
        //construct A4
        //destruct A4
    }
    cout << "\n\n";

    cout << "2.����ֵ�Ż�\n";

    return 0;
}