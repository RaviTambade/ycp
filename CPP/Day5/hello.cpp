
//namespace:
//logical collection of classes

#include <iostream>

using namespace std;
class Person
{
    //access specifiers
    //private, protected, public
    private:
    //data members
    int age;
    string name;
    public:
    //member functions
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }

};


int main()
{
    cout << "Hello World!" << endl;

    Person p1;
    p1.setAge(20);
    p1.setName("John");
    cout<<p1.getAge()<<p1.getName()<<endl;

    Person p2;
    p2.setAge(28);
    p2.setName("Smith");
    cout<<p2.getAge()<<p2.getName()<<endl;

    return 0;
}