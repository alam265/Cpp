#include<iostream>
using namespace std;


namespace first
{
void func()
{
    cout << "First function";
}
}
namespace second{
void func()
{
    cout << "Second function";
}
}
int main()
{
    first::func();
}
