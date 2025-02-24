//Write a program to read a digit and a number , then print digit frequency in that number.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int read_number_postive(){
    int number ;
    do{
    cout <<"Enter a number : ";
    cin >>number;
    }while(number <= 0);
    return number;
}

short countDigits(int number , int digit){
    short counte = 0;
    short remainder = 0;
    while(number > 0 ){
        remainder = number % 10 ;
        number /= 10 ;
        if( remainder == digit)
        counte++ ;
    }
    return counte;
}


void print_result(int result ,int digit ){
    cout <<"Digit "<<digit <<" Frequency is :"<<result <<" Time(s)";
}

int main ()
{
    int number = read_number_postive();
    int digit = read_number_postive();
    print_result(countDigits(number , digit) ,digit);
   return 0;
}