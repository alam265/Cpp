#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l= {1,4,6,9,12,45,67,2,45,78};
    l.push_back(100);
    l.pop_back();

    for(auto x:l)
    {
        cout << x <<endl;
    }

  
}