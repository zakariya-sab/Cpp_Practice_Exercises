//Write a program is prime or not.
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int read_number(){
    int number ;
    do{
    cout <<"Enter a number : ";
    cin >>number;
    }while(number < 0);
    return number;
}

bool Is_prime(int numbre ){
    int modulo = 1 ;
    if( numbre == 0){
        return false;
    }
    for(int i =2 ; i<= numbre/2 ; i++ ){
      modulo = numbre % i ;
      if(modulo == 0){
        return false;
      }
    }
    return true ;
}

void print_result(bool result){
    if(result)
        cout<<"the number is prime";
    else
        cout<<"the number is not prime";
}

int main ()
{
 print_result(Is_prime(read_number()));
   return 0;
}