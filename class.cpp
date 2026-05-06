// #include <iostream>
// using namespace std;
// class enemy {
//     string type ;
//     int health ;
//     int ammo  ;
// } ;
// int main() {
//      enemy e1 ;
//      e1.health = 98 ;
//      cout<< e1.health ;
//     return 0;
// }

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int batch;

    student(string n, int b);

public:
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << batch << endl;
    }
};

student::student(string n, int b)
{
    name = n;
    batch = b;
}

int main()
{
    student s1("mamun", 19);
    s1.display();
    student s2("abdullah al mamun ", 10000);
    s2.display();
    return 0;
}