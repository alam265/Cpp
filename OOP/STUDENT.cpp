#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student 
{
    private: 
      int roll;
      string name;
      float mark1,mark2,mark3 ;

    public:
      Student(int r,string n,float m1,float m2,float m3)
      {
        roll =r ;
        name = n;
        mark1 = m1 ;
        mark2= m2 ;
        mark3=m3; 
      }
      float totalMark()
      {
        return mark1 + mark2 + mark3;
      }
      char grade()
      {
         float total = mark1 + mark2 + mark3 ;
         if(total>=270 && total<=300){return 'A';}
         else {return 'B';} 
      }

};

int main()
{
    Student s(10,"Alam",90,91,80);

    cout << s.grade() <<endl;
    cout << s.totalMark()<<endl;
}