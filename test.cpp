#include <iostream>
#include <cstring>

#define integer int
#define N 100

using namespace std;


class Student
{
    public:

    integer ID;
    char name[N];
    integer age;
    float mark;
    char address[N];

    Student()
    {   
        cout<<" Call non parameter contructor ! "<<endl;
        this->ID = 0;
        this->name[0] = '\0';
        this->age = 0;
        this->address[0] = '\0';
        this->mark = 0;
    }

    Student(int ID, char* name, int age, float mark, char* address)
    {
        cout<<" Call full parameters contructor ! "<<endl;
        this->ID = ID;
        this->age = age;
        this->mark = mark;
        strcpy(this->name,name);
        strcpy(this->address,address);
    }


    void showIDcard(int ID)
    {

    }

    void study(char* subject)
    {


    }

    void takeExam(char* subject)
    {

    }

    void payFee(int amount)
    {


    }

    void outputData()
    {
        cout<<endl;
        cout<<" =============== Student Information ================ "<<endl;

        cout<<" Ho ten SV: "<<this->name<<endl;
        cout<<" MSSV: "<<this->ID<<endl;
        cout<<" Tuoi: "<<this->age<<endl;
        cout<<" Diem SV: "<<this->mark<<endl;
        cout<<" Dia chi SV: "<<this->address<<endl;

        cout<<" ==================================================== "<<endl;
    }

    ~Student()
    {
        cout<<" Call destructor !"<<endl; 
    }
};


class Teacher
{
    public:

    char name[N];
    integer age;
    char gender[N];
    char address[N];

    Teacher(char* name, integer age, char* gender, char* address)
    {
        strcpy(this->name,name);
        this->age = age;
        strcpy(this->gender,gender);
        strcpy(this->address,address);
    }

    void outputData()
    {
        cout<<endl;
        cout<<" =============== Teacher Information ================ "<<endl;

        cout<<" Ho ten GV: "<<this->name<<endl;
        cout<<" Gioi tinh: "<<this->gender<<endl;
        cout<<" Tuoi: "<<this->age<<endl;
        cout<<" Dia chi: "<<this->address<<endl;

        cout<<" ==================================================== "<<endl;
    }

    ~Teacher()
    {

    }

};

int main()
{
    char* name = new char[N];
    char* address = new char[N];

    strcpy(name,"Nguyen Minh Huy");
    strcpy(address,"TP.HCM");

    Student s;
    Student s1(1710111,name,23,9.9,address);
    s1.outputData();


    char* name1 = new char[N];
    char* address1 = new char[N];
    strcpy(name1,"Nguyen Vinh Hao");
    strcpy(address1,"TP.HCM");
    Teacher t(name1,40,"Male",address1);
    t.outputData();


    return 0;
}