#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,4,6,9,12,45,67,2,45,78};
    v.push_back(100);
    v.pop_back();

    for(auto x:v)
    {
        cout << x <<endl;
    }
}