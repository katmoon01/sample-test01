#include <iostream>
#include <string>

#define N 1000

using namespace std;

typedef struct Info
{
    string name;
    int age; 

    void printInfo(string name, int age)
    {
        cout<<"Your name is "<<name<<", you are "<<age<<"!"<<endl;
    }
};

void outputArr(char* arr)
{
   
    for (size_t i = 0; i < 3; i++)
    {
        /* code */

        cout<<arr[i];
    }
    cout<<endl; 
}

int main()
{
    Info info;

    char* arr= new char[100]; 

    cout<<"Input your name: "<<endl;
    getline(cin,info.name);

    cout<<"Input your age: "<<endl;
    cin>>info.age;
    
    info.printInfo(info.name,info.age);


    cout<<"Input your first name: "<<endl;

    for (size_t i = 0; i < 3; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    outputArr(arr);

    return 0;
}