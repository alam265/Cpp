#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
    public:
    string name,branch ;
    int roll ;
    Student(string n,int r,string b)
    {
        name = n;
        roll =r;
        branch = b;
    }
    friend ifstream & operator>>(istream &ofs, Student &s);
};

 ostream & operator<<(ostream &ofs, Student &s)
 {
    ofs<< s.name <<endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs ;
 }



int main()
{
    Student s1("Majed",10,"CSE") ;
    
    ofstream ofs("Student.txt");

    ofs << s1 ;

    
}