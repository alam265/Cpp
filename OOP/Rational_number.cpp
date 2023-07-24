#include<iostream>
using namespace std;

class Rational 
{
    private:
        int p;
        int q;
    public:
        Rational(int N=0,int D=0)
        {
            p =N;
            q = D;
        }
        Rational operator+(Rational r)
        {
            Rational t ;
            t.p = p*r.q + r.p*q ;
            t.q = q * r.q ;
            return t ;
        }


    friend ostream & operator<<(ostream &out, Rational &r);

};

ostream & operator<<(ostream &out,Rational &r)
{
    out << r.p <<"/" << r.q ;
    return out ;
}

int main()
{
    int p1,p2,q1,q2;

    
    cout << "Enter:";
    cin >> p1 >> q1 >> p2 >> q2 ;
    Rational r1(p1,q1);
    Rational r2(p2,q2);
    

    Rational r3 = r1 + r2;
    cout << r1 << endl;
    cout << r2 <<endl;

    cout << r3 ;
}