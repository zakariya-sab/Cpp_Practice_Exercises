//Write a program to read a number and print inverted pattern 
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

void print_muli(int number){
    for(int i = 0; i<number ;i++){
        cout <<number;
    }
}

void pattern(int number ){
    int number2 = 1 ;
    do{
        print_muli(number2);
        number2++;
        cout<<"\n";
      }while(number >= number2);
}

int main ()
{
pattern(read_number_postive());
   return 0;
}
