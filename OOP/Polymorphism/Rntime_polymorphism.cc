#include<iostream>
using namespace std;

class Car 
{
    public:
    virtual void start(){cout<<"Car Start";}
    virtual void stop(){cout << "Car Stopped";}

};

class Innova:public Car
{
    void start(){cout<<"Innova Start";}
    void stop(){cout << "Innova Stopped";} 

};

class Swift: public Car 
{
    void start(){cout<<"Swift Start";}
    void stop(){cout << "Swift Stopped";}
};


int main()
{
    Car *c = new Innova;
    c-> start();
                               cout << endl;
    c = new Swift ;
    c-> start();
}
