#include <iostream>
#include <cstring>

using namespace std;
int add(int a,int b)
{
    return a+b;
}


void haha()
{
    cout<<"Hahahahaha !"<<endl;
}


class Student
{
    private:
        int ID;
        char* name;

    public:
        Student(int ID,char* name);
        void setID(int ID);
        void setName(char* name);
        void showResult();

        ~Student();
        int getID();
        char* getName();
};


Student::Student(int ID, char* name)
{
    this->ID = ID;
    strcpy(this->name,name);
}

Student::~Student()
{

}

void Student::showResult()
{
    cout<<endl;
    cout<<" =============== Student Information =============== "<<endl;
    cout<<" Student ID   : "<<this->ID<<endl;
    cout<<" Student name : "<<this->name<<endl;
    cout<<" =================================================== "<<endl;
}

void Student::setID(int ID)
{
    this->ID = ID;
}

void Student::setName(char* name)
{
    strcpy(this->name,name);
}

int Student::getID()
{
    return this->ID;
}

char* Student::getName()
{
    return this->name;
}

