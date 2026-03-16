#include <iostream>
using namespace std;

class Student
{
private:
public:
    /* data */
    string name;
    int roll, age;

    // constructor

    Student(string name, int roll, int age){
        this->name = name;
        this->roll = roll;
        this->age = age;
    }
};

int main()
{
    Student *s1 = new Student("a", 2, 3);
}
