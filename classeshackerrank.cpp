#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
private:
    int age;
    string FirstName;
    string LastName;
    int standard;

public:
    int getage()
    {
        return age;
    }
    string getFirstName()
    {
        return FirstName;
    }
    string getLastName()
    {
        return LastName;
    }
    int getstandard()
    {
        return standard;
    }
    void setage(int a)
    {
        age = a;
    }
    void setFirstName(string f)
    {
        FirstName = f;
    }
    void setLastname(string l)
    {
        LastName = l;
    }
    void setstandard(int s)
    {
        standard = s;
    }
};

int main()
{
    int age, standard;
    string FirstName, LastName;
    cin >> age >> FirstName >> LastName >> standard;
    Student s1;
    s1.setage(age);
    cout << s1.getage() << endl;

    s1.setFirstName(FirstName);
    s1.setLastname(LastName);
    cout << s1.getLastName() << ", " << s1.getFirstName() << endl;
    s1.setstandard(standard);
    cout << s1.getstandard() << endl;

    cout << endl;

    cout << s1.getage() << "," << s1.getFirstName() << "," << s1.getLastName() << "," << s1.getstandard() << endl;

    return 0;
}
