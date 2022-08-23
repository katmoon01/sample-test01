#include <iostream>
#include <functional>
#include <memory>

using namespace std;

class Class1
{
    int x, y;
    public:

    Class1(int a, int b): x(a),y(b){};

    int Invoke(function<int(int,int)> Fx)
    {
        return Fx(this->x,this->y);
    }

};

int add(int a, int b)
{
    return a+b; 
}


int main()
{
    auto Ptr = make_shared<Class1>(99,100);
    
    cout<<"Result: "<<Ptr->Invoke(add)<<endl;

    return 0;
}