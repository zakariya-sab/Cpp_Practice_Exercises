//Write a program to read a number and check if it is Palindrome ? (palindrome number can be read from right to left)
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


int reverseDigits(int N){
    int remainder = 0 , number = 0 ;
    while(N > 0){
        remainder = N % 10;
        number = number * 10 + remainder;
        N /= 10 ;
    }
    return number;
}

bool Is_Palindrome(int number ){
    int number_reverse = reverseDigits(number);
    if(number == number_reverse)
        return true ;
    else
    return false;
}

void print_result(bool result){
    if(result)
        cout << "The number is Palindrome .";
    else
        cout << "The number is not Palindrome .";
}

int main ()
{
print_result(Is_Palindrome(read_number_postive()));
   return 0;
}
