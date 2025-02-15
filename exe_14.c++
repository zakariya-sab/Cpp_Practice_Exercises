//Swap Two Numbers .
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void read_numbers(int table[2] ){
    cout<<"Enter the first number : ";
    cin >> table[0];
    cout<<"Enter the second number : ";
    cin >> table[1];
}
void SwapTowNumber(int table[2]){
    int Temp = table[0];
    table[0] = table[1];
    table[1] = Temp;
}

void print_result(int table[2]){
    cout << endl ;
    cout <<"the first number = "<<table[0];
    cout << endl ;
    cout <<"the second number = "<<table[1];
    cout << endl ;
}
int main ()
{
    int table[2];
    read_numbers(table);
    print_result(table);
    SwapTowNumber(table);
    print_result(table);
   return 0;
}