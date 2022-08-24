#include <iostream>
#include <memory>

using namespace std;

struct Class1 
{
    int x;
public:
    Class1(int a):x(a){};
    int operator() (int y)
    {
        cout<<"Inside operator"<<endl;
        return x+y;
    }

};

int main()
{
    Class1 class1(9);
    int val = class1(10);

    cout<<val<<endl;
    return 0;
}