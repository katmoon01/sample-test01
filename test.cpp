#include <iostream>

using namespace std;

inline string fullName(const string &firstName, const string &middleName, const string &familyName)
{
    return familyName+" "+middleName+" "+firstName;
}

int main()
{
    string firstName ="", middleName ="";

    cout<<"Input your middle & first name here: "<<endl;
    cin>>middleName>>firstName;

    cout<<"Your full name is: "<<fullName(firstName,middleName,"Nguyen")<<endl;

    return 0;
}