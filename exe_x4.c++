//Write a program to read a number and print it in a reversed order.
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

void print_result(int result){
    cout <<"\n"<< result;
}

void  reverseDigits(int number){
    while(number > 0){
        print_result(number%10);
        number /= 10 ;
    }
}


int main ()
{
reverseDigits(read_number_postive());
   return 0;
}