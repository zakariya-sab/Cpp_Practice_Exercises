//Write a program print all prime numbers from 1 to N .
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int read_number(){
    int number ;
    do{
    cout <<"Enter a number : ";
    cin >>number;
    }while(number <= 0);
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

void print_result(int number){
    for(int i = 2 ; i<=number;i++){
        if(Is_prime(i))
            cout <<i<<"\n" ;
    }

}

int main ()
{
 print_result(read_number());
   return 0;
}
