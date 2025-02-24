//Write a program to read a number and print sum of its digits.
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

short countDigits(int number){
    short counte = 0;
    while(number > 0 ){
        number /= 10 ;
        counte++ ;
    }
    return counte;
}

void print_result(short result){
    cout <<"the sum of digite is :"<< result;
}

void  SumOfDigits(int number){
    short sum = 0;
    while(number > 0){
        sum += number % 10;
        number /= 10;
    }
    print_result(sum);
}

int main ()
{
 SumOfDigits(read_number_postive());
   return 0;
}