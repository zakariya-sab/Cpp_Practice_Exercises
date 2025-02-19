//Write a program sum odd numbers from 1 to n .
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int read_numbre(){
    int number;
    cout <<"Enter a number :";
    cin >>number;
    return number;
}

bool Is_Odd(int cp){
 int modulo = cp % 2 ;
 if(modulo == 1 )
    return 1;
 else
    return 0;
}

void print_numbers(int number){
    int sum =0 ;
    for (int i = 1 ; i<= number ; i++ ){
        if(Is_Odd(i)){
            sum+=i;
        }
    }
    cout <<"the sum : "<<sum;
}

int main ()
{
 print_numbers(read_numbre());
   return 0;
}