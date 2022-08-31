#include <iostream>
#include <memory>

using namespace std;

class Class1
{
    int x,y,z;
public:
    Class1(int a, int b, int c): x(a),y(b),z(c){};
    auto GetX();
    auto GetY();
    auto GetZ();
    ~Class1(){cout<<"Destructor was called"<<endl;}
};

auto Class1::GetX(){return this->x;}
auto Class1::GetY(){return this->y;}
auto Class1::GetZ(){return this->z;}

template<typename First>
inline void Func(First first){first++;cout<<first<<endl;}

template<typename First, typename... Rest>
inline void Func(First first,Rest... rest)
{
    first += 1;
    cout<<first<<endl;
    Func(rest...);
}

int main()
{
    auto Ptr = make_shared<Class1>(1,2,3);

    auto lamb = [=](){Func(Ptr->GetX(),Ptr->GetY(),Ptr->GetZ());};
    lamb();

    return 0;
}