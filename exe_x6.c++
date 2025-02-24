//Write a program to read a number then  reversed order.
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

int reverseDigits(int number){
    int remainder = 0 , number2 = 0 ;
    while(number > 0){
        remainder = number % 10;
        number2 = number2 * 10 + remainder;
        number /= 10 ;
    }
    return number2;
}

void print_result(int result){
    cout <<"the reverse number is "
         <<result;
}

int main ()
{
print_result(reverseDigits(read_number_postive()));
   return 0;
}