#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
    public:
    string name,branch ;
    int roll ;
    friend ifstream  & operator>>(ifstream &ifs,Student &s);
};

ifstream  & operator>>(ifstream &ifs,Student &s)
 {
    ifs>> s.name >> s.roll >> s.branch ;
    return ifs ;
 }



int main()
{
    Student s1 ;
   
    ifstream ifs("Student.txt");

    ifs >>s1 ;


    cout << "Name:"<< s1.name<<endl;
    cout << "Roll"<< s1.roll<<endl;
    cout << "Branch:"<< s1.branch;

}