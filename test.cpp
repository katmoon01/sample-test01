#include <iostream>

#define N 100

using namespace std;

typedef int integer;


struct Car 
{
    char color[N];
    int price;
    char branch[N];
};

struct Pet
{
    char color[N];
    int age;
    char type[N];
    char sex[N];
};

struct Student
{
    integer ID;
    char name[N];
    int age;
    float mark;
    char address[N];
    Car car;
    Pet pet;
};


void inputData(Student* arr)
{
    cout<<" Nhap ho ten SV: "<<endl;
    cin.getline(arr[1].name,N);
    cout<<" Nhap MSSV: "<<endl;
    cin>>arr[1].ID;
    cout<<" Nhap tuoi: "<<endl;
    cin>>arr[1].age;
    cout<<" Nhap diem SV: "<<endl;
    cin>>arr[1].mark;
    cin.ignore();
    cout<<" Nhap dia chi SV: "<<endl;
    cin.getline(arr[1].address,N);
    cout<<" Nhap hang xe cua sv: "<<endl;
    cin>>arr[1].car.branch;
    cout<<" Nhap thu cung cua SV: "<<endl;
    cin>>arr[1].pet.type;
}

void outputData(Student* arr)
{
    cout<<" =============== Student Information ================ "<<endl;

    cout<<" Ho ten SV: "<<arr[1].name<<endl;
    cout<<" MSSV: "<<arr[1].ID<<endl;
    cout<<" Tuoi: "<<arr[1].age<<endl;
    cout<<" Diem SV: "<<arr[1].mark<<endl;
    cout<<" Dia chi SV: "<<arr[1].address<<endl;
    cout<<" Hang xe cua sv: "<<arr[1].car.branch<<endl;
    cout<<" Thu cung cua SV: "<<arr[1].pet.type<<endl;

    cout<<" ==================================================== "<<endl;
}

int main()
{
    Student arr[N];

    inputData(arr);
    outputData(arr);


}