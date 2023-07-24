#include<iostream>
#include<string>
using namespace std ;

int add(int x,int y)
{
    return x+y ;
}
int add(int x,int y,int z)
{
    return x+y+z ;
}
float add(float x,float y)
{
    return x+y ;
}
float add(float x,float y,float z)
{
    return x+y+z ;
}




int main()
{
   int x,y,z ;
   float a,b,c ;
   string str ;
   int num;

   cout << "DataType: ";
   cin >> str ;
   
   if(str == "float")
   {
     cout << "Enter how many number want to add:" ;
     cin >> num ;
       if(num==3)
       {
        cout << "Enter: ";
        cin >>a >>b >>c ;
        cout << add(a,b,c);
       }
       else if (num==2)
       {
        cout << "Enter: ";
        cin >>a >>b  ;
        cout << add(a,b);

       }




   }
      if(str == "integer")
      cout << "Enter how many number want to add:" ;
      cin >> num ;
       if(num==3)
       {
        cout << "Enter: ";
        cin >>x >>y >>z ;
        cout << add(x,y,z);
       }
       else if (num==2)
       {
        cout << "Enter: ";
        cin >>x >>y;
        cout << add(x,y);

       }
   {
    







   }

   
}