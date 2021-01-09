#include <iostream>
using namespace std;
class Test {
    int a;
 
public:
    Test() { a = 1; }
 
    void func(int a) { cout << this->a; }
};
 
/*
class Test           //secend test case
{
    static int a;  // a IS STATIC NOW
public:
 
    void func(int a)  { cout << Test::a; }
};
 

int Test::a = 1;
 */
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);
    return 0;
}
