//Write a program to read a number and print  letter pattern as follows ?
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
    for(int i = number -64 ; i >= 1 ;i--){
        cout <<char(number);
    }
}

void pattern(int number ){
    number += 64;
    if(number <= 90 )
    //1er methode :
    {
        for(int i = 65 ; i!= number +1; i++){
           for(int j = i-64 ; j >= 1 ;j--){
                cout <<char(i);
            }
           cout<<"\n";
        }
    }
    //2eme methode :
  /*      {
            do{
                print_muli(number);
                number--;
                cout<<"\n";
            }while(number !=64 );
        }
   */
    else
        cout <<"The max letter is 26 !\a";
}

int main ()
{
pattern(read_number_postive());
   return 0;
}