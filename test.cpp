#include <iostream>
#include <cstring>

#define integer int
#define N 100

using namespace std;


class Student
{
    private:
    integer ID;
    char name[N];
    integer age;
    float mark;
    char address[N];

    public:
    Student();
    Student(int ID, char* name, int age, float mark, char* address);
    void outputData();
    

    ~Student()
    {
        
    }
};


class Teacher
{
    private:

    char name[N];
    integer age;
    char gender[N];
    char address[N];

    public:

    Teacher(char* name, integer age, char* gender, char* address);

    void outputData();

    ~Teacher()
    {

    }

};

Teacher::Teacher(char* name, integer age, char* gender, char* address)
    {
        strcpy(this->name,name);
        this->age = age;
        strcpy(this->gender,gender);
        strcpy(this->address,address);
    }

void Teacher::outputData()
    {
        cout<<endl;
        cout<<" =============== Teacher Information ================ "<<endl;

        cout<<" Ho ten GV: "<<this->name<<endl;
        cout<<" Gioi tinh: "<<this->gender<<endl;
        cout<<" Tuoi: "<<this->age<<endl;
        cout<<" Dia chi: "<<this->address<<endl;

        cout<<" ==================================================== "<<endl;
    }


Student::Student()
    {   
        this->ID = 0;
        this->name[0] = '\0';
        this->age = 0;
        this->address[0] = '\0';
        this->mark = 0;
    }

Student::Student(int ID, char* name, int age, float mark, char* address)
    {
        this->ID = ID;
        this->age = age;
        this->mark = mark;
        strcpy(this->name,name);
        strcpy(this->address,address);
    }

void Student::outputData()
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
    char* gender = new char[N];

    strcpy(name1,"Nguyen Vinh Hao");
    strcpy(address1,"TP.HCM");
    strcpy(gender,"Male");

    Teacher t(name1,50,gender,address1);
    t.outputData();


    delete name, address, name1, address1;
    
    return 0;
}