// read number  then print the Half .
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

float  read_number(){
    float number;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

float Half_number(float half ){
    return (half /2) ;
}
void print_half_nbr(float number){
    cout << "The Half of = "<<number<<endl;

}

int main ()
{
   print_half_nbr(Half_number(read_number()));
    return 0;
}