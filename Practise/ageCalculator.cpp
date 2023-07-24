#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int D_day,D_month,D_year ;
    int C_day,C_month,C_year ; 
    int day, month, year ;

    cout << "Enter DOB day, monrth, year:";
    cin >> D_day >> D_month >> D_year ;

    cout << "Enter Current day,monht,year:";
    cin >> C_day>>C_month>>C_year ;


    if (D_month == 1 || D_month == 3 || D_month == 5 || D_month == 7 || D_month == 8 || D_month == 10 || D_month == 12 )
    {

        if (C_day<D_day && C_month < D_month)
        {
            year = C_year - D_year -1 ;
            month = C_month + 12 - 1 - D_month ;
            day = C_day + 31 - D_day ;

             

        }
        else if(C_day<D_day && C_month > D_month ) 
        {
            year = C_year - D_year  ;
            month = C_month  - 1 - D_month ;
            day = C_day + 31 - D_day ;

        }
        else if (C_day > D_day && C_month < D_month)
        {
            year = C_year - D_year -1  ;
            month = C_month  + 12 - D_month ;
            day = C_day - D_day ;
            
        }
        else 
        {
            year = C_year - D_year   ;
            month = C_month  - D_month ;
            day = C_day - D_day ;
        }
        cout << "Day:"<< day << " Month: " << month << " Year: " << year ;

    }
    else 
    {
        
        if (C_day<D_day && C_month < D_month)
        {
            year = C_year - D_year -1 ;
            month = C_month + 12 - 1 - D_month ;
            day = C_day + 30 - D_day ;

             

        }
        else if(C_day<D_day && C_month > D_month ) 
        {
            year = C_year - D_year  ;
            month = C_month  - 1 - D_month ;
            day = C_day + 30 - D_day ;

        }
        else if (C_day > D_day && C_month < D_month)
        {
            year = C_year - D_year -1  ;
            month = C_month  + 12 - D_month ;
            day = C_day - D_day ;
            
        }
        else 
        {
            year = C_year - D_year   ;
            month = C_month  - D_month ;
            day = C_day - D_day ;
        }
        cout << "Day:"<< day << " Month: " << month << " Year: " << year ;







    }
    

}