#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollNo;
    string name;

public:
    student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }

    void display()
    {
        cout << "roll number:" << rollNo << endl;
        cout << "name:" << name << endl;
    }

    ~student()
    {
        cout << "student object destroyed" << endl;
    }
};

int main()
{
    student s1(101, "arun");
    s1.display();
    return 0;
}