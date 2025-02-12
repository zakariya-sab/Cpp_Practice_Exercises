//Read number from user and check is Odd or even.
#include <iostream>
#include <cmath>
#include <string>

using namespace std ;

enum enNumber_Type {Even,Odd};
int read_number(){
    int number;
    cout <<"Enter a number :";
    cin >> number;
    return number ;
}

enNumber_Type check_type_num(int number){
    short modulo = number%2;
    if(modulo == 1)
    {
        return enNumber_Type ::Odd;
    }
    else
    {
        return enNumber_Type::Even;
    }
}

void print_number_type(enNumber_Type number){
    if(number == enNumber_Type::Even){
        cout <<"the number is Even."<<endl;
    }
    else{
        cout <<"the number is Odd."<<endl;
    }
}
int main ()
{
  print_number_type(check_type_num(read_number()));
return 0;
}