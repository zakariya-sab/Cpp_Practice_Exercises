//Write a program to read a number of hours and calculates the number of weeks ,and days included.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

float read_number_of_hours(){
    float number ;
    do{
    cout <<"Pleas Enter number of hours : ";
    cin >>number;
    }while(number < 0);
    return number;
}

float calculate_number_of_days(float hours){
    float days = hours / 24 ;
    return days;
}

float calculate_number_of_weeks(float hours ){
    float days = calculate_number_of_days(hours);
    float weeks = days / 7;
    return weeks;
}

void print_result( float weeks , float days ){
    cout <<endl<<"The number of days is : "<<days<<" days";
    cout <<endl<<"The number of weeks is : "<<weeks<<" weeks";
}

int main ()
{
    float hours =  read_number_of_hours();
    print_result( calculate_number_of_weeks(hours) , calculate_number_of_days(hours) );
   return 0;
}