#include <iostream>

#define N 100

using namespace std;

typedef int integer;


struct Car 
{
    char color[N];
    integer price;
    char branch[N];
};

struct Pet
{
    char color[N];
    integer age;
    char type[N];
    char sex[N];
};

struct Student
{
    integer ID;
    char name[N];
    integer age;
    float mark;
    char address[N];
    Car car;
    Pet pet;
};


void inputData(Student* arr)
{
    cout<<" Nhap ho ten SV: "<<endl;
    cin.getline(arr->name,N);
    cout<<" Nhap MSSV: "<<endl;
    cin>>arr->ID;
    cout<<" Nhap tuoi: "<<endl;
    cin>>arr->age;
    cout<<" Nhap diem SV: "<<endl;
    cin>>arr->mark;
    cin.ignore();
    cout<<" Nhap dia chi SV: "<<endl;
    cin.getline(arr->address,N);
    cout<<" Nhap hang xe cua sv: "<<endl;
    cin>>arr->car.branch;
    cout<<" Nhap thu cung cua SV: "<<endl;
    cin>>arr->pet.type;
}

void outputData(Student* arr)
{
    cout<<endl;
    cout<<" =============== Student Information ================ "<<endl;

    cout<<" Ho ten SV: "<<(*arr).name<<endl;
    cout<<" MSSV: "<<arr->ID<<endl;
    cout<<" Tuoi: "<<arr->age<<endl;
    cout<<" Diem SV: "<<arr->mark<<endl;
    cout<<" Dia chi SV: "<<arr->address<<endl;
    cout<<" Hang xe cua sv: "<<arr->car.branch<<endl;
    cout<<" Thu cung cua SV: "<<arr->pet.type<<endl;

    cout<<" ==================================================== "<<endl;
}

int main()
{
    Student* sPtr = new Student();

    inputData(sPtr);
    outputData(sPtr);

    delete sPtr;
}