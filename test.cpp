#include <iostream>
#include <cstring>

#define N 100

typedef int integer;

using namespace std;

class Student
{
    private:
    integer ID;
    char name[N];
    char address[N];
    char gender[N];
    float mark;

    public:
    Student(integer ID, char* name, char* address, char* gender, float mark);
    void showResult();
    void setID(integer ID);
    void setName(char* name);
    void setAddress(char* address);
    void setGender(char* gender);
    void setMark(float mark);

    integer getID();
    char* getName();
    char* getAddress();
    char* getGender();
    float getMark(); 

};

void Student::setID(integer ID){
    this->ID = ID;
}

void Student::setName(char* name){
    strcpy(this->name,name);

}

void Student::setAddress(char* address){
    strcpy(this->address,address);

}

void Student::setGender(char* gender){
    strcpy(this->gender,gender);

}

void Student::setMark(float mark){
    this->mark = mark;
}

integer Student::getID(){
    return this->ID;
}

char* Student::getName(){
    return this->name;
}

char* Student::getAddress(){
    return this->address;
}

char* Student::getGender(){
    return this->gender;
}

float Student::getMark(){
    return this->mark;
}

Student::Student(integer ID, char* name, char* address, char* gender, float mark)
{
    this->ID = ID;
    strcpy(this->name,name);
    strcpy(this->address,address);
    strcpy(this->gender,gender);
    this->mark = mark;
}

void Student::showResult()
{
    cout<<endl;
    cout<<" =============== Student Information =============== "<<endl;
    cout<<" Student ID   : "<<this->ID<<endl;
    cout<<" Student name : "<<this->name<<endl;
    cout<<" Gender       : "<<this->gender<<endl;
    cout<<" Address      : "<<this->address<<endl;
    cout<<" Mark         : "<<this->mark<<endl;
    cout<<" =================================================== "<<endl;
}


int main()
{
    int ID = 1710111;
    char* name = new char[N];
    char* gender = new char[N];
    char* address = new char[N];
    float mark = 9.9;

    strcpy(name,"Nguyen Minh Huyyyyy");
    strcpy(gender,"Male");
    strcpy(address,"TP.HCM");

    Student student(ID,name,gender,address,mark);

    strcpy(name,"Nguyen Minh Huy");
    student.setID(1710111);
    student.setName(name);
    student.setMark(10);

    student.showResult();

    delete name,gender,address;

    return 0;
}