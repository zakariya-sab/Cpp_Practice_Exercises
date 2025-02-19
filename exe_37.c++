//Write a program to read numbers from user and sum them keep reading until the user enter -99 .
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int read_number(){
    int number ;
    cout <<"Enter a number : ";
    cin >>number;
    return number;
}

int sum_and_read_until(){
    int sum = 0;
    int number;
    do{
        number = read_number();
        if(number != -99 )
            sum += number;
    }while(number != -99 );
    return sum ;
}

void print_result(int nbr){
    cout << endl <<"result is :"<<nbr;
}

int main ()
{
 print_result(sum_and_read_until());
   return 0;
}