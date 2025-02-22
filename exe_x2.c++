//Write a program to check if the number is Prefect or not (prefect = sum all divisors).
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

bool Is_prefect(int numbre ){
    int sum_all_diviors = 0 ;
    for(int i = 1; i <= numbre/2 ;i++){
        if(numbre % i == 0)
            sum_all_diviors += i;
    }
    if(sum_all_diviors == numbre )
        return true ;
    else
        return false;
}

void print_result(bool result ){
    if(result)
        cout << endl<<"the number is prefect\a ";
    else
        cout << endl<<"the number is not prefect ";
}

int main ()
{
 print_result(Is_prefect(read_number()));
   return 0;
}